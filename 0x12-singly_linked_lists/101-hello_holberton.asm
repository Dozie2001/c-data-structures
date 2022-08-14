extern printf

msg:  db "Hello, Holberton", 0
fmt:  db "%s", 10, 0

    secton .text

    global main

main:
    push     rbp
    mov      rdi,fmt
    mov      rsi,msg
    call     printf
    pop      rbp
    mov      rax,0
    ret

  
