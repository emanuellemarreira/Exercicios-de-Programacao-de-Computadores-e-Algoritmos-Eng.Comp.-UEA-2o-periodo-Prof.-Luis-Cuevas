#include <stdio.h>
int main(){
    int m[5][5];
    int i, j, k, somal = 0, somac = 0;
    for (i = 0; i<5; i++){
        for (j = 0; j<5; j++){
            printf("\nInsira o valor da matriz na posicao [%d][%d] =", i+1,j+1);
            scanf("%d", &m[i][j]);
        }
    }

     printf("\n\n");
    printf("Matriz=\n");
    for (i = 0; i<5; i++){
        for (j = 0; j<5; j++){
            printf(" [%d] ", m[i][j]);
		}
		printf("\n");
    }
    printf("\n");
    printf("Diagonal Principal= \n");
     for (i = 0; i<5; i++){
        for (j = 0; j<5; j++){
                if(i == j){
            printf(" [%d] ", m[i][j]);}
        }
    }
    printf("\n");
    printf("Diagonal Secundaria= \n");
    i = 0;
    j = 4;
    while(i<= 4){
    	printf(" [%d] ", m[i][j]);
    	i++;
    	j--;
	}
	printf("\n");
	printf("Soma da Linha 4: \n\n");
	i = 3;
	for (j = 0; j < 5; j++){
		somal += m[i][j];
		printf("%d", m[i][j]);
		if(j<4){
			printf(" + ");
		}
	}
	printf(" = %d", somal);
   	printf("\n");
	printf("Soma da Coluna 2: \n\n");
	j = 1;
	for (i = 0; i < 5; i++){
		somac += m[i][j];
		printf("%d", m[i][j]);
		if(i<4){
			printf(" + ");
		}
	}
	printf(" = %d", somac);
	printf("\n");
    printf("Sem a Diagonal Principal= \n");
     for (i = 0; i<5; i++){
        for (j = 0; j<5; j++){
                if(i != j){
            printf(" [%d] ", m[i][j]);}
        }
        printf("\n");
    }
    return 0;
}

