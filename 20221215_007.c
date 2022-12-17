#include <stdio.h>
int main(){
	float frh,cs;
	printf("informe a temperatura em farenheit= F ");
	scanf("%f",&frh);
	cs = (5*(frh-32))/9;
	printf("%.2fF = %.2f C",frh,cs);
}
