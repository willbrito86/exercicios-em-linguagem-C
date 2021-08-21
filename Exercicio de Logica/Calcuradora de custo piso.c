#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// informar o custo em reais, para a compra de pisos de um determinado comodo,
	// onde o usuario vai informar a largura e comprimento 
	
	float comprimento, largura, tamComodo, valorPiso, valorTotalPiso;
	
	printf("Informe a Largura: \n");
	scanf("%f", &largura);
	
	printf("Informe o Comprimento: \n");
	scanf("%f", &comprimento);
	
	printf("Informa o valor do piso por metro quadrado:\n");
	scanf("%f", &valorPiso);
	
	tamComodo = comprimento * largura;
	valorTotalPiso = valorPiso * tamComodo;
	
	printf("O valor total de piso a ser comprado eh %.2f Reais:\n", valorTotalPiso);
	
	
	
}
