#include<stdio.h>
#include<locale.h>

// Escrever um programa para exibir os n�meros de 1 at� 50 na tela.


int main()
{
int contador=1;

setlocale(LC_ALL,"Portuguese");


while(contador<=50)
    { 
     printf("%d\n", contador);
     contador++;
     
    }


}


