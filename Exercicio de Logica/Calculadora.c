#include <stdio.h>


//1� Parte � Uma calculadora de alcance de an�ncio online.
// Linguagem C. no Dev C++


 int main () {
 	
 	float investimento, compartorig, viewporreal, compartredes, viewscompart, totalviews;
 	
	printf("Digite o valor do Investimento: ");
	scanf("%f", &investimento);
	
	//  visualiza��es por cada 1 Real investido
	viewporreal = investimento * 30;
			
   //	visualiza��es do anuncio compartilhado
    compartorig  = 4 * 40;
	compartredes = 3 * 40;
	viewscompart = compartorig + compartredes;
	
	//  Total de visualiza��es
	totalviews = viewscompart + viewporreal;
	
	// Declarando a proje��o de visualiza��es do Anuncio, mediante o valor investido
	printf("\nA projecao de views do anuncio, mediante o investimento seria de: %.2f\n", totalviews);
		
}
