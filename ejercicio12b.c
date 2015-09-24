/*12.  Escribir en C un programa que muestre los números impares entre 0 y 100 y que imprima cuantos impares 
hay*/
#include <stdio.h>

int main(){
	
	int impar=0, i;
	
	for(i=0; i<100; i++){
		
	 if(i%2!=0)
                {
                printf("\n%d",i);
                impar = impar + 1;
                }
			
	}
	
	printf("\nlos numeros impares de 1 a 100 son %i,\n\n",impar);
	system("pause");
	return 0;
}
/*void main()
{
        int impares,impar=0;
 
        clrscr();
        for(impares=0;impares<100;impares++)
        {
                if(impares%2!=0)
                {
                printf("\n%d",impares);
                impar = impar + 1;
                }
        }
        printf("\n%d n&#163;meros impares desde el 1 al 100",impar);
        getch();
}*/
