#include<stdio.h>
#include<string.h>

int main(){
	char nomes[20][120];
	char nome[120];
	int a, b, equipe=1, aluno=1;
	
	for(a=0;a<4;a++){
		printf("\naluno %d da equipe 1: ", aluno, a+1);
		scanf(" %[^\n]", nomes[a]);
		aluno++;
	}
	aluno=1;
	for(a=4;a<8;a++){
		printf("\naluno %d da equipe 2: ", aluno, a+1);
		scanf(" %[^\n]", nomes[a]);
		aluno++;
	}
	aluno=1;
	for(a=8;a<12;a++){
		printf("\naluno %d da equipe 3: ", aluno, a+1);
		scanf(" %[^\n]", nomes[a]);
		aluno++;
	}
	aluno=1;
	for(a=12;a<16;a++){
		printf("\naluno %d da equipe 4: ", aluno, a+1);
		scanf(" %[^\n]", nomes[a]);
		aluno++;
	}
	aluno=1;
	for(a=16;a<21;a++){
		printf("\naluno %d da equipe 5: ", aluno, a+1);
		scanf(" %[^\n]", nomes[a]);
		aluno++;
	}
	printf("\nquem desejas procurar? ");
	scanf(" %[^\n]", nome);
	for(a=0;a<20;a++){
		if(strcmp(nomes[a],nome)==0){
			if(a>=0 && a<4){
				printf("o aluno %s pertence a equipe 1", nome);
			}
			if(a>=4 && a<8){
				printf("o aluno %s pertence a equipe 2", nome);
			}
			if(a>=8 && a<12){
				printf("o aluno %s pertence a equipe 3", nome);
			}
			if(a>=12 && a<16){
				printf("o aluno %s pertence a equipe 4", nome);
			}
			if(a>=16 && a<20){
				printf("o aluno %s pertence a equipe 5", nome);
			}
		}
	}
	return 0;
}

