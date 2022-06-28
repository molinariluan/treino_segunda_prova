#include <stdio.h>

int main(){
	float sal,renda,familia,per,soma=0,continuar;
	
	do{
	printf("Informe o valor do salario minimo:\n");
		scanf("%f", &sal);
	printf("Informe a renda familiar:\n");
		scanf("%f", &renda);
	printf("Informe o total de pessoas da familia:\n");
		scanf("%f", &familia);
	
	if((renda/familia)<0.5*sal){
		printf("Auxilio deferido\n");
		soma++;	
	}else
		printf("Auxilio indeferido\n");
	
	printf("Quer continuar?\n 1-Sim/2-Nao\n ");
		scanf("%f", &continuar);
	
	}while(continuar!=2);
		printf("Total de candidatos contemplados %.1f\n", soma);
	return 0;
}