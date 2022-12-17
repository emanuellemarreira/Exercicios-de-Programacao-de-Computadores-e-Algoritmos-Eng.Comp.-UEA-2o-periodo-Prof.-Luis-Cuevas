#include <stdio.h>
int main(){
	float nota1, nota2, nota3, nota4, media;
	printf("primeira nota= ");
	scanf("%f", &nota1);
	printf("segunda nota= ");
	scanf("%f", &nota2);
	printf("terceira nota= ");
	scanf("%f", &nota3);
	printf("qaurta nota= ");
	scanf("%f", &nota4);
	media = (nota1+nota2+nota3+nota4)/4;
	printf("media= %.2f", media);
	return 0;
}
