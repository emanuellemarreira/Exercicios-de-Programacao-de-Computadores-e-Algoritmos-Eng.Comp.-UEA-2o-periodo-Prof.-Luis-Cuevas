#include <stdio.h>
int main(){
	float m,cm;
	printf("insira a medida em metros= ");
	scanf("%f",&m);
	cm = m*100;
	printf("%.2fm = %.2fcm ", m,cm);
	
}
