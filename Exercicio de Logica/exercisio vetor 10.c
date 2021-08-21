#include <stdio.h>

// crie um veor com 10 numeros inteiros

int main(){
	
	int vetor[10], i;
	
	for(i=0; i<10; i++)
	{
		printf("\n VETOR \n");
		printf("Digite o %d°do vetor: \n", i++);
		scanf("%d", &vetor[i]);
	}

	for(i=0; i<10; i++)
	{
		printf("\nVETOR: %d\n", vetor[i]);
		
	}
	printf("Deseja continuar");
	
	
}
