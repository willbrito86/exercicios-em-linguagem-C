#include <stdio.h>


//1ª Parte – Uma calculadora de alcance de anúncio online.
// Linguagem C. no Dev C++


 int main () {
 	
 	float investimento, compartorig, viewporreal, compartredes, viewscompart, totalviews;
 	
	printf("Digite o valor do Investimento: ");
	scanf("%f", &investimento);
	
	//  visualizações por cada 1 Real investido
	viewporreal = investimento * 30;
			
   //	visualizações do anuncio compartilhado
    compartorig  = 4 * 40;
	compartredes = 3 * 40;
	viewscompart = compartorig + compartredes;
	
	//  Total de visualizações
	totalviews = viewscompart + viewporreal;
	
	// Declarando a projeção de visualizações do Anuncio, mediante o valor investido
	printf("\nA projecao de views do anuncio, mediante o investimento seria de: %.2f\n", totalviews);
		
}
