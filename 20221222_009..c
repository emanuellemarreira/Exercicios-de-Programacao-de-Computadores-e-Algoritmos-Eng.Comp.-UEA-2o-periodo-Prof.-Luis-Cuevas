#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,n,i,j,result;
    printf("Escreva o numero de M = ");
    scanf("%d", &m);
    while(m<0){
    	printf("so pode com numeros naturais!\n");
    	printf("tente novamente = ");
    	scanf("%d", &m);
	}
    printf("\nEscreva o numero de N = ");
    scanf("%d", &n);
    while(n<0){
    	printf("so pode com numeros naturais!\n");
    	printf("tente novamente = ");
    	scanf("%d", &n);
	}
    
    for (i = 0; i <= m; i++){
        for (j = 0; j <= n; j++){
            result = i*j - i*i + j;
            printf("%dx%d - %d^2 +  %d = %d \n",i,j,i,j,result);
        }
    }

}
