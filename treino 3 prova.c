#include <stdio.h>

float imposto(float sal){
	float res;
	
	if(sal>=1903.99 && sal<=2826.65){
		res=sal*0.075;
	}
	else if(sal>=2826.66 && sal<=3751.05){
		res=sal*0.15;
	}
	else if(sal>=3751.06 && sal<=4664.08){
		res=sal*0.225;
	}
	else{
		res=sal*0.275;	
	}
	return res;
}

int main(){

	int n,i;
	float salario,vet[100],soma=0.0;
	
	printf("Informe a quantidade de funcionarios: ");
		scanf("%d", &n);
		
	for(i=0;i<n;i+=1){
		printf("\nInforme o salario do funcionario %d: ", i);
		scanf("%f", &vet[i]);
	}
	printf("\n\n***TABELA DE IMPOSTO DA EMPRESA***\n\n");
	for(i=0;i<n;i+=1){
		printf("Total de impostos do funcionario %d: %.2f\n", i,imposto(vet[i]));
		soma+=imposto(vet[i]);
	}
	printf("Valor total de impostos dos funcionarios da empresa: %.2f\n", soma);
	return 0;
}