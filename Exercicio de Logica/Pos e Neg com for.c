// Elabore um algoritmo que receba 75 idades e informe se é Maior ou = a 18 ou menor de Idade

// William Souza Brito

#include<stdio.h>

int main(){
	
	int i, numero;
	
	for(i=0; i<20; i++){
	
		printf("Digite a numero :\n");
		scanf("%d", &numero);
		
		if(numero > 0)
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
	
	
