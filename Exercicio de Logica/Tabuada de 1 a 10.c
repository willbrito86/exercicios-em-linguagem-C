#include <stdio.h>

////Faça um algoritmo que imprima a tabuada de multiplicação de 1 a 10.  	
//// William Brito


//========== Tabuada de Multiplicação ==========

    int main(){
     
	int a, num;
     
   printf("Digite um numero entre 1 e 10.:\n");
   scanf("%d",&num);
   for (a=1; a<=10; a++)
   {
    printf("%d X %d = %d\n",num,a,num*a);
   }
   
   }


