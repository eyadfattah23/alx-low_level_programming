; hello.asm
global main
extern printf

section .data
    hello_msg db 'Hello, Holberton', 10, 0 ; 10 is the ASCII code for a newline, 0 is the null terminator

section .text
main:
    ; Save the base pointer and set up the stack frame
    push rbp
    mov rbp, rsp

    ; Call printf with the hello_msg address as the argument
    lea rdi, [rel hello_msg] ; Load the address of hello_msg into RDI (first argument)
    xor rax, rax             ; Set RAX to 0 (printf is a variadic function, so RAX should contain the number of vector registers used)
    call printf              ; Call printf

    ; Clean up the stack frame and return
    xor rax, rax             ; Set RAX to 0 (return value)
    leave                    ; Restore the base pointer and stack pointer
    ret                      ; Return
