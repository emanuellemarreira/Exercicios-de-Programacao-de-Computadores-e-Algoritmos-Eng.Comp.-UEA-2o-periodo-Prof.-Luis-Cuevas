#include <stdio.h>
int main(){
	float raio, area;
	printf("Informe o raio do circulo: ");
	scanf("%f",&raio);
	area = 3.14*raio*raio;
	printf("raio = %.2f", area);
}
