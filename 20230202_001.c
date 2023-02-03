#include <stdio.h>
#include <string.h>
#define MAX 100
void formaequipes(char alunos[5][4]){
	char aluno[MAX];
	int i, j;
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			printf("digite o nome do aluno %d do grupo %d = ", i+1, j+1);
			scanf("%s", aluno);
			alunos[i][j] = aluno;
		}
	}
}
int encontranome(char alunos[5][4], char nome[MAX]){
	int i, j;
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			if(strcmp(alunos[i][j], nome)==0){
				return i+1;
			}
		}
	}
}

int main(){
	char nome[MAX];
	char alunos[5][4];
	int equipe;
	formaequipes(alunos);
	printf("\nnome do aluno que quer encontrar = ");
	scanf("%s", nome);
	equipe = encontranome(alunos, nome);
	printf("equipe do aluno = %d", equipe);
	return 0;
}
