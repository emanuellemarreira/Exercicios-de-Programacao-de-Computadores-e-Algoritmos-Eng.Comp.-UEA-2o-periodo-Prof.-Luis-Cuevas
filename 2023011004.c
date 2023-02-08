#include <stdio.h>
#include <string.h>
void segmento(char x[100], char y[100]){
	int i, j, k, pos, controle=0;
	for(i=0;i<strlen(y);i++){
			if(y[i]==x[0]){
				k=1;
				pos = i;
				for(j=1;j<strlen(x);j++){
					pos++;
					if(y[pos]==x[j]){
						k++;
					}
					if(k==strlen(x)){
						printf("%s eh segmento de %s!", x,y);
						controle=1;
					}
				}
				if(controle==1){
					break;
				}				
			}
		}
		if(controle!=1){
			printf("\nnao eh segmento");
		}
}


int main(){
	char x[100];
	char y[100];
	int tamx, tamy;
	printf("digite o primeiro numero: ");
	scanf(" %100[^\n]", x);
	printf("digite o segundo numero: ");
	scanf(" %100[^\n]", y);
	tamx=strlen(x);
	tamy=strlen(y);
	//garantindo que x<y, e que ambos sao numeros e maiores que zero
	//nao checo se eh numero nao
	while((tamx>tamy||(x[0]=='-')||(y[0]=='-'))){
		printf("\ninvalido, tente novamente.\n");
		printf("digite o primeiro numero: ");
		scanf(" %100[^\n]", x);
		printf("digite o segundo numero: ");
		scanf(" %100[^\n]", y);
	}
	segmento(x,y);
	return 0;
}
