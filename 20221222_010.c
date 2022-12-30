#include <stdio.h>
#include <math.h>

int main(){
    int num, i, cubo, numeros, sequencia, sequencia2, k, j;
    printf("informe o numero a ser elevado a 3 = ");
    scanf("%d", &num);
    while(num<0){
    	printf("apenas positivos! tente novamente = ");
    	scanf("%d", &num);
	}
    for(j = num; j>=0; j-=1){
    	cubo = j * j * j;
    	printf("%d^3 = %d\n",j, cubo);
    	sequencia = (cubo/j);
    	k = (j-1)/2;
    	if (cubo % 2 != 0){
        	for(i = (-1) * k; i < k + 1; i += 1){
                	sequencia2 = sequencia - (i * 2);
            	    printf("%d+", sequencia2);          	    
        	}
    	}
    	if (cubo % 2 == 0){
        	for(i = (-1) * k - 1; i < k + 1 ; i += 1){
        	    sequencia2 = (sequencia - 1) - (i * 2);
            	printf("%d+", sequencia2);
        	}

    	}
    	printf("\n-----------------------------------\n");
	}
}
