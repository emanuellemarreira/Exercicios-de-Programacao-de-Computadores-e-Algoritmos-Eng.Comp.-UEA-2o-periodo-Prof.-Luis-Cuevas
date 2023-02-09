#include <stdio.h>
void binario(int n){
	int restos[100];
	int i=0, a;
	printf("%d = ", n);
	while(n>0){
		restos[i]=n%2;
		i++;
		n= n/2;
	}
	
	for(a=i-1;a>=0;a--){
		printf("%d", restos[a]);
	}
}

int main(){
    int num;
    printf("Digite um numero decimal: ");
    scanf("%d", &num);
    binario(num);
    
    return 0;
}
