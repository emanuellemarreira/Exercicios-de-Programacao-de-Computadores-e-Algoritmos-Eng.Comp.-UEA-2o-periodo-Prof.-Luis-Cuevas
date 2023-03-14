#include <stdio.h>
int main(){
	int vet[8];
	int i;
	int dobro;
	int *pdobro, *ppar;
	for(i=0;i<8;i++){
		printf("\nvet[%d] = ", i);
		scanf("%d", vet+i);
		
		dobro = 2*vet[i];
		pdobro = &dobro;
		printf("dobro = %d", *pdobro);
		
		if(*(vet+i)%2==0){
			//ppar = &vet[i];
			printf("\neita, eh par! posicao= %d, elemento= %d, endereco = %d",i, *(vet+i), (vet+i));
		}
	}
	
	return 0;
}
