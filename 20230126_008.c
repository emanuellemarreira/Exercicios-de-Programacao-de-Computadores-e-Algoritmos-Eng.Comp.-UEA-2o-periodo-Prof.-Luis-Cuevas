#include <stdio.h>
#define MAX 5
void multiplicamatriz(int l1, int c1, int l2, int c2, int m1[MAX][MAX], int m2[MAX][MAX], int m3[MAX][MAX]){
	int f5, f6;
	for(f5=0;f5<l1;f5++){
		for(f6=f5;f6<l2;f6++){
			m3[f5][f6]=0;
		}
	}
	for(f5=0;f5<l1;f5++){
		
		for(f6=0;f6<l2;f6++){
			m3[f5][f6]+=m1[f5][f6]*m2[f6][f5]
		}
	}
}

int main(){
	int m1[MAX][MAX];
	int m2[MAX][MAX];
	int m3[MAX][MAX];
	int l1,c1,l2,c2,f1,f2,f3,f4;
	printf("qtd de linhas da matriz 1 = ");
	scanf("%d", &l1);
	printf("qtd de colunas da matriz 1 = ");
	scanf("%d", &c1);
	printf("qtd de linhas da matriz 2 = ");
	scanf("%d", &l2);
	printf("qtd de colunas da matriz 2 = ");
	scanf("%d", &c2);
	if(c1!=l2){
		printf("\n nao eh possivel realizar essa multiplicacao");
	}else{
		for(f1=0;f1<l1;f1++){
		    for(f2=0;f2<c1; f2++){
			    printf("\nInsira o valor da matriz na posicao [%d][%d] = ", f1,f2);
			    scanf("%d", &m1[f1][f2]);
		   }
	    }
	    for(f3=0;f3<l2;f3++){
		    for(f4=0;f4<c2; f4++){
			    printf("\nInsira o valor da matriz na posicao [%d][%d] = ", f3,f4);
			    scanf("%d", &m2[f3][f4]);
		   }
	    }
	    multiplicamatriz(int l1, int c1, int l2, int c2, int m1[MAX][MAX], int m2[MAX][MAX], int m3[MAX][MAX]);
	}
	return 0;
}
