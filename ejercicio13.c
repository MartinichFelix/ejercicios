/*13.   Hacer el programa que imprima los números pares entre el 1 y el 100*/
#include <stdio.h>

int main(){
	
	int par, i;
	
	for(i=0; i<100; i++){
		
	 if(i%2==0)
                {
                printf("\n%d",i);
                par = par + 1;
                }
			
	}
	
	printf("\nlos numeros pares de 1 a 100 son %i,\n\n",par);
	system("pause");
	return 0;
	
}

/*#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


	int main()
	{
	        int pares,par=0;
 
	        
	        for(pares=0;pares<100;pares++)
	        {
	                if(pares%2==0)
	                {
	                printf("%d ",pares);
	                par = par + 1;
	                }
	        }
	        printf("\n existen %d numeros pares desde el 1 al 100",par);
	        getch();
	}
/*int pares,par=0;
 
        clrscr();
        for(pares=0;pares<100;pares++)
        {
                if(pares%2==0)
                {
                printf("\n%d",pares);
                par = par + 1;
                }
        }
        printf("\n%d n&#163;meros pares desde el 1 al 100",par);*/
