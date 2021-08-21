// Elabore um algoritmo que receba 20 numeros e diga se é positivo, negativo ou igual a Zero

// William Souza Brito

#include<stdio.h>

int main(){
	
	int i, numero;
	
	for(i=0; i<20; i++){
	
		printf("Digite a numero :\n");
		scanf("%d", &numero);
		
		if(numero >= 0)
		{
			printf("Positivo\n");
		} else if(numero<0)
		{
			printf("Negativo\n");
		}
		else
		{
			printf("Numero Zero\n");
		}
}
}
	
	
