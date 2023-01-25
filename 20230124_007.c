#include<stdio.h>

int main(){
	
	int i,tam,vezes, contk=0, contc=0;
	
	printf("Quantas vezes voce vai lancar a moeda? ");
	scanf("%d", &vezes);
	while(vezes<=0){
		printf("NUMERO INVALIDO\nTente novamente \n");
		scanf("%d", &vezes);
	}
	tam = vezes;
	char lancamento[tam];
	printf("Digite a sequencia: ('k'= cara e 'c'=coroa)\n");
	for(i=0;i<=tam-1;i++){
		scanf("\n%c", &lancamento[i]);
		if(lancamento[i]=='k'){
			contk++;
		}
		if(lancamento[i]=='c'){
			contc++;
		}
	}
	printf("\nLancamentos cara = %d", contk);
	printf("\nLancamentos coroa = %d", contc);
	return 0;
}
