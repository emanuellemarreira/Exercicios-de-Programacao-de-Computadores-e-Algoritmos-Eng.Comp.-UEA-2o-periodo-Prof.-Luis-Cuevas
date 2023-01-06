#include <stdio.h>

int getSemanas(){
	int sem;
	printf("\ninforme a quantidade de semanas do feto = ");
	scanf("%d", &sem);
	while(sem<0){
		printf("\nnumero invalido, tente novamente = ");
		scanf("%d", &sem);
	}
	return sem;
}

float getPeso(){
	float peso;
	printf("\ninforme a quantidade de gramas do feto = ");
	scanf("%f", &peso);
	while(peso<0){
		printf("\nnumero invalido, tente novamente = ");
		scanf("%f", &peso);
	}
	return peso;
}

void verificaParto(int tempo, float gramas){
	float meses;
	if(gramas<100 || tempo<28){
		printf("\nParto nao devera ser realizado, reavaliar clinicamente");
	} else {
		meses = tempo/4;
		if((gramas>=2500 && meses>7)||(gramas>=2000 && gramas<=1500 && meses>=9)){
			printf("\nparto normal.");
		} else{
			printf("\nparto cesariana.");
	    }	
    }
}

int main(){
	float pesog;
	int semanas;
	
	semanas = getSemanas();
	pesog = getPeso();
	
	verificaParto(semanas, pesog);
	
	return 0;
}
