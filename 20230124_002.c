#include<stdio.h>
void aocontrario(int lista[], int tamanho){
	int j;
	printf("A sequencia ao contrario: ");
	for(j=tamanho-1;j>=0;j--){
		printf("\n%d", lista[j]);
	}
}
int main(){
	int nums[100];
	int i, tam;
	
	printf("Informe o tamanho da sequencia: ");
	scanf("%d", &tam);
	while(tam<=0 || tam>=100){
		printf("NUMERO INVALIDO\nTente novamente \n");
		scanf("%d", &tam);
	}
	printf("Digite a sequencia: \n");
	for(i=0;i<=tam-1;i++){
		scanf("\n%d", &nums[i]);
	}
	aocontrario(nums, tam);
	return 0;
}
