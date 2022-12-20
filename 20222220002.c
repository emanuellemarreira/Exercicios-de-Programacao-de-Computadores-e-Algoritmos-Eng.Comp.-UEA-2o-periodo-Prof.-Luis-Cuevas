#include <stdio.h>
int main(){
	int num, soma, i;
	for(i=1;i<=50;i++){
		scanf("%d", &num);
		if(num%2==1){
			soma=soma+num;
		}
	}
	printf("soma dos impares = %d", soma);
	return 0;
}
