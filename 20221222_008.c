#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
  int a, b, h, x;
  int i, j;
  printf("Digite o tamanho m�ximo da hipotenusa: \n");
  scanf("%d", &h);
  while (h<= 0){
    printf("Comprimentos para a hipotenusa n�o podem ser nulos e nem negativos! Tente novamente.\n");
    break;
    }
  for (a = 1; a <= h; a++){
      for (b = 1; b <= h; b++){
            for(x= 1; x<=h; x++){
        if ((a*a) + (b*b) == x*x){

            printf("Catetos %d e %d, hipotenusa = %d\n", a, b, x);
        }
      }
  }
  }

  return 0;
}
