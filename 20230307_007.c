#include <stdio.h>
void f(int n, int *vet, int *max, int *min){
	int i;
	for(i=0;i<n;i++){
		if(*(vet + i)>*max){
			*max = *(vet + i);
		}
		if(*(vet + i)<*min){
			*min = *(vet + i);
		}
	}
}
int main(){
	int t, i;
	printf("tamanho do vetor = ");
	scanf("%d", &t);
	int v[t];
	
	for(i=0;i<t;i++){
		printf("v[%d] = ", i);
		scanf("%d", v+i);
	}
	
	int max = v[0]; // nao posso colocar so v pq max e min nao sao ponteiros
	int min = v[0];
	
	f(t, v, &max, &min);
	
	printf("maximo = %d", max);
	printf("\nmin = %d", min);
	
	return 0;
}
