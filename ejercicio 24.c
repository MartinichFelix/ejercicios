/*24.� Dise�ar� el� programa� necesario� para� que� habi�ndose� le�do� el� valor� de� 2� variables� NUM1� y� NUM2�se�
intercambien�los�valores�de�las�variables,�es�decir�que�el�valor�que�ten�a�NUM1�ahora�lo�contenga�NUM2�
y�viceversa*/
#include <stdio.h>

int main(){
	
	int num1, num2, aux;
	num1=0;
	num2=0;
	
	
	printf("ingrese numero 1\n");
	scanf("%i",&num1);
	printf("ingrese numero 2\n");
	scanf("%i",&num2);
	
	aux=num1;
	num1=num2;
	num2=aux;
	printf(" numero 1 es igual a %i \n",num1);
	printf(" numero 2 es igual a %i \n",num2);
	system("pause");
	return 0;

	
}
