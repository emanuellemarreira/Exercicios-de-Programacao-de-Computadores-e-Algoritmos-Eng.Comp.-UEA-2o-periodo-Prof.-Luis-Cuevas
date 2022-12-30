#include <stdio.h>
#include <math.h>
#define E 0.1
int main(){
	float xi, xf, a, b, raiz, y;
	printf("informe o numero para calcular a raiz = ");
	scanf("%f", &y);
	while(y<=0){
		printf("nao eh possivel calcular raiz quadrada de numero negativo\n");
		printf("alem disso, o metodo nao funciona com o numero zero pois gera uma indeterminacao matematica\n");
		printf("tente novamente.\n");
		scanf("%f", &y);
	}
	xi = y/2;
	do{
		xf = xi - (((xi*xi)-y)/(2*xi));
		a = xf;
		b = xi;
		xi = xf; 
	} while(fabs(a-b)>E);
	    raiz = sqrt(y);
		printf("resultado com o metodo = %.3f\n", xf);
		printf("resultado a partir da biblioteca = %.3f", raiz);
	return 0;
}
