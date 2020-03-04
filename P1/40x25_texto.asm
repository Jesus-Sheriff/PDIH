pila segment stack 'stack'
	dw 100h dup (?)
pila ends
datos segment 'data'
	msg db 'Jesus SHERIFF$'
datos ends
codigo segment 'code'
	assume cs:codigo, ds:datos, ss:pila
	main PROC
		mov ax,datos
		mov ds,ax
		; activar modo de 40x25 (modo 1)
        mov al,1
        mov ah,0
        int 10h 
        ; modo de 40x25 habilitado
		
		mov dx,OFFSET msg
		mov ah,9
		int 21h
		; pausa para mostar (si no, no funciona la salida por pantalla)
		mov ah,8
		int 21h

		; activar modo de 80x25 (modo 3)
        mov al,3
        mov ah,0
        int 10h 
        ; modo de 80x25 habilitado

		mov ax,4C00h
		int 21h
	main ENDP
codigo ends

END main
