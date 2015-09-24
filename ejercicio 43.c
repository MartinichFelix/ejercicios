/*43.  Hacer un programa que imprima el mayor y el menor de una serie de 5 números que vamos introduciendo 
por teclado*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int numero, menor,i;
	
	for (i=0;i<5;i++)
	{
		printf("ingrese numero");
		scanf("%d",&numero);
		
		if (i==0 || numero<menor)
		{
			menor= numero;
		}
	}
	
	printf("el numero menor de los cuatro q ingreso es: %d ", menor);
}
