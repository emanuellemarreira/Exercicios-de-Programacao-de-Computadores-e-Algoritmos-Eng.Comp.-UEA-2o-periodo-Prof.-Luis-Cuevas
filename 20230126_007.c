#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int k, n, custo=0, pos1,pos2;
	int i, j, a;
	int m[4][4];
	for (i = 0; i<4; i++){
        for (j = 0; j<4; j++){
            printf("\nInsira o custo da cidada %d pra cidade %d = ", i+1,j+1);
            scanf("%d", &m[i][j]);
        }
    }
	printf("\ninforme a quantidade de itinerarios = ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
	    printf("\ninforme a quantidade de cidades = ");
	    scanf("%d", &k);
	    char itinerario[k];	
	    printf("\ndigite o itinerario = ");
	    scanf("%s", &itinerario);
	    for(a=0;a<k;a+=2){
	    	pos1 = strtol(itinerario[a],NULL,10);
	    	pos2 = strtol(itinerario[a+1],NULL,10);
	    	printf("\npos1 = %d", pos1);
	    	printf("\npos2 = %d", pos2);
	    	custo += m[pos1][pos2];
		
		}
		printf("\nitinerario = %s", itinerario);
		printf("\ncusto do itinerario = %d", custo);
		for(a=0;a<k;a+=2){
	    	itinerario[a]=0;
		}
		custo=0;
	}
	return 0;
}
