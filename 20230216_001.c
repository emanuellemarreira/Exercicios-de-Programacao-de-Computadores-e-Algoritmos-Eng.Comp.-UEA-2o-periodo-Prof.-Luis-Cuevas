#include<stdio.h>
int interseccao(int na, int A[100], int B[100], int C[100]){
	int i, j, a, nb,containter=0;
	printf("\ntamanho do conjunto: ");
	scanf("%d", &nb);
	B[0]=nb;
	for(i=1;i<=nb;i++){
		printf("\n%d elemento do conjunto: ", i);
		scanf("%d", &B[i]);
	}	
	for(i=1;i<=na;i++){
		for(j=1;j<=nb;j++){
			if(A[i]==B[j]){
				containter++;
				C[containter]=B[j];
			    }
		    }
	    }
	C[0]=containter;
	return containter;
}

int main(){
	int n, na, nc, inter, i, a;
	int A[100];
	int B[100];
	int C[100];
	printf("Quantos conjuntos sao? ");
	scanf("%d", &n);
	while(n<=1){
		printf("invalido, tente de novo: ");
		scanf("%d", &n);
	}
	printf("\ntamanho do conjunto: ");
	scanf("%d", &na);
	A[0]=na;
	for(i=1;i<=na;i++){
		printf("\n%d elemento do conjunto: ", i);
		scanf("%d", &A[i]);
	}
	for(a=1;a<=n-1;a++){
	    nc = interseccao(na, A, B, C);
	    na = nc;
	    A[0]=C[0];
		for(i=1;i<=nc;i++){
		    A[i]=C[i];
	    }   
	}
	printf("\n\nintersecao\n\n");
	for(a=0;a<=na;a++){
		printf("[%d]",A[a]);
	}
	return 0;
}
