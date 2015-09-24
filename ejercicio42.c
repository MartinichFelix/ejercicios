#include <stdio.h>
#include <conio.h>
#include <string.h>
	 
	int main ()
	{ 
	        
	 
	        float aguacaida,promedio,cantidadagua=0,mayorlluvia,menorlluvia;
	        char mayordia[10],menordia[10],dias[10];
	        int contador=0,bandera=0,dia;
	 
	        printf("Ingrese cantidad de dias del mes:");
			scanf("%d",&dia);
	 
	        while(contador<dia)
	        {
	 
	                printf("Ingrese numero del dia:");
	                scanf("%s",&dias);
			        printf("Ingrese cant. de agua caida:");
 	               scanf("%f",&aguacaida);
	 
	                if(bandera==0)
	                {
	 
	                        strcpy(mayordia,dias);
	                        strcpy(menordia,dias);
	                        mayorlluvia = aguacaida;
	                        menorlluvia = aguacaida;
	 
	                        bandera=1;
	                }
	 
	                if(aguacaida>mayorlluvia)
	                {
	                        strcpy(mayordia,dias);
	                        mayorlluvia = aguacaida;
	                }
	 
	                if(aguacaida<menorlluvia)
	                {
	                        strcpy(menordia,dias);
	                        menorlluvia = aguacaida;
	                }
	 
	                cantidadagua=cantidadagua + aguacaida; 
	 
	                contador ++;
	 
	        }
	 
	        promedio=cantidadagua/contador;
	 
	        printf("\nMayor lluvia %f el dia %s",mayorlluvia,mayordia);
	        printf("\nMenor lluvia %f el dia %s",menorlluvia,menordia);
	        printf("\nEl promedio de agua caida en %d dias fue %f",contador,promedio);
	        getch();
	}
