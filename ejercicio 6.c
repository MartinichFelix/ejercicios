/*6.   Escribir un programa que realice las siguientes acciones: x Limpie la pantalla x Declare 2 variables y les asigne sendos valores x Realice la resta de dichas variables y muestre por pantalla la leyenda "Resultado positivo" en caso de 
ser mayor que cero o "Resultado negativo" si es menor que cero*/
#include <stdio.h>

int main(){
	int num1, num2;
	int resta=0;
	
	
	
	printf("ingrese numero 1 \n");
	scanf("%d",&num1);
	printf("ingrese numero 2 \n");
	scanf("%d",&num2);
if(num1 != 0 && num2 !=0){
	resta=num1-num2;
	printf("la resta es %i \n",resta);
	if(resta <0){
		printf("el resultado es negativo \n");	
	}
	else if (resta >0){
		printf("el resultado es positivo \n");
	}
	else{
		printf("el resultado es 0 \n");
	}
}
system("pause");
return 0;
}
