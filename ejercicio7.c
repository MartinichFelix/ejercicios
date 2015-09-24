/*7.  Escribir  el  programa  necesario  para  calcular  y mostrar  el  cuadrado  de  un  número. El  número  debe ser 
mayor que cero, en caso de error que aparezca el mensaje "ERROR, el número debe ser mayor que cero"*/
#include <stdio.h>

int main(){
	
	int num;
	int cuadrado=0;
	
	printf("ingrese un numero \n");
	scanf("%i",&num);
	
	if(num >0){
	cuadrado=num*num;
	printf("el cuadrado es %i \n",cuadrado);
	}
	else{
		printf("ERROR el numero debe ser mayor que cero");
	}
	system("pause");
return 0;
}
