global main

	section .text
main:		mov rax, 1
		mov rdi, 1
		mov rsi, text
		mov rdx, 17
		syscall
		mov rax, 60
		xor rdi, rdi
		syscall

	section .data
text:	db	"Hello, Holberton", 10
