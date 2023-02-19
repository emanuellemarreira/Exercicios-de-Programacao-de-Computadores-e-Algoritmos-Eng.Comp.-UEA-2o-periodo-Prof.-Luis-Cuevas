#include <stdio.h>
#include <string.h>

int main(){
	char jogadores[23][100];
	int avaliacao[23];
	char melhor_goleiro[100];
	char melhores_defesa[4][100];
	char melhores_mediocampo[4][100];
	char melhores_atacante[2][100];
	int i, j, melhor;
	for(i=0;i<3;i++){
		printf("digite o nome do goleiro %d: ", i+1);
		scanf(" %[^\n]", jogadores[i]);
		printf("qual a avaliacao dele: ");
		scanf("%d", &avaliacao[i]);
	}
	
	for(i=3;i<10;i++){
		printf("digite o nome do defesa %d: ", i+1);
		scanf(" %[^\n]", jogadores[i]);
		printf("qual a avaliacao dele: ");
		scanf("%d", &avaliacao[i]);
	}
	for(i=10;i<19;i++){
		printf("digite o nome do medio campo %d: ", i+1);
		scanf(" %[^\n]", jogadores[i]);
		printf("qual a avaliacao dele: ");
		scanf("%d", &avaliacao[i]);
	}
	for(i=19;i<24;i++){
		printf("digite o nome do atacante %d: ", i+1);
		scanf(" %[^\n]", jogadores[i]);
		printf("qual a avaliacao dele: ");
		scanf("%d", &avaliacao[i]);
	}
	for(i=0;i<24;i++){
		if(i>=0 && i<3){
			printf("\ngoleiro: %s, avaliacao: %d", jogadores[i], avaliacao[i]);
		}
		if(i>=3 && i<10){
			printf("\ndefesa: %s, avaliacao: %d", jogadores[i], avaliacao[i]);
		}
		if(i>=10 && i<19){
			printf("\nmedio campo: %s, avaliacao: %d", jogadores[i], avaliacao[i]);
		}
		if(i>=19 && i<24){
			printf("\natacante: %s, avaliacao: %d", jogadores[i], avaliacao[i]);
		}
	}
	
	return 0;
}
