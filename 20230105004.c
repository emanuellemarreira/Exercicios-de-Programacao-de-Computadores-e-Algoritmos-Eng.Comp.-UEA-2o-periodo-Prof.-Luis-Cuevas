#include <stdio.h>

int fatorial(int n){
	int i, fat=1;
	for(i=n;i>=1;i--){
		fat*=i;
	}
	return fat;
}

int main(){
	int numero, resul;
	printf("digite o numero = ");
	scanf("%d",&numero);
	while(numero<0){
		printf("\nfatorial so eh valido com numeros naturais, tente novamente = ");
		scanf("%d", &numero);
	}
	resul = fatorial(numero);
	printf("\n%d! = %d", numero, resul);
	return ;
}
