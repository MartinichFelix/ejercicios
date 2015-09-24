/* 28. Hacer el programa ante la pregunta desea continuar sólo nos permita introducir como respuesta 'S' o'N'*/
#include <stdio.h>

int main(){
	
	char r='S';
 
  while(r=='S'){
  
 	
 	printf("desea seguir S/N \n");
 	fflush(stdin);
 	scanf("%c",&r);
 
 while(r !='S' && r =='N');{
 
    printf("error ingrese S/N \n");
	}
}
 system("pause");
 return 0;
}
