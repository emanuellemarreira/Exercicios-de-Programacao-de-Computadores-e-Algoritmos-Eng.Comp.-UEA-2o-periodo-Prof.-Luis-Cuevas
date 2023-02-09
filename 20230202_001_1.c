#include <stdio.h>
#include <string.h>
#define MAX 100
int main(){
	char equipe1[4][MAX];
	char equipe2[4][MAX];
	char equipe3[4][MAX];
	char equipe4[4][MAX];
	char equipe5[4][MAX];
	char nome[MAX];
	int a, b, iguais=0;
	
	printf("EQUIPE 1\n");
	for(a=0;a<4;a++){
		printf("digite o nome do %do aluno: ", a+1);
		fgets(nome, sizeof(nome), stdin);
		strcpy(equipe1[a], nome);
	}
	printf("\nEQUIPE 2\n");
	for(a=0;a<4;a++){
		printf("digite o nome do %do aluno: ", a+1);
		fgets(nome, sizeof(nome), stdin);
		strcpy(equipe2[a], nome);
	}
	printf("\nEQUIPE 3\n");
	for(a=0;a<4;a++){
		printf("digite o nome do %do aluno: ", a+1);
		fgets(nome, sizeof(nome), stdin);
		strcpy(equipe3[a], nome);
	}
	printf("\nEQUIPE 4\n");
	for(a=0;a<4;a++){
		printf("digite o nome do %do aluno: ", a+1);
		fgets(nome, sizeof(nome), stdin);
		strcpy(equipe4[a], nome);
	}
	printf("\nEQUIPE 5\n");
	for(a=0;a<4;a++){
		printf("digite o nome do %do aluno: ", a+1);
		fgets(nome, sizeof(nome), stdin);
		strcpy(equipe5[a], nome);
	}
	printf("\ndigite o nome do aluno que quer encontrar: ");
	fgets(nome, sizeof(nome), stdin);
	for(a=0;a<5;a++){
		if(strcmp(equipe1[a], nome)==0){
			printf("\no aluno pertence a equipe 1");
		}
		if(strcmp(equipe2[a], nome)==0){
			printf("\no aluno pertence a equipe 2");
		}
		if(strcmp(equipe3[a], nome)==0){
			printf("\no aluno pertence a equipe 3");
		}
		if(strcmp(equipe4[a], nome)==0){
			printf("\no aluno pertence a equipe 4");
		}
		if(strcmp(equipe5[a], nome)==0){
			printf("\no aluno pertence a equipe 5");
		}
	}
	

	return 0;
}
