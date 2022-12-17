#include <stdio.h>
int main(){
	float rshora, horas, bruto, ir, inss, sind, liq;
	printf("quanto voce ganha por hora? R$");
	scanf("%f",&rshora);
	printf("quantas horas trabalhou esse mes? ");
	scanf("%f",&horas);
	bruto = rshora*horas;
	ir = 0.11*bruto;
	inss = 0.08*bruto;
	sind = 0.05*bruto;
	liq = bruto - (ir + inss + sind);
	printf("\nsalario bruto = R$%.2f",bruto);
	printf("\ndesconto de 11porcento para o imposto de renda = R$%.2f",ir);
	printf("\ndesconto de 8porcento para o INSS = R$%.2f",inss);
	printf("\ndesconto de 5porcento para o sindicato = R$%.2f",sind);
	printf("\nsalario liquido = R$%.2f",liq);
	
	return 0;
}
