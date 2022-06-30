#include <stdio.h>

float desconto(int quant, float preco){

	if(quant>=3 && quant <=5){
		return preco*quant*0.95;
	}
	else if(quant>5 && quant <=10){
			return preco*quant*0.90;
	}
	else if(quant>10){
			return preco*quant*0.85;
	}
	return preco*quant;
	}


int main(){
	
	int quant, op, i, j;
	float valor, vet[100], res, soma=0;
	
	
	
		
	do{
		printf("*** Sistema de Vendas Ratanada ***\n1- Realiza venda\n2- Mostra Vendas\n0- Sair\n");
		scanf("%d", &op);
	switch(op){
		case 1:
			printf("Entre com a quantidade de produtos: ");
			scanf("%d", &quant);
			printf("Entre com o preco: ");
			scanf("%f", &valor);
			res= desconto(quant, valor);
			printf("Valor da compra %f\n\n", res);	
			vet[i] = res;
			soma+=res;
			i++;
			break;
		case 2:
			for(j=0;j<i;j++){
				printf("R$ %.2f |\n", vet[j]);
			}
			
			printf("Total das vendas %.2f\n\n", soma);		
			break;
		
		default:
			printf("Opcao invalida \n\n");
	}
		 
	
	}while(op!=0);
	return 0;
} 
