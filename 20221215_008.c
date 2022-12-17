#include <stdio.h>
int main(){
	float frh,cs;
	printf("informe a temperatura em graus celsius= ");
	scanf("%f",&cs);
	frh = ((cs*9)/5)+32;
	printf("%.2f C = %.2f F",cs,frh);
}
