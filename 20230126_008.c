#include <stdio.h>
void multiplicamatriz(int ln1, int cl1, int ln2, int cl2, int mt1[ln1][cl2], int mt2[ln2][cl2], int mt3[ln1][cl2]){
	int i, j, x, aux=0, a,b;
	for(i = 0; i < ln1; i++) {
		for(j = 0; j < cl2; j++) {
			
			mt3[i][j] = 0;
			for(x = 0; x < ln2; x++) {
				aux +=  mt1[i][x] * mt2[x][j];
			}

			mt3[i][j] = aux;
			aux = 0;
		}
	}
}

int main(){
	
	int l1,c1,l2,c2,f1,f2,f3,f4, a, b;
	
	printf("qtd de linhas da matriz 1 = ");
	scanf("%d", &l1);
	printf("qtd de colunas da matriz 1 = ");
	scanf("%d", &c1);
	printf("qtd de linhas da matriz 2 = ");
	scanf("%d", &l2);
	printf("qtd de colunas da matriz 2 = ");
	scanf("%d", &c2);
	int m1[l1][c1];
	int m2[l2][c2];
	int m3[l1][c2];
	if(c1!=l2){
		printf("\n nao eh possivel realizar essa multiplicacao");
	}else{
		for(f1=0;f1<l1;f1++){
		    for(f2=0;f2<c1; f2++){
			    printf("\nInsira o valor da 1a matriz na posicao [%d][%d] = ", f1,f2);
			    scanf("%d", &m1[f1][f2]);
		   }
	    }
	    for(f3=0;f3<l2;f3++){
		    for(f4=0;f4<c2; f4++){
			    printf("\nInsira o valor da 2a matriz na posicao [%d][%d] = ", f3,f4);
			    scanf("%d", &m2[f3][f4]);
		   }
	    }
	    multiplicamatriz(l1, c1, l2, c2, m1, m2, m3); 
	    printf("\nmatriz 1\n");
	    for(a=0;a<l1;a++){
		    for(b=0;b<c1;b++){
			    printf("[%d]", m1[a][b]);
		   }
		   printf("\n");
	    }
	    printf("\nmatriz 2\n");
	    for(a=0;a<l2;a++){
		    for(b=0;b<c2;b++){
			    printf("[%d]", m2[a][b]);
		   }
		   printf("\n");
	    }
	    printf("\n=\n");
	    for(a=0;a<l1;a++){
		    for(b=0;b<c2;b++){
			    printf("[%d]", m3[a][b]);
		   }
		   printf("\n");
	    }
	}
	return 0;
}
