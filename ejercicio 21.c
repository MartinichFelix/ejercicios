 /*21.  Ingresar  un  número  entero  por  consola  y  efectuar  la  suma  de  todos  los  números  que  le  anteceden, 
comenzando desde 0 y mostrar el resultado por pantalla*/
#include <stdio.h>
int main(){

 
 int num,i,suma=0;
 
        printf("numero:");
        scanf("%d",&num);
 
        for(i=0;i<num;i++)
        {
                suma = suma + i;
                //printf("%d",i);
        }
        printf("La suma de los numeros que anteceden al %d es %d",num,suma);
       
}
