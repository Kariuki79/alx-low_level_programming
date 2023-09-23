section .data
format db 'Hello, Holberton',10,0  ; Define the format string with a newline and null terminator
	section .text
	global main
	extern printf

main:
	push format	; Push the address of the format string onto the stack
	call printf	; Call the 'printf' function with the address of the format string on the stack
	add esp, 4; Clean up the stack (remove the address pushed earlier)
xor eax, eax      ; Set EAX to 0 (return value for main)
	ret

