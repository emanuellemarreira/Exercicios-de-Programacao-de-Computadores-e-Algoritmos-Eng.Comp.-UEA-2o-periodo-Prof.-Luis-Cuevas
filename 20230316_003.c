#include <stdio.h>
#include <stdlib.h>

int main(){
	int l1, c1, l2, c2, i, j;
	
	printf("quantidade de linhas de m1: ");
	scanf("%d", &l1);
	printf("quantidade de colunas de m1: ");
	scanf("%d", &c1);
	printf("quantidade de linhas de m2: ");
	scanf("%d", &l2);
	printf("quantidade de colunas de m2: ");
	scanf("%d", &c2);
	if(l1!=l2 || c1!=c2){
		printf("impossivel realizar soma.");
		return 0;
	}
	
	//alocação	
	double **mat1 = (double **)malloc(l1 * sizeof(double *));
	for(i=0;i<l1;i++){
		*(mat1+i) = (double *)malloc(c1 * sizeof(double));
	}
	double **mat2 = (double **)malloc(l2 * sizeof(double *));
	for(i=0;i<l2;i++){
		*(mat2+i) = (double *)malloc(c2 * sizeof(double));
	}
	double **mat3 = (double **)malloc(l2 * sizeof(double *));
	for(i=0;i<l2;i++){
		*(mat3+i) = (double *)malloc(c2 * sizeof(double));
	}
	//leitura de valores
	for(i=0;i<l1;i++){
		for(j=0;j<c1;j++){
			printf("m1[%d][%d] = ", i, j);
			scanf("%lf", (*(mat1+i)+j));
		}
	}
	for(i=0;i<l1;i++){
		for(j=0;j<c1;j++){
			printf("m2[%d][%d] = ", i, j);
			scanf("%lf", (*(mat2+i)+j));
		}
	}
	// soma
	for(i=0;i<l1;i++){
		for(j=0;j<c1;j++){
			*(*(mat3+i)+j) = *(*(mat1+i)+j)+*(*(mat2+i)+j);
		}
	}
	//impressão usando ponteiros
	for(i=0;i<l1;i++){
		for(j=0;j<c1;j++){
			printf("[%lf]", *(*(mat1+i)+j));
		}
		printf("\n");
	}
	printf("\n+\n");
	for(i=0;i<l1;i++){
		for(j=0;j<c1;j++){
			printf("[%lf]", *(*(mat2+i)+j));
		}
		printf("\n");
	}
	printf("\n=\n");
	for(i=0;i<l1;i++){
		for(j=0;j<c1;j++){
			printf("[%lf]", *(*(mat3+i)+j));
		}
		printf("\n");
	}
	//liberando memoria
	for(i=0;i<l1;i++){
		free(mat1+i);
		free(mat2+i);
		free(mat3+i);
	}
	free(mat1);	
	free(mat2);	
	free(mat3);	
	
	return 0;
}
