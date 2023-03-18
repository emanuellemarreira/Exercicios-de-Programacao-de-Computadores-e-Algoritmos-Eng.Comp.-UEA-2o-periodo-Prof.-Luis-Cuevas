#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void mediaDesvio(int n, float *notas, float *media, float *desvio){
	int i;
	float soma=0;
	for(i=0;i<n;i++){
		soma += *(notas+i);
	}
	*media = soma/n;
	//variancia
	for(i=0;i<n;i++){
		*desvio += pow(*(notas+i) - *media, 2)/n;
	}
	*desvio = sqrt(*desvio);
}

int main(){
	float *notas, media, desvio;
	int alunos, i;
	printf("qual a quantidade de alunos da turma? ");
	scanf("%d", &alunos);
	notas = (float *)malloc(alunos*sizeof(float));
	if(notas != NULL){
		//LEITURA DE VETOR USANDO UM POUCO MENOS DE PONTEIROS
		/*for(i=0;i<alunos;i++){
		printf("\nnota: ");
		scanf("%f", notas+i);		
		}*/
		// LEITURA DE VETOR USANDO FOR SÓ PONTEIROS
	
		//LEITURA DE VETOR USANDO WHILE COM PONTEIROS
		float *notascont = notas;
		while(notascont< &notas[alunos]){
			printf("nota: ");
			scanf("%f", notascont);
			notascont++;
		}
	} else {
		printf("\n\nERRO NA ALOCACAO DE MEMORIA\n\n");
		return -1;
	}
	mediaDesvio(alunos, notas, &media, &desvio);
	printf("media: %.2f", media);
	printf("\ndesvio padrao: %.2f", desvio);
	free(notas);
	return 0;
}
