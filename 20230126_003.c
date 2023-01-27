#include<stdio.h>
void multiescalar(int m1[3][3], int k2){
	int a, b;
	int multi[3][3];
	for(a=0;a<3;a++){
		for(b=0;b<3; b++){
			multi[a][b]=m1[a][b]*k2;
		}
	}
	for(a=0;a<3;a++){
		for(b=0;b<3; b++){
			printf("[%d]", m1[a][b]);
		}
		printf("\n");
	}
	printf("\n* %d \n=\n", k2);
	for(a=0;a<3;a++){
		for(b=0;b<3; b++){
			printf("[%d]", multi[a][b]);
		}
		printf("\n");
	}
}

int main(){
	int mat1[3][3];
	int i, j, k;
	for(i=0;i<3;i++){
		for(j=0;j<3; j++){
			printf("\nInsira o valor da matriz na posicao [%d][%d] = ", i,j);
			scanf("%d", &mat1[i][j]);
		}
	}
	printf("\ndigite o valor de K = ");
	scanf("%d", &k);
	multiescalar(mat1,k);
	
	return 0;
}
