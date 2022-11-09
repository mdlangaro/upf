section .text

global _start

_start:
;equivale a return 55
mov rax, 60
mov rdi, 55
syscall

