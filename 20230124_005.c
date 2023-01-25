#include<stdio.h>
void sequencia(int tam){
	int i, j;
	int nums[100];
	printf("Digite a sequencia: \n");
	for(i=0;i<=tam-1;i++){
		scanf("\n%d", &nums[i]);
		nums[i] = fatorial(nums[i]);
	}
	printf("Sequencia com fatoriais: ");
	for(j=0;j<=tam-1;j++){
		printf("\n%d", nums[j]);
	}	
}
int fatorial(int n){
	int k, fat=1;
	for(k=n;k>=1;k--){
		fat*= k;
	}
	return fat;
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
