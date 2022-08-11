//FILE: 101-hello_holberton
//Description: 64 bit assembly program that
//prints Hello, Holberton followed by a new line.


	extern printf
	section .text
	global main

main:
	mov edi, fmt
	mov esi, msg
	mov eax, 0
	call printf

	mov eax, 0
	ret


	section .data
	msg: db "Hello, Holberton", 0
	fmt: db "%s", 10, 0
