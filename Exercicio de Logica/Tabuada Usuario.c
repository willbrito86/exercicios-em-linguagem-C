#include <stdio.h>

////Faça um algoritmo que imprima a tabuada de multiplicação entre 2 números que o usuário escolher. 	
//// William Brito




   int main(){
     
   int a, b, num1, num2;
     
   printf("Digite dois numeros em ordem crescente para mostrarmos a tabuada.:\n");
   scanf("%d""%d",&num1, &num2);
   
   for (a=num1; a<=num2; a++){
   	 	for (b=1; b<=10; b++)
		{ 
		  printf("%d X %d = %d\n",a,b , a*b);
	    }   
		 printf("\n");  
   }
}
