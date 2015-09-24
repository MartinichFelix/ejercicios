/*25.   De 3 números ingresados desde el teclado por el usuario, indicar cuál es el mayor*/
#include <stdio.h>

int main(){
	
	int num1, num2, num3;
	int max, min;
	
		printf("ingrese numero 1\n");
	scanf("%i",&num1);
	printf("ingrese numero 2\n");
	scanf("%i",&num2);
	printf("ingrese numero 3\n");
	scanf("%i",&num3);
	
	if(num1>num2){
		if(num1>num3){
			max=num1;
		}
		else{
		max=num3;
		}
	}
    else{
		if(num2>num3){
		
		max=num2;
	    }
	     else{
		max=num3;
        } 
	}  
	printf("el mayor de los 3 numeros es %i \n",max);
	system("pause");
	return 0;
}
