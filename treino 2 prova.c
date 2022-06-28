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
	
	int cont=1,funcionarios;
	float salario;
	
	printf("Informe o numero de funcionario: ");
	scanf("%d", &funcionarios);

	do{
	printf("\n\nInforme o salario do funcionario: ");
		scanf("%f", &salario);
	printf("Total de imposto a pagar: %.2f\n", imposto(salario));
		cont++;
	}while(cont<=funcionarios);
	return 0;
}