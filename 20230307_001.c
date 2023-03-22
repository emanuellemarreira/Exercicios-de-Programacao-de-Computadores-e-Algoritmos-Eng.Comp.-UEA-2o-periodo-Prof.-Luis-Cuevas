#include <stdio.h>

void imprime(int *pi, int *pf){
	int *i;
	for(i=pi;i<=pf;i++){
		printf("%d\n", *i);
	}
	printf("\n\n\n");
}


int main(){
	int vetor[5]={1,2,3,4,5};
	imprime(vetor+0,vetor+4);
	
	int vetor2[10]= {1,2,3,4,5,6,7,8,9,10};
	imprime(vetor2+0,vetor2+9);
	
	int vetor3[15]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	imprime(vetor3+0,vetor3+14);
	return 0;
}
