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
	return preco;
	}


int main(){
	
	int quant;
	float valor;
	
	printf("Entre com a quantodade de produtos: ");
		scanf("%d", &quant);
	printf("Entre com o preco: ");
		scanf("%.2f", &valor);
	printf("%f", desconto(quant, valor));	
	return 0;
} 
