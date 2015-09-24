/*8.   De 10 números ingresadas indicar cuantos son mayores a cero y cuantos son menores a cero*/
#include <stdio.h>
int main(){
	
	int num=0, mayor=0, menor=0;
	int i=0;
	
	
	while(i<=9){
	
	printf("ingrese numero \n");
	scanf("%i",&num);
	
	if(num==0){
		printf("error reingrese un numero mayor o menor a cero");
	}
	if(num<0){
		menor=menor+1;
	}
    if(num>0){
    	mayor=mayor+1;
	}
	i=i+1;
}	
printf("numeros menores %i \n, y numeros mayores %i \n",menor,mayor);
	
	system("pause");
return 0;
	
}

/*
#include <stdio.h>
int main(){

 int num,mayor0=0,menor0=0,cont=0;
 
        while(cont<10)
        {
                printf("\nN&#163;mero:");
                scanf("%d",&num);
 
                if(num==0)
                {
                printf("\nERROR.Tiene que ser menor o mayor que cero.\n");
                cont--;
                }
                if(num>0)
                mayor0 = mayor0 + 1;
                if(num<0)
                menor0 = menor0 + 1;
 
                cont = cont + 1;
 
        }
        printf("\nDe %d n&#163;meros ingresados...\n\n%d son mayores a cero\n%d son menores a cero",cont,mayor0,menor0);
        getch();
		}
		*/
