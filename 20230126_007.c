#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int k, n, custo=0, pos1,pos2;
	int i, j, a;
	printf("\ninforme a quantidade de itinerarios = ");
	scanf("%d", &n);
	int m[n][n];
	for (i = 0; i<n; i++){
        for (j = 0; j<n; j++){
            printf("\nInsira o custo da cidade %d pra cidade %d = ", i+1,j+1);
            scanf("%d", &m[i][j]);
        }
    }
	for(i=0;i<n;i++){
	    printf("\ninforme a quantidade de cidades = ");
	    scanf("%d", &k);
	    int itinerario[k];	
	    
	    for(a=0;a<k;a++){
	    printf("\ndigite a cidade = ");
	    scanf("%d", &itinerario[a]);
		}
		for(a=0;a<k;a++){
	    	pos1 = itinerario[a];
	    	pos2 = itinerario[a+1];
	    	if (a==k-1){
	    	break;
	    	}
	    	custo += m[pos1][pos2];
		}
		printf("\ncusto do itinerario = %d", custo);
		for(a=0;a<k;a++){
	    	itinerario[a]=0;
		}
		custo=0;
	}
	return 0;
}
