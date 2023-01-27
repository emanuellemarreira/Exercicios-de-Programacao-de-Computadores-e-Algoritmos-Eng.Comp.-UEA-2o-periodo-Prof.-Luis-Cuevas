#include<stdio.h>
#define MAX 100
void soma(int m1[MAX][MAX], int m2[MAX][MAX], int i1, int j1, int k2, int n2){
	int a, b;
	int soma[MAX][MAX];
	if(i1!=k2||j1!=n2){
		printf("\nas matrizes nao tem mesma ordem, não é possivel realizar a soma\n");		
	}else{
		for(a=0;a<i1;a++){
		for(b=0;b<j1; b++){
			soma[a][b]=m1[a][b]+m2[a][b];
		}
	}
	}
	for(a=0;a<i1;a++){
		for(b=0;b<j1; b++){
			printf("[%d]", m1[a][b]);
		}
		printf("\n");
	}
	printf("\n+\n");
	for(a=0;a<i1;a++){
		for(b=0;b<j1; b++){
			printf("[%d]", m2[a][b]);
		}
		printf("\n");
	}
	printf("\n=\n");
	for(a=0;a<i1;a++){
		for(b=0;b<j1; b++){
			printf("[%d]", soma[a][b]);
		}
		printf("\n");
	}
}

int main(){
	int mat1[MAX][MAX];
	int mat2[MAX][MAX];
	int i, j, k, n;
	for(i=0;i<2;i++){
		for(j=0;j<2; j++){
			mat1[i][j]=i*j;
		}
	}
	for(k=0;k<2;k++){
		for(n=0;n<2; n++){
			mat2[k][n]=k+n;
		}
	}
	soma(mat1,mat2,i,j,k,n);
	
	return 0;
}
