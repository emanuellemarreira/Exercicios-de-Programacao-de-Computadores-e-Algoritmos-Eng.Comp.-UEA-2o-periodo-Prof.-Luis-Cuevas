#include<stdio.h>

int main(){
	int nums[100];
	int i,j,k,a;
	int tam,menor,guarda;
	
	printf("Informe o tamanho da sequencia: ");
	scanf("%d", &tam);
	while(tam<=0 || tam>=100){
		printf("NUMERO INVALIDO\nTente novamente \n");
		scanf("%d", &tam);
	}
	printf("Digite a sequencia: \n");
	for(i=0;i<=tam-1;i++){
		scanf("\n%d", &nums[i]);
	}
	for(j=0;j<=tam-1;j++){
		for(k=j;k<=tam-1;k++){
			menor = nums[j];//diz que o menor valor é o primeiro da sequencia sempre
			if(nums[k]<menor){//verifica quais valores são menores que o primeiro
				guarda = menor;//pega o menor antigo		
				nums[j]=nums[k];//pega o mennor atual
				nums[k]= guarda;//muda o menor antigo pro atual
			}
		}
	}
	printf("Sequencia ordenada: ");
	for(a=0;a<=tam-1;a++){
		printf("\n%d", nums[a]);
	}
	return 0;
}
