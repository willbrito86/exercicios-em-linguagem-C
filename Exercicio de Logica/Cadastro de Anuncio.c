#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int menu, cadastro, vis, sair;
	
	while(menu!=3){
		
		printf("\nCADASTRO DE ANUNCIO\n");
		printf("\n1  CADASTRO\n");
		printf("\n2 VISUALIZAR CADASTRO\n");
		printf("\n3 SAIR\n");
		
		printf("\nDigite a opcao desejada:\n");
		scanf("d", &menu);
		
		
		switch(menu){
			case1: 
			system("cls");
			char nomeAnuncio[100], cliente[100];
			int  dia1, mes1, ano1, dia2, mes2, ano2;
			float investpordia;
			
			printf("\nCADASTRANDO ANUNCIO\n");
			printf("Digite o nome do Anuncio: \n");
			scanf("%s", nomeAnuncio);
			printf("Digite o nome do Cliente: \n");
			scanf("%s", cliente);
			printf("Digite a data inicial:\n");
			scanf("%d%d%d", dia1, mes1, ano1);
			printf("Digite a data final:");
			scanf("%d%d%d", dia2, mes2, ano2);
			printf("digite o valor de Investimento: \n");
			scanf("%f", investpordia);
			system("pause");
			system("cls");
			break;
			
			case2:
			system("cls");
			printf("\nVISUALIZAÇÃO\n");
			print("Nome do Anuncio %s", nomeAnuncio);
			print("Nome do Cliente %s", cliente);
			printf("Data Inicial:%d%d%d", dia1, mes1, ano1);
			printf("Data Final:%d%d%d", dia2, mes2, ano2);
			system("cls");
			break;	
													
		}
			
	}
	
	
	
	
}
