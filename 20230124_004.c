#include<stdio.h>
void sequencia(int tam){
	int i, j, contpares=0;
	int nums[100];
	int pares[100];
	printf("Digite a sequencia: \n");
	for(i=0;i<=tam-1;i++){
		scanf("\n%d", &nums[i]);
		if(nums[i]%2==0){
			pares[contpares]=nums[i];
			contpares++;
		}
	}
	printf("Sequencia apenas com numeros pares: ");
	for(j=0;j<=contpares-1;j++){
		printf("\n%d", pares[j]);
	}	
}

int main(){
	int tamanho;
	printf("Informe o tamanho da sequencia: ");
	scanf("%d", &tamanho);
	while(tamanho<=0 || tamanho>=100){
		printf("NUMERO INVALIDO\nTente novamente \n");
		scanf("%d", &tamanho);
	}
	sequencia(tamanho);
	return 0;
}
