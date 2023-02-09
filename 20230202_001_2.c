#include <stdio.h>
#include <string.h>
#define MAX 100
int main(){
	char nomes[5][4][120];
	char nome[120];
	int a, b, iguais=0;
	
	printf("EQUIPE\n");
	for(a=0;a<5;a++){
		for(b=0;b<4;b++){
			printf("nome do aluno %d da equipe %d: ", b+1, a+1);
			scanf(" %[^\n]", nomes[a][b]);
		}
	}
	printf("IMPRESSAO DA EQUIPE\n");
	for(a=0;a<5;a++){
		for(b=0;b<4;b++){
			printf("\naluno %d da equipe %d: %s", b+1, a+1, nomes[a][b]);
		}
	}
	printf("\ndigite o nome do aluno que quer encontrar: ");
	scanf(" %120[^\n]", nome);
	for(a=0;a<5;a++){
		for(b=0;b<4;b++){
			if(strcmp(nome, nomes[a][b])==0){
				printf("\n%s pertence a equipe %d\n", nomes[a][b],a+1);
			}
		}
	}
	

	return 0;
}
