#include <stdio.h>

int quantidadeCasas(int n){
	int j=1, i=0;
	for(j=1;j<=n;j*=10){
		i++;
	}
	return i;
}
void pegaNum(int num, int d){
	int controle,cont, casas, k, multi=1, resto, sub, soma=0, peganum, original;
	    original = num;
		casas = quantidadeCasas(num);
		controle = casas;
		for(cont=controle;cont>=1;cont--){
			for(k=1;k<casas;k++){
		    multi = multi * 10;
	        }
		    resto = num%multi;
		    sub = num - resto;
		    peganum = sub/multi;
		    if (peganum==d){
				soma = soma + 1;
	         }
	        num = resto;
	        multi = 1;
	        casas = quantidadeCasas(num);
		}	
		printf("\no numero %d aparece %d vezes em %d",d,soma,original);
}

int main(){
	int numero1, numero2;
	printf("digite um numero 1 = ");
	scanf("%d", &numero1);
	printf("digite o numero 2 entre 0 e 9 = ");
	scanf("%d", &numero2);
	pegaNum(numero1, numero2);
	
	return 0;
}
