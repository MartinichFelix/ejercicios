/*30.�� Escribir�en��y�codificar�en�C�un�programa�que�muestre�los�n�meros�primos�comprendidos�entre�0�y�100*/
#include <stdio.h>
int main(){
	
	int i, j, k, aux;
	
	
	for(i=2; i<100; i++){
		k=0;
		for(j = 2; j < i && k != 1; j++){
			aux= i % j;
			if(aux == 0){
				k = 1;
			}
		}
		
		if(k != 1 ){
			printf("%i, ",i);
		}
	}
	system("pause");
	return 0;
}
