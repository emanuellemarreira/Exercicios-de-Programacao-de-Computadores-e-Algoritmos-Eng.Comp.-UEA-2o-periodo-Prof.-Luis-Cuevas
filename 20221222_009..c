#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n, x, y, v, w, result, maior=0;
    printf("Escreva o numero de M =\n");
    scanf("%d", &m);
    printf("Escreva o numero de N =\n");
    scanf("%d", &n);
    while(m<0 || n<0){
    	printf("so pode com numeros naturais!\n");
    	printf("tente novamente\n");
        if(m < 0){
            printf("digite um novo valor para m:  ");
    	    scanf("%d", &m);
        }
        if(n < 0){
            printf("digite um novo valor para n:  ");   
    	    scanf("%d", &n);   
        } 
    }
    for (x = 0; x <= m; x++){
        for (y = 0; y <= n; y++){
            result = x*y - x*x + y;
            //printf("%dx%d - %d^2 +  %d = %d \n",x,y,x,y,result);   //este print para ver todas as situações
            if(result >= maior){
            maior = result;
            v = x;
            w = y;
            }
        }
    }
    printf("os valores de x e y para que haja o valor maximo sao de %d e % d cujo resultade é de %d",v, w, maior);
}
