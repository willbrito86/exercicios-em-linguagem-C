#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*1. Leia a idade, o sexo e o tempo de serviço de um trabalhador e escreva se ele pode ou
não se aposentar.
As condições para aposentadoria para quem é do sexo masculino são:
Ter pelo menos 65 anos, E ter trabalhado pelo menos 30 anos.
Se for do sexo feminino:
Ter pelo menos 60 anos, E ter trabalhado pelo menos 25 anos
Crie um menu que o usuário continue digitando até que digite S ou s para sair e/ou
N ou n para continuar digitando no algoritmo, caso digite outra opção informar
“opção inválida, digite novamente até digitar uma opção válida:*/

//Segunda chamada de Logica
//Aluno William Souza Brito

int main(){
	
	setlocale(LC_ALL,"");
	
	int idade, tempoServ;
	int sexo;
	char opcao, cont;
		
	
	
	do{
	printf("Informe a idade: ");
	scanf("%d", &idade);
	printf("Informe o tempo de serviço em anos: ");
	scanf("%d", &tempoServ);	
		
	do{
	printf("Informe o sexo: 1: Masculino / 2: Feminino: ");
	scanf("%d", &sexo);
	printf((sexo != 1 && sexo != 2)? "Opção inválida, digite novamente!\n" : "");
			
	}while(sexo != 1 && sexo != 2);
	
	switch(sexo){
		case 1:
			if(idade>=65 && sexo==1 && tempoServ>=30)
			{
				printf("Apto a se aposentar!");
			}else{
					printf("Inapto a aposentara!");
				}
				break;
		case 2:
			if(idade>=60 && sexo==2 && tempoServ>=25)
			{
				printf("Apto a se aposentar!");
			}else{
					printf("Inapto a aposentara!");
				}
				break;
		default:
			printf("Você não atende aos requisitos e ainda não pode se aposentar!");		
		}
		printf("\nDeseja continuar? S: Sim / N: Não: ");
		scanf(" %c", &cont);
					
	}while(cont == 's' && cont == 'S');
	
	
	return 0;
}
