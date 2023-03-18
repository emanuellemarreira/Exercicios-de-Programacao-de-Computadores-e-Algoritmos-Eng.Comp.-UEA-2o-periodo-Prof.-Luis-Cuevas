#include <stdlib.h>
#include <stdio.h>
int *retornavetor(int *n){
	int i;
	printf("quantidade de elementos do vetor: ");
	scanf("%d", n);
	int *vet = (int *)malloc((*n)*sizeof(int));
	if(vet ==NULL){
		printf("erro");
		exit(EXIT_FAILURE);
	}
	for(i=0;i<*n;i++){
		printf("\nvet[%d]: ", i);
		scanf("%d", vet+i);		
	}
	return vet;
}

void maxemin(int *vet, int *n, int *max, int *min){
	int i;
	for(i=0;i< *n;i++){
		if(*(vet+i)>*max){
			*max = *(vet+i);
		}
		if(*(vet+i)<*min){
			*min = *(vet+i);
		}
	}
	
}

int main(){
	int n;
	
	int *vet = retornavetor(&n);
	
	int max = vet[0]; // nao podia usar só vet pq max e min nao sao ponteiros
	int min = vet[0];
	
	maxemin(vet, &n, &max, &min);
	
	printf("max = %d", max);
	printf("\nmin = %d", min);
	free(vet);
	return 0;
}
