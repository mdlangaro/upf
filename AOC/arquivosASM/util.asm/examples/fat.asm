%include '../util.asm'

extern      fatorial
section     .text  
global      _start

_start:
    call    readint
    mov     rdi, rax
    call    fatorial
    mov     rdi, rax
    call    printint
    call    endl
    call    exit0