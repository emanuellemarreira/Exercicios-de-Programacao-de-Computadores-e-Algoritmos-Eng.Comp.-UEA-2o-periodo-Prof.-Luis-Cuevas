#include <stdio.h>
int main(){
	
	float rshora, horas, rsmes;
	printf("quanto voce ganha por hora? R$");
	scanf("%f",&rshora);
	printf("quantas horas trabalhou esse mes? ");
	scanf("%f",&horas);
	rsmes=horas*rshora;
	printf("total do seu salario= R$%.2f",rsmes);
	return 0;
}
