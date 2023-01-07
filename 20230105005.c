#include <stdio.h>

int fibonacci(int n){
	int i, ant, seq, somaseq;
	ant=1;
	seq=0;  
	for(i=1;i<=n;i++){
		somaseq = seq+ant;
		ant=seq;
		seq = somaseq;
		if(i==n){
			return somaseq;	
		}
	}	
}

int main(){
	int num, sequencia;
	printf("informe o valor da posicao na sequencia de fibonacci = ");
	scanf("%d", &num);
	while(num<=0){
		printf("\ninvalido, tente novamente = ");
		scanf("%d", &num);
	}
	sequencia = fibonacci(num);
	printf("\nseq de fibonacci na %da posicao = %d", num, sequencia);
	return 0;
}
