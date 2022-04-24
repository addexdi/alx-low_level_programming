section	.text
	global	main

main:
	mov eax, 1 ; syscall 1 is write
	mov edi, 1
	lea rsi, [hello_text] ;array to write
	mov edx , 17
	syscall
	mov eax , 60
	xor edi , edi
	syscall
section	.data
	hello_text: db "Hello, Holberton", 0x0a
