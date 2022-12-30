#include <stdio.h>
int main(){
	float i, j=1;
	float soma=0;
	for(i=1; i<=50;i++){
		soma = (j/i) + soma;
		j=j+2; 
	}
	printf("\nsoma = %f", soma);
	return 0;
}
