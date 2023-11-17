section .data
    message db "Hello, Holberton", 0Ah, 0

section .text
    global main
    extern printf

main:
    ; format string for printf
    mov rdi, message
    ; call printf
    mov eax, 0
    call printf
    ; return 0
    mov eax, 0
    ret
