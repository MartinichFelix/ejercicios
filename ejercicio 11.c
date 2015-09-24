/*11.  Escribir un programa que realice lea por teclado 20 caracteres. Luego de la lectura indicar cuantas "a" se 
ingresaron, cuantas "e, i, o, u"*/
#include <stdio.h>

int main(){
	
	int  a=0, e=0, i=0, o=0, u=0, cont=0;
	
	char caracter;
	
		printf("ingrese 20 caracteres \n");
	
		 while(cont<20)
        {
                scanf("%c",&caracter);
 
                if(cont ==19)
                {
                printf("[--------------------]\n");
                printf("[    20 caracteres   ]");
                }
                if(caracter=='a')
                a = a + 1;
                if(caracter=='e')
                e = e + 1;
                if(caracter=='i')
                i = i + 1;
                if(caracter=='o')
                o = o + 1;
                if(caracter=='u')
                u = u + 1;
 
                cont = cont + 1;
        }
                printf("\n\nEn la frase hay...\n");
                printf("a = %d e = %d i = %d o = %d u = %d",a,e,i,o,u);
	getch();
			
}
	

/*
void main()
{
        clrscr();
        int a=0,e=0,i=0,o=0,u=0,cont=0;
        char caracter='x';
 
        printf("\nIngrese una frase de 20 caracteres:\n\n ");
        while(cont<20)
        {
                scanf("%c",&caracter);
 
                if(cont ==19)
                {
                printf("[--------------------]\n");
                printf("[    20 caracteres   ]");
                }
                if(caracter=='a')
                a = a + 1;
                if(caracter=='e')
                e = e + 1;
                if(caracter=='i')
                i = i + 1;
                if(caracter=='o')
                o = o + 1;
                if(caracter=='u')
                u = u + 1;
 
                cont = cont + 1;
        }
                printf("\n\nEn la frase hay...\n");
                printf("a = %d e = %d i = %d o = %d u = %d",a,e,i,o,u);
                getch();
}*/
