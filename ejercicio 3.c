/*3. Escribir  un programa que realice las siguientes acciones x Limpie la pantalla x Asigne a 2 variables numero1 y numero2 valores distintos de cero
x Efectúe el producto de dichas variables x Muestre el resultado pos pantalla x Obtenga el cuadrado de numero1 y lo muestre par pantalla*/
#include <stdio.h>

int main(){
	int num1, num2;
	int suma=0;
	int cuadrado;
	
	
	printf("ingrese numero 1 \n");
	scanf("%d",&num1);
	printf("ingrese numero 2 \n");
	scanf("%d",&num2);
if(num1 != 0 && num2 !=0){
suma=num1+num2;
printf("la suma es %i \n",suma);
}
else{
printf("error reingrese numero distinto a 0 \n");
}
cuadrado=num1*num1;
printf("el cuadrado del numero 1 es %i \n",cuadrado);
system("pause");
return 0;	

}
