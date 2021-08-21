#include <stdio.h>

// Faça um algoritmo que determine o maior entre N números. A  condição de parada é a entrada de um valor 0, ou seja, o algoritmo  
// deve ficar calculando o maior até que a entrada seja igual a 0  (ZERO)
// William Brito


int main()
{
    int maior, num=1;

    printf("Digite aqui um numero em seguida, apert 0 para finalizar ou continue digitando outros numeros:");
    scanf("%d",&num);
    maior=num;

    while(num!=0)
    {
      printf("Digite aqui um numero ou  apert 0 para finalizar...: ");
      scanf("%d",&num);

        if(num>maior)
        {
          maior=num;
        }
    }

    printf("De todos os numeros digitados o maio eh...: %d",maior);
      
}
