#include <stdio.h>
int main(){
	float salario, novo_salario;
	printf("Informe o seu salario= ");
	scanf("%f",&salario);
	novo_salario = salario+(0.1*salario);
	printf("seu novo salario com reajuste de 10 porcento eh R$%9.2f", novo_salario);
}
