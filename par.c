#include<stdio.h>
#include<stdlib.h>

int main(){
	int numero;

	printf("Digite um numero: ");
	scanf("%d" ,&numero);

	if(numero % 2 == 0)
	printf("0 %d é par!", numero);
	
	return 0;

}
