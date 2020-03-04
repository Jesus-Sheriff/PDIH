; Ejercicio dibujar rectangulo y pixels

pila segment stack 'stack'
	dw 100h dup (?)
pila ends
datos segment 'data'
	msg db 'SHERIFF$'
datos ends
codigo segment 'code'
	assume cs:codigo, ds:datos, ss:pila
	main PROC
		mov ax,datos
		mov ds,ax
        
        ; activar modo de 320x200 gráfico
        mov al,4
        mov ah,0
        int 10h 
        ; modo de 320x200 gráfico habilitado
        ; dibujar pixeles sueltos:
        mov cx,15
        mov dx,15
        mov al,1
        mov ah,0Ch
        int 10h

        ; pixeles dibujados
        ; volvemos a ponerlo en modo 80x25 estándar:
        mov al,4
        mov ah,0
        int 10h 
        ; modo 80x25 activado

		mov ax,4C00h
		int 21h
	main ENDP
codigo ends

END main
