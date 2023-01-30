#include<stdio.h>

int main(){
	int m[5][5];
	int somalinhas=0, somadiagsec=0, somadiagpr=0, somacolunas=0, i, j;
	for (i = 0; i<5; i++){
        for (j = 0; j<5; j++){
            printf("\nInsira o valor da matriz na posicao [%d][%d] =", i+1,j+1);
            scanf("%d", &m[i][j]);
        }
    }
    	printf("\n");
    for (i = 0; i<5; i++){
        for (j = 0; j<5; j++){
            printf(" [%d] ", m[i][j]);
		}
		printf("\n");
    }
	for(i=0;i<5;i++){
	    for (j = 0; j<5; j++){
	        somalinhas += m[i][j];
	    }
    }  
    printf("soma das linhas = %d", somalinhas/5);
    for(i=0;i<5;i++){
	    for (j=0;j<5;j++){
	        somacolunas += m[j][i];
	    }
    }
    printf("\n");
	printf("soma das colunas = %d", somacolunas/5);	
	for (i = 0; i<5; i++){
        for (j = 0; j<5; j++){
            if(i == j){
			    somadiagpr += m[j][i];
			}
        }
    }
    printf("\n");
	printf("soma da diag principal = %d", somadiagpr);
    i = 0;
    j = 4;
    while(i<= 4){
    	somadiagsec += m[j][i];
    	i++;
    	j--;
	}
	printf("\n");
	printf("soma da diag secundaria = %d", somadiagsec);
	if (((somalinhas/5) == (somacolunas/5)) && (somadiagpr == somadiagsec)){
		printf("\neh um quadrado magico!");
	}else{
		printf("\nnao eh um quadrado magico!");
	}
	return 0;
}
