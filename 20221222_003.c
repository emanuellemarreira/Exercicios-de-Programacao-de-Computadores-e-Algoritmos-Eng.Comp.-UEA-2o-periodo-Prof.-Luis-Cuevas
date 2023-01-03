#include <stdio.h>
#include <stdlib.h>

int main()
{
    int somapares = 0,somarimpares = 0,numero = 0;
    while (numero < 1000){
        printf("digite o numero = ");
        scanf("%d",&numero);
        if (numero < 1000){
        if (numero % 2 == 0){
            somapares = somapares + numero;
            }
        if (numero % 2 != 0) {
            somarimpares = somarimpares + numero;
        }
        }


    }
    printf("Soma dos numeros pares: %d \nSoma dos numero impares: %d",somapares,somarimpares);
}
