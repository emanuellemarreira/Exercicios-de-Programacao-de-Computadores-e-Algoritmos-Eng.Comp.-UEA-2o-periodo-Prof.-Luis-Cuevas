#include <stdio.h>
int main(){
	int a, b, op1;
	float c, op2, op3;
	printf("insira um numero inteiro: ");
	scanf("%d",&a);
	printf("insira um numero inteiro: ");
	scanf("%d",&b);
	printf("insira um numero real: ");
	scanf("%f",&c);
	op1 = 2*a*(b/2);
	op2 = 3*a+c;
	op3 = c*c*c;
	printf("\n2 x %d x %d/2 = %d",a,b,op1);
	printf("\n(3 x %d) + %.2f = %.2f",a,c,op2);
	printf("\n%.2f^3= %.2f",c,op3);
	
	return 0;
}
