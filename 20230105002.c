#include <stdio.h>

int getTeclado(){
	int num;
	
	scanf("%d", &num);
	while(num<0){
		printf("\nnumero invalido, tente novamente = ");
		scanf("%d", &num);
	}
	return num;
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
	printf("\ninforme a quantidade de semanas do feto = ");
	semanas = getTeclado();
	printf("\ninforme a quantidade de gramas do feto = ");
	pesog = getTeclado();
	
	verificaParto(semanas, pesog);
	
	return 0;
}
