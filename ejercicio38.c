#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
	
	
	int main()
	{
	 
	        int num,resultado,i=1;
	 		printf("\t\t\tTABLAS DE MULTIPLICAR\n\n");
	        printf("Ingrese numero del 0 al 10 para conocer su tabla: ");
	        scanf("%d",&num);
	 
	        while(num < 0 || num > 11)
	        {
	                printf("ERROR,reingrese del 0 al 10");
	                scanf("%d",&num);
	        }
	 
	        for(i=1; i<11;i++)
	        {
	                resultado = num * i;
	                printf("\n%d x %d = %d",num,i,resultado);
	 
	        }
	        getch();
	}
