#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   setlocale(LC_ALL, "Portuguese");
    int i;
    int n = 0;
    int soma = 0;
    printf("Verifique se um numero é perfeito: \n");
    scanf("%d", &n);

    for (i = 1; i<=n; i++){
        if (n%i == 0){
            soma = (soma + i);
        }
    }
    if (n != 0 && n!=1 && n==soma/2){
        printf("O número %d é perfeito!\n", n);}
    else {
        printf("O número %d não é perfeito.\n", n);
    }

    return 0;
}
