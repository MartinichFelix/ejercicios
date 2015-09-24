

#include <stdio.h>
#include <conio.h>
#include <string.h>
	 
	int main()
	{
	        float altura,mayoraltura=0;
	        char nombreapellido[50],mayornombreapellido[50],respuesta = 's';
	        int bandera=0;
	 
	        
	 
	        do
	        {
	                printf("\ningrese su nombre y apellido sin espacios:"),
	                scanf("%s",&nombreapellido);
	                printf("ingrese su altura:");
	                scanf("%f",&altura);
	 
	                if(bandera==0)
	                {
	                        mayoraltura = altura;
	                        strcpy(mayornombreapellido,nombreapellido);
	                        bandera=1;
	                }
	                        if(altura>= mayoraltura)
	                {
	                        mayoraltura = altura;
	                        strcpy(mayornombreapellido,nombreapellido);
	 
	                }
	 
	                printf("\nDesea continuar? s/n\n");
	                respuesta = getch();
	 
	                while(respuesta!= 's' && respuesta!= 'n')
	                {
	                printf("\nERROR, reingrese respuesta s/n ?\n");
	                respuesta = getch();
	                }
	        }while(respuesta == 's');
	                printf("\nEl mas alto es %s mide %.2f",mayornombreapellido,mayoraltura);
	                getch();
	}
