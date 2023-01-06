#include <stdio.h>

int verificaPar(){
	int numero;
	printf("\ndigite um numero = ");
	scanf("%d", &numero);
	while(numero<0 || numero%2!=0){
		printf("\nnumero invalido, tente novamente = ");
		scanf("%d", &numero);
	}
	return numero;
}
void verificaPerfeito(int n){
	int i, soma=0;
	for(i=1; i<n;i++){
		if(n%i==0){
			soma+=i;
		}
	}
	if(soma!=n || n==0 ){
		printf("\no numero nao eh perfeito.");
	}else{
		if(soma==n){
		printf("\no numero eh perfeito!");
	}
	}
}


int main(){
    int num;
    num = verificaPar();
    verificaPerfeito(num);
    
	return 0;
}
