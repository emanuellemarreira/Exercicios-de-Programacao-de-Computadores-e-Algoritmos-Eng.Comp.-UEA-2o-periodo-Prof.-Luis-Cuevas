
#include <stdio.h>
#include <string.h>

int *encontraletra(int *n, char *f, char c){
	int i, count=0;
	int vet[100];
	int *vetp = vet;//só pode retornar ponteiro
	
	for(i=0;i<strlen(f);i++){
		if(*(f+i)==c){
			*(vetp+count) = i+1;
			count++;
		}
	}
	*n = count;
	return vetp;//só pode retornar ponteiro
}
int main(){
	char frase[100], letra;
	int tamvet, i;
	int *vet;
	
	printf("frase: ");
	scanf("%[^\n]", frase);
	printf("letra: ");
	scanf(" %c", &letra);
	
	vet = encontraletra(&tamvet, frase, letra);//enviei &frase[0]
	
	printf("tamanho do vetor inteiro: %d", tamvet);
	printf("\nposicoes onde a letra foi encontrada:\n");
	for(i=0;i<tamvet;i++){
		printf("\n%d", *(vet+i));
	}
	
	return 0;
}
