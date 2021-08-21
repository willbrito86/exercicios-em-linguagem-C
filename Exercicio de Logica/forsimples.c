#include <stdio.h>
    
 //   2º Exercício resolvido - comando for 
 // Fazer um programa para encontrar todos os pares entre 1 e 100.
   
    int main()
  {
       int i;
       
       printf("\n Os valores pares de 1 a 100 sao:\n");
       for(i = 1; i<100; i++)
       {
       	if(i%2==0)
       	{
       		printf("%d\n", i);
		}
		 
	   }
	     
  }
