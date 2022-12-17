#include <stdio.h>
int main(){
	float altura, peso;
	printf("digite a altura em m = ");
	scanf("%f",&altura);
	peso = (72.7*altura)-58;
	printf("seu peso ideal = %.2fkg", peso);
}
