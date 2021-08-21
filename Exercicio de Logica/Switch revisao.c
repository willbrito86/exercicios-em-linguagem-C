#include <stdio.h>

// Elabore um algoritmo que mostre a  1: area do Quadrado /  2: Area do triangulo / 3: Area do Retangulo / 4: Cubo de um numero


int main(){
	
	int numero, contador;
	
	printf("Escolha o numero para a tabuada\n ");
	scanf("%d", &numero);
	
	for(contador = 0; contador <=10; contador ++)
	{
		printf("%d x %d = %d\n", contador, numero, contador*numero);
	}
}
	
	

