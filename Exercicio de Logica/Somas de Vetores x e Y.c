#include<stdio.h>

// ler dois vetores x e y e jogar a soma no vetor z

int main(){
	
	int i, x[4], y[4], z[4];
	
	
	for(i=0; i<4; i++)
	{
		printf("Digite %d° numero inteiro para o Vetor X:\n", i+1);
		scanf("%d", &x[i]);
	};
	
	
	for(i=0; i<4;i++)
	{
		printf("Digite %d° numero inteiros para o Vetor Y:\n", i+1);
		scanf("%d", &y[i]);
	};
	
	
	z[i] = x[i] + y[i];
	
	for(i=0; i<4;i++)
	{
		printf ("A soma dos vetores x e y eh %d", z[i]);
	}
	
		
}
