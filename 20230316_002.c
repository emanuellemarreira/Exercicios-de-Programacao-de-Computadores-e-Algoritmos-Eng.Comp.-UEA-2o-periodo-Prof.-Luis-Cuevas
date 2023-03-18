#include <stdlib.h>
#include <stdio.h>

int main(){
	int ln, cl, i, j;
	 
	printf("quantidade de linhas: ");
	scanf("%d", &ln);
	printf("quantidade de colunas: ");
	scanf("%d", &cl);
	
	//alocação	
	int **mat = (int **)malloc(ln*sizeof(int *));
	for(i=0;i<ln;i++){
		*(mat+i) = (int *)malloc(cl*sizeof(int));
	}
	
	//colocando valores
	for(i=0;i<ln;i++){
		for(j=0;j<cl;j++){
			printf("m[%d][%d] = ", i, j);
			scanf("%d", (*(mat+i)+j));
		}
	}
	
	printf("\nimprimindo valores usando aritmetica de ponteiros\n");
	for(i=0;i<ln;i++){
		for(j=0;j<cl;j++){
			printf("[%d]", *(*(mat+i)+j));
		}
		printf("\n");
	}
	printf("\n\n");
	
	printf("\nimprimindo valores usando indexes\n");
	for(i=0;i<ln;i++){
		for(j=0;j<cl;j++){
			printf("[%d]", mat[i][j]);
		}
		printf("\n");
	}
	//liberando memoria da matriz
	for(i=0;i<ln;i++){
		free(mat+i);
	}
	free(mat);
	
	
	return 0;
}
