#include <stdio.h>
#include <string.h>


int main(){
	char nomes1[6][120];
	char nomes2[6][120];
	char sexo1[6];
	char sexo2[6];
	int notas1[6];
	int notas2[6];
	int a,b;
	
	for(b=0;b<6;b++){
		printf("nome do aluno %d da equipe 1: ", b+1);
		scanf(" %[^\n]", nomes1[b]);
	}
	for(b=0;b<6;b++){
		printf("nome do aluno %d da equipe 2: ", b+1);
		scanf(" %[^\n]", nomes2[b]);
	}
	for(b=0;b<6;b++){
		printf("sexo do aluno %d da equipe 1 (H - homem, M - mulher) : ", b+1);
		scanf(" %c", &sexo1[b]);
	}
	for(b=0;b<6;b++){
		printf("sexo do aluno %d da equipe 2 (H - homem, M - mulher) : ", b+1);
		scanf(" %c", &sexo2[b]);
	}
	for(b=0;b<6;b++){
		printf("nota do aluno %d da equipe 1: ", b+1);
		scanf("%d", &notas1[b]);
	}
	for(b=0;b<6;b++){
		printf("nota do aluno %d da equipe 2: ", b+1);
		scanf("%d", &notas2[b]);
	}
	
	int countm_eq1=0;
	int countm_eq2=0;
		for(b=0;b<6;b++){
			if(sexo1[b] == 'M'){
				countm_eq1++;
			}
			if(sexo2[b] =='M'){
				countm_eq2++;
			}
		}
	if(countm_eq1==countm_eq2){
		printf("\nas equipes tem a mesma quantidade de mulheres");
	}
	if(countm_eq1>countm_eq2){
		printf("\na equipe 1 possui mais mulheres");
	}
	if(countm_eq1>countm_eq2){
		printf("\na equipe 2 possui mais mulheres");
	}
	char escolhidas[12][120];
	int countesc=0;
	for(b=0;b<6;b++){
			if(notas1[b]>=8 && sexo1[b]=='M'){
				countesc++;
				strcpy(escolhidas[countesc], nomes1[b]);
			}
			if(notas2[b]>=8 && sexo2[b]=='M'){
				countesc++;
				strcpy(escolhidas[countesc], nomes2[b]);
			}
		}
	printf("\nalunas escolhidas:\n");
	for(a=0;a<=countesc;a++){
		printf("\n%s", escolhidas[a]);
	}
	
	return 0;
}
