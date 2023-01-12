#include <stdio.h>
int quantidadeCasas(int n){
	int j=1, i=0, nn;
	if(n<0){
		n = n*(-1);
	}
	for(j=1;j<=n;j*=10){
		i++;
	}
	return i;
}

void validar (int num1,int num2, int c1, int c2){
	int k, i, multi=1;
    for(k=1;k<c2;k++){
		multi = multi * 10;
	} 
	
	if (c2>c1){
	   printf("Nao Corresponde");		
	} else {
		if ((num1 - num2) % multi == 0){
            printf("Corresponde");
        }
        else{
            printf("Nao Corresponde");
        }
	}
    }

int main(){
int num1,num2,casas1,casas2;
printf("Escreva um numero : ");
scanf("%d",&num1);
while(num1<0){
printf("\napenas positivos : ");	
scanf("%d",&num1);
}
printf("Escreva um numero : ");
scanf("%d",&num2);
while(num2<0){
printf("\napenas positivos : ");	
scanf("%d",&num2);
}
casas1 = quantidadeCasas(num1);
casas2 = quantidadeCasas(num2);
validar(num1,num2,casas1,casas2);

}
