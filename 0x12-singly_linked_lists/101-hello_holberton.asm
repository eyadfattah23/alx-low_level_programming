section .data
    hello db 'Hello, Holberton', 0
    format db '%s\n', 0

section .text
    global main

main:
    ; prepare arguments for printf
    mov rdi, format
    mov rsi, hello
    xor eax, eax ; clear eax as the function return value

    ; call printf
    call printf

    ; exit program
    xor eax, eax
    ret
