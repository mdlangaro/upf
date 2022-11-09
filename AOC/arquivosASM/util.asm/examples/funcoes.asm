section     .text
global      fatorial

fatorial:
    mov     rax, 1
.while:
    cmp     rdi, 1
    jng     .fim
    imul    rax, rdi
    dec     rdi
    jmp     .while
.fim:
    ret