#include <stdio.h>

int quantidadeCasas(int n){
	int j=1, i=0;
	for(j=1;j<=n;j*=10){
		i++;
	}
	return i;
}

int pegaPermut(int num, int opcao){
	int controle,cont, casas, k, multi=1, resto, sub, soma=0, fat=1, peganum;
		casas = quantidadeCasas(num);
		controle = casas;
		for(cont=controle;cont>=1;cont--){
			for(k=1;k<casas;k++){
		    multi = multi * 10;
	        } 
		    resto = num%multi;
		    sub = num - resto;
		    peganum = sub/multi;
		    
		    soma = soma + peganum;
		    fat = fat*peganum;
		    
	        num = resto;
	        multi = 1;
	        casas = quantidadeCasas(num);
		}	
		if(opcao==1){
			return soma;
		}
		if(opcao==2){
			return fat;
		}
}


int main(){
	int numero1, numero2, casas1, casas2, soma1, soma2, fat1, fat2;
	printf("digite um numero 1  = ");
	scanf("%d", &numero1);
	printf("digite o numero 2 = ");
	scanf("%d", &numero2);
	casas1 = quantidadeCasas(numero1);
	casas2 = quantidadeCasas(numero2);
	if (casas1!=casas2){
		printf("\nja nao eh permutacao");
	} else {
	   soma1 = pegaPermut(numero1, 1);
	   soma2 = pegaPermut(numero2, 1);
	   fat1 = pegaPermut(numero1, 2);
	   fat2 = pegaPermut(numero2, 2);
	   if((soma1==soma2)&&(fat1==fat2)){
		printf("\neh permutacao");
	   } else {
		printf("\nnao eh permutacao");
	   }
	}	
	
	return 0;
}
