#include "main.h"
#include <stdio.h>
#include <elf.h>
#include <inttypes.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#define ELF32_HEADER_SIZE (sizeof(Elf32_Ehdr))
#define ELF64_HEADER_SIZE (sizeof(Elf64_Ehdr))

/**
 * ensure_endianness - ensures endianness
 * @little_e: whether data is little endian
 * @data: data to ensure
 * @len: lenth of data
 *
 * Return: void
 */

void ensure_endianness(char little_e, void *data, unsigned int len)
{
	unsigned long num = 1, i = 0;
	char _little_e = ((num >> 8) << 8 != num), tmp, *_data = data;

	if (little_e != _little_e)
		for (i = 0; i < len / 2; i++)
			tmp = _data[i], _data[i] = _data[len - i - 1], _data[len - i - 1] = tmp;
}

/**
 * put_err - prints a string to the standard error file
 * @str: string to print
 *
 * Return: void
 */

void put_err(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	write(STDERR_FILENO, str, len);
}

/**
 * print_elf_header - prints the contents of an elf header (first half)
 * @h: elf header
 *
 * Return: void
 */

void print_elf_header(void *h)
{
	Elf32_Ehdr *header = h;
	unsigned char c, i;

	printf("ELF Header:\n");
	printf("  Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
		printf(" %02x", header->e_ident[(int)i]);
	printf("\n");

	printf("  Class:                             ");
	c = header->e_ident[EI_CLASS];
	printf(c == ELFCLASS32 ? "ELF32"
			: c == ELFCLASS64 ? "ELF64"
			: c == ELFCLASSNONE ? "none" : "<unknown: %x>", c);
	printf("\n");

	printf("  Data:                              ");
	c = header->e_ident[EI_DATA];
	printf(c == ELFDATA2LSB ? "2's complement, little endian"
			: c == ELFDATA2MSB ? "2's complement, big endian"
			: c == ELFDATANONE ? "none" : "<unknown: %x>", c);
	printf("\n");

	printf("  Version:                           ");
	c = header->e_ident[EI_VERSION];
	printf("%d%s", c, c == EV_CURRENT ? " (current)"
			: c > EV_CURRENT || c == EV_NONE ? " <unknown>" : "");
	printf("\n");

	print_elf_header_2(h);
}

/**
 * print_elf_header_2 - prints the contents of an elf header (second half)
 * @h: elf header
 *
 * Return: void
 */

void print_elf_header_2(void *h)
{
	Elf32_Ehdr *header = h;
	unsigned char c, little_e = header->e_ident[EI_DATA] == ELFDATA2LSB,
		bit_32 = header->e_ident[EI_CLASS] == ELFCLASS32;
	uint16_t t2;

	printf("  OS/ABI:                            ");
	c = header->e_ident[EI_OSABI];
	printf(c == ELFOSABI_NONE || c == ELFOSABI_SYSV ? "UNIX - System V"
		: c == ELFOSABI_HPUX ? "UNIX - HP-UX"
		: c == ELFOSABI_NETBSD ? "UNIX - NetBSD"
		: c == ELFOSABI_LINUX || c == ELFOSABI_GNU ? "UNIX - GNU"
		: c == ELFOSABI_SOLARIS ? "UNIX - Solaris"
		: c == ELFOSABI_IRIX ? "UNIX - IRIX"
		: c == ELFOSABI_FREEBSD ? "UNIX - FreeBSD"
		: c == ELFOSABI_TRU64 ? "UNIX - TRU64"
		: c == ELFOSABI_ARM ? "UNIX - ARM architecture"
		: "<unknown: %x>", c), printf("\n");

	printf("  ABI Version:                       ");
	c = header->e_ident[EI_ABIVERSION];
	printf("%d", c), printf("\n");

	printf("  Type:                              ");
	t2 = header->e_type;
	ensure_endianness(little_e, &t2, 2);
	printf(t2 == ET_NONE ? "NONE (None)" :
			t2 == ET_REL ? "REL (Relocatable file)"
			: t2 == ET_EXEC ? "EXEC (Executable file)"
			: t2 == ET_DYN ? "DYN (Shared object file)"
			: t2 == ET_CORE ? "CORE (Core file)"
			: t2 == ET_LOOS ? "OS Specific: (fe00)"
			: t2 == ET_HIOS ? "OS Specific: (feff)"
			: t2 == ET_LOPROC ? "Processor Specific: (ff00)"
			: t2 == ET_HIPROC ? "Processor Specific: (ffff)"
			: "<unknown>: %x", t2), printf("\n");

	printf("  Entry point address:               ");
	ensure_endianness(little_e, &header->e_entry, bit_32 ? 4 : 8);
	printf("0x%lx", bit_32 ? *((uint32_t *)&header->e_entry)
			: *((uint64_t *)&header->e_entry)), printf("\n");
}

/**
 * main - prints the elf header information of a file
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 if the file's elf header was read successfully
 */

int main(int argc, char *argv[])
{
	char *filename, header[ELF64_HEADER_SIZE] = {0}, bit_32;
	int handle, read_len;
	Elf32_Ehdr *header32 = (void *)header;

	if (argc != 2)
		return (put_err("Usage: elf_header elf_filename\n"), 98);
	filename = argv[1], handle = open(filename, O_RDONLY);
	if (handle == -1)
		return (put_err("readelf: Error: "), put_err(filename),
				put_err(": Failed to read file's magic number\n"), 98);
	read_len = read(handle, header, ELF64_HEADER_SIZE);
	if (read_len == -1)
		return (put_err("readelf: Error: "), put_err(filename),
				put_err(": Failed to read file's magic number\n"), 98);
	bit_32 = header32->e_ident[EI_CLASS] == ELFCLASS32;
	if (read_len < (int)ELF32_HEADER_SIZE ||
			(!bit_32 && read_len != ELF64_HEADER_SIZE) ||
			!((header32->e_ident[EI_MAG0] == ELFMAG0) &&
				(header32->e_ident[EI_MAG1] == ELFMAG1) &&
				(header32->e_ident[EI_MAG2] == ELFMAG2) &&
				(header32->e_ident[EI_MAG3] == ELFMAG3)))
		return (put_err("readelf: Error: Not an ELF file - "),
				put_err("it has the wrong magic bytes at the start\n"), 98);

	print_elf_header(header32);
	close(handle);
	return (0);
}
