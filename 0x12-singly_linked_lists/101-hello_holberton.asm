section .data
	hello_msg db "Hello, Holberton,", 10, 0

section .text
	global main
	extern printf

main:
	push rdi                  ; Preserve any value in rdi (callee-save register)
	lea rdi, [hello_msg]      ; Load the address of the message into rdi
	call printf              ; Call the printf function
	pop rdi                   ; Restore the original value of rdi

	xor rax, rax             ; Return 0
	ret
