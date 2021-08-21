#include <stdio.h>

// Questão 2
// William Souza Brito

/*Suponha que o conceito de um aluno seja determinado em função da sua nota. Suponha,
também, que esta nota seja um valor inteiro na faixa de 0 a 100, conforme a seguinte faixa:
• Nota Conceito
• 0 a 49 Insuficiente
• 50 a 64 Regular
• 65 a 84 Bom
• 85 a 100 Ótimo
Crie um algoritmo que apresente a ordem dos alunos o conceito e a
nota do aluno.
Crie um menu que o usuário continue digitando até que digite S ou s para sair e/ou
C ou c para continuar digitando no algoritmo, caso digite outra opção informar
“opção inválida, digite novamente:*/

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
    printf("Deseja continuar:  1: Sim / 2: Não\n");
    scanf("%d", &resposta);
    
	} while(resposta==1);
	
}
      












