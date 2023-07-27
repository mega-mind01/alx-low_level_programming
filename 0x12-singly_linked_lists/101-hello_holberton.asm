section .data
hello_msg db "Hello, Holberton", 0
fmt db "%s", 10, 0; The printf format, "\n", '0'

section .text
global main
extern printf

main:
; Call printf function to print the message
mov rdi, fmt
mov rsi, hello_msg
xor rax, rax ; or can be xor rax, rax
call printf

;Exit the program
mov rax, 60 ; system call for exit
xor rdi, rdi ; exit code 0
syscall
