#include <stdio.h>
int main(){
	float lado, area, dobro;
	printf("informe o tamanho do lado do quadrado= ");
	scanf("%f",&lado);
	area=lado*lado;
	dobro=area*2;
	printf("area=%.2f",area);
	printf("\ndobro da area=%.2f",dobro);
}
