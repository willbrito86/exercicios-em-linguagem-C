 #include <stdio.h>
 
 
 
 int main(){
 
 
 int i, numc,saldo,op;
    float vdpo,vre,total;
	   

 	do{
 		printf("informe o numero da conta\n");
 		scanf("%d",&numc);
 		printf("\ninforme o seu saldo\n");
 		scanf("%d\t",&saldo);
 		printf(">>>>>>muito bem!<<<<<<\n\n");
 		printf("qual operação a ser realizada\n 1- para deposito\n? ou 2- para retirada\n? ");
 		scanf("%d\n",op);
 		
 	if	(op==1)
	{
		printf("digite o valor do deposito:\t");
	 	scanf("%f", &vdpo);
	 	total=vdpo+saldo;
	} 
	 else	
		if(op==2)
	 {
	 	printf("informe o valor da retirada");
 		scanf("%f",&vre);
	 }
 		
	else  
 	if(vre>total)
	   {
			printf("saldo insuficiente\n");	
	   } 
 	
  
	else
	   {
		   printf("saque realizado");
	   } 		
 		while(total<vre);
 	   
 }
		
}
 	
	
