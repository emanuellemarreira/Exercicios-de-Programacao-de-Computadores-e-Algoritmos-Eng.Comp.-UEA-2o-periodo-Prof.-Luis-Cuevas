#include <stdio.h>
int main(){
	int num, i;
	int primo=0;
	
	printf("digite o numero = ");
	scanf("%d",&num);
	while(num<0){
		printf("informe apenas numeros positivos!\n");
		printf("tente novamente = ");
		scanf("%d", &num);
	}
	for (i=2;i<num;i++){
		if(num%i == 0){
			primo = 1;;
	}}
	if (primo == 1 || num==0  || num==1 ){
		printf("\n nao eh primo");
	}else{
		printf("\n eh primo");
	}
	return 0;
}
