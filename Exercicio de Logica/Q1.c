// 2 Quest�o
/*Suponha que o conceito de um aluno seja determinado em fun��o da sua nota. Suponha, 
tamb�m, que esta nota seja um valor inteiro na faixa de 0 a 100, conforme a seguinte faixa: 
� Nota Conceito 
� 0 a 49 Insuficiente 
� 50 a 64 Regular 
� 65 a 84 Bom 
� 85 a 100 �timo 
Crie um algoritmo que apresente a ordem dos alunos o conceito e a 
nota do aluno. 
Crie um menu que o usu�rio continue digitando at� que digite S ou s para sair e/ou
C ou c para continuar digitando no algoritmo, caso digite outra op��o informar 
�op��o inv�lida, digite novamente:*/ 

// William Souza Brito

#include<stdio.h>

int main(){
	
	int cont = 1, nota;
	char op, sair;
	
	do{	
	printf("Digite a Nota do Aluno\n");
	scanf("%d", &nota);
	
	if(nota > 0 && nota <= 49)
	{
		printf("Aluno Conceito: Insuficiente\n");
	}else if(nota > 50 && nota <=64)
	{
		printf("Aluno Conceito: Regular\n");
	}else if(nota > 65 && nota <=84)
	{
		printf("Aluno Conceito: Bom\n");
	}else if(nota > 85 && nota <=100)
	{
		printf("Aluno Conceito: Otimo\n");
	}else
	{
		printf("Nota Invalida\n");
	}
    
	do{ 
	 	printf("Deseja continuar: digite S ou s para sair e/ou C ou c para continuar\n");
		scanf(" %c", &sair);
		printf((sair!='S' && sair!='N' && sair!='s' && sair!='n')? "Letra inv�lida\n" : "�timo\n");
		}while(sair!='S' && sair!='N' && sair!='s' && sair!='n');
		
	}while(sair!='S' && sair!='s');
}
	





	
	
	
	
	
	
	
	
	
	
	
	
	

