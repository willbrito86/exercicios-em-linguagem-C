#include <stdio.h>

// Quest�o 2
// William Souza Brito

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

int main(){

int nota, resposta;
   
    do
    {
	 printf("Digite a Nota do Aluno entre 0 e 100:\n ");
     scanf("%d", &nota);

     if(nota < 50)
   {
     printf("Nota Conceito: Insuficiente\n");
   }    if (nota>=50 && nota<=64)
   {  
     printf("Nota Conceito: Regular\n");
   }       if (nota>=65 && nota<=84)
   {  
     printf("Nota Conceito: Bom\n"); 
   } else
   {
     printf("Nota Conceito: Otimo \n");
   }
    printf("Deseja continuar:  1: Sim / 2: N�o\n");
    scanf("%d", &resposta);
    
	} while(resposta==1);
	
}
      












