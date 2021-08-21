#include <stdio.h>


int main(){
int n1,n2, res;

    printf("Digite os dois valores: \n");
	scanf("%d%d", &n1, &n2);
	
	res = n1+n2;
	
	if(res%2==0)
	{
		printf("Numero par");
	}
	else
	{
		printf("Numero Impar");
	}
	
}
