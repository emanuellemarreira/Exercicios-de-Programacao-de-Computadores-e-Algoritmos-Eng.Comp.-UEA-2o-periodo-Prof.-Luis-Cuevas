#include <stdio.h>
void troca(float *a, float *b){
	int muda;
	muda = *b;
	*b = *a;
	*a = muda;
	
}
int main(){
	float a = 1;
	float b = 2;
	printf("\nantes da troca");
	printf("\na = %.2f", a);
	printf("\nb = %.2f", b);
	troca(&a,&b);
	printf("\ndepois da troca");
	printf("\na = %.2f", a);
	printf("\nb = %.2f", b);
	return 0;
}
