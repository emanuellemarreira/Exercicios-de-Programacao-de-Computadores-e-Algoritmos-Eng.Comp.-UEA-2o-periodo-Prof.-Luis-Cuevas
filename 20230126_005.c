#include <stdio.h>

int main(){
	int mat1[5][5];
	int i, j, x, somacoluna=0, somalinhas=0, somadiagp=0, somadiags=0;
	for(i=0;i<5;i++){
		for(j=0;j<5; j++){
			printf("\nInsira o valor da matriz na posnicao [%d][%d] = ", i,j);
			scanf("%d", &mat1[i][j]);
			somalinha += mat1[i][j];
			somacoluna += mat1[j][i];
			if (i==j){
				somadiagp+=mat1[j][i];
			}	
			somadiags+=mat1[i][j
			]
		}
	}
	return 0;
}
