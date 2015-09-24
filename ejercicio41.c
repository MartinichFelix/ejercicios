/*41.   Diseñar un programa que lea 4 números e imprima el mayor de los cuatro
#include <stdio.h>

int main(){
	
	int num1, num2, num3, num4, i, max=0;
	
	printf("ingrese primer numero\n");
	scanf("%i",&num1);
		printf("ingrese segundo numero\n");
	scanf("%i",&num2);
		printf("ingrese tercer numero\n");
	scanf("%i",&num3);
		printf("ingrese cuarto numero\n");
	scanf("%i",&num4);
	
	if(num1 > num2){
		
		if(num1 > num3){
			
			if(num1 > num4){
				max = num1;
			}
		}
	}
	
	
		printf("el mayor de los 3 numeros es %i \n",max);
	system("pause");
	return 0;
}
	*/
	#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int numero, mayor,i;
	
	for (i=0;i<4;i++)
	{
		printf("ingrese numero");
		scanf("%d",&numero);
		
		if (i==0 || numero>mayor)
		{
			mayor= numero;
		}
	}
	
	printf("el numero mayor de los cuatro q ingreso es: %d ", mayor);
}

