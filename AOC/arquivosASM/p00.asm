%include 'util.asm'
section .text

global _start

_start:
;equivale a return 0
mov rax, 60
xor rdi, rdi
syscall