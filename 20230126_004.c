#include <stdio.h>

int main(){
	int mat1[3][3];
	int i, j, x, xi, xj, find = 0;
	for(i=0;i<3;i++){
		for(j=0;j<3; j++){
			printf("\nInsira o valor da matriz na posnicao [%d][%d] = ", i,j);
			scanf("%d", &mat1[i][j]);
		}
	}
	printf("\ndigite o valor X = ");
	scanf("%d", &x);
	for(i=0;i<3;i++){
		for(j=0;j<3; j++){
			if(mat1[i][j]==x){
				xi=i;
				xj=j;
				find = 1;
			}
		}
	}
	if(find == 0){
		printf("\nvalor nao encontrado!");
	}else{
		printf("\nvalor encontrado na linha %d coluna %d", xi,xj);
	}
	return 0;
}
