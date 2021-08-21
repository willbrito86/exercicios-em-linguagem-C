#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>   
    
		struct alunos 
	{
		char nome[50];
		int idade;
		char sexo[15];
	};
	

   	const int tam=2;

	int main()
	{
		
	printf("Cadastro de Alunos\n");
	
	struct alunos a [tam];
	
	int idadeM (struct alunos a[]){
		int i, maior=0;
		for(i=0; i<tam; i++){
			if(a[i].idade>tam){
				maior++;
			}
		}
         return printf("A quantidade de alunos com idade maior que 10 é: %d", maior);
	};	
     char idadeMenor (struct alunos a[]){
    	int i, menor=a[0].idade, posmenor=0;
    	for(i=0; i<tam; i++){
    		if(a[i].idade<menor){
    			menor=a[i].idade;
    		  posmenor=i;
			}
		}
          return printf("O aluno mais novo e: %s, %d anos, %s\n", a[posmenor].nome, a[posmenor].idade, a[posmenor].sexo);
	};
	
	
	}
