#include<stdio.h>
#define MAX 100
int main(){
	char carros[5][MAX];
	float consumo[5], maior_consumo, milkm[5];
	int i, j, k,  maior_carro;
	for(i=0;i<5;i++){
		printf("\nnome do carro: ");
		scanf(" %[^\n]", carros[i]);
		printf("\nconsumo do carro: ");
		scanf("%f", &consumo[i]);
	}	
	for(j=0;j<5;j++){
		if(j==0){
			maior_consumo = consumo[j];
			maior_carro = j;
		}else{
			if(consumo[j]>maior_consumo){
			    maior_consumo = consumo[j];
			    maior_carro = j;				
			}
		}
		milkm[j]= 1000/consumo[j];
	}
	printf("\no carro mais economico (roda mais com 1L de gasolina): %s", carros[maior_carro]);
	for(k=0;k<5;k++){
		printf("\no carro %s percorre 1000km com %.2fL de gasolina", carros[k], milkm[k]);
	}
	return 0;
}
