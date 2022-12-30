#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float MassaInicial, MassaFinal; 
    int hr, mn, s=0, d;

    printf("qual a massa inicial(em grama) do elemento?\n");
    scanf("%f", &MassaInicial);
    MassaFinal = MassaInicial;
    if(MassaInicial>=0){
        while (MassaFinal >= 0.5){
        MassaFinal -= (MassaFinal / 2);
        s = s + 50;
        }
        
        hr = s / 3600;
        d = s % 3600;
        mn = d / 60;
        s = d % 60; 

        printf("Sua massa inicial foi de %.2f g\n", MassaInicial);
        printf("Sua massa final foi de %.2f g\n", MassaFinal);    
        printf("O tempo decorrido foi de %d:%d:%d", hr, mn, s);
    }
    if(MassaInicial<0){
        printf("O valor colocado como massa inicial é invalido\nTente novamente");
    }
    return 0;
}
