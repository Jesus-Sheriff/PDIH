; Ejercicio dibujar rectangulo y pixels


;MACRO pixel
;pone un pixel en la coordenada X,Y de color C
    pixel MACRO X,Y,C
            push ax
            push cx
            push dx
            mov ax,Y
            mov cx,X
            mov dx,ax
            mov al,C
            mov ah,0Ch
            int 10h
            pop dx
            pop cx
            pop ax
    ENDM


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
        
        ; activar modo de 320x200 gráfico
        mov al,4
        mov ah,0
        int 10h 
        ; modo de 320x200 gráfico habilitado

        ;  Rectángulo de fondo
            ;pintar una linea horizontal en altura 10
            mov cx,100
            bucle1:
                pixel cx,10,1
                dec cx
                jnz bucle1
            ;pintar una linea horizontal en altura 100
            mov cx,100
            bucle2:
                pixel cx,100,1
                dec cx
                jnz bucle2
            ;pintar una linea vertical en 0
            mov cx,100
            bucle3:
                pixel 0,cx,1
                dec cx
                jnz bucle3
            ;pintar una linea vertical en 100
            mov cx,100
            bucle4:
                pixel 100,cx,1
                dec cx
                jnz bucle4
        ; dibujar pixeles sueltos (sin la macro):
        mov cx,15
        mov dx,15
        mov al,1
        mov ah,0Ch
        int 10h

        mov cx,15
        mov dx,20
        mov al,2
        mov ah,0Ch
        int 10h

        mov cx,15
        mov dx,25
        mov al,3
        mov ah,0Ch
        int 10h

        mov dx,OFFSET msg
		mov ah,9
		int 21h
        ; pixeles dibujados


        ; pausa
        mov ah,8
		int 21h

        ; volvemos a ponerlo en modo 80x25 estándar:
        mov al,3
        mov ah,0
        int 10h 
        ; modo 80x25 activado

		mov ax,4C00h
		int 21h
	main ENDP
codigo ends

END main
