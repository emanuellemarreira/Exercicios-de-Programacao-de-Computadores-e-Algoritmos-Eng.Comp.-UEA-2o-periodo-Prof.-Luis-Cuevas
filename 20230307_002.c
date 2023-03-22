#include <stdio.h>
int *f(int *arr, int *fim, int valor){
	for(arr;arr<=fim;arr++){
		if(*arr==valor){
			return arr;
		}
	}
	return NULL;
}

int main(){
    int vet[10];
    int i, encontrar, *p;
    for(i=0;i<10;i++){
    	printf("vet[%d] = ", i);
    	scanf("%d", vet+i);
	}
	printf("valor pra encontrar = ");
	scanf("%d", &encontrar);
	p = f(vet,vet+9, encontrar);
	if(p!=NULL){
		//printf("\n%d\n", &vet[0]);
		printf("\nelemento encontrado em: endereco %d  valor %d", p, *p);
	}
	
	//SEGUNDA PARTE
	int vet2[10] = {1,2,2,3,5,6,7,2,9,10};
	printf("\n%d\n", &vet2[1]);
	printf("\n%d\n", &vet2[2]);
	printf("\n%d\n", &vet2[7]);
	int count2=0;
	int *pos;
	pos = f(vet2+0,vet2+9, 2);
	if(pos!=NULL){
		count2++;
		printf("\n%do 2 no endereco: %d", count2, pos);		
	}
	while(pos != NULL){
		pos = f(pos+1,vet2+9, 2);
		if(pos!=NULL){
			count2++;
			printf("\n%do 2 no endereco: %d", count2, pos);
		}
	}
    
	return 0;
}
