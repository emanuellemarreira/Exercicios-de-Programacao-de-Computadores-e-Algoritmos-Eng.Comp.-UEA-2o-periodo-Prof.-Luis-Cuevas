#include<stdio.h>
void produtointerno(int v1[], int v2[], int n){
	int k, a, b, prodint=0;
	for(k=0;k<=n-1;k++){
		prodint+=v1[k]*v2[k];
	}
	for(a=0;a<=n-1;a++){
		if(a==0){
		printf("<(");
		} 
		if(a==n-1){
		printf("%d),", v1[a]);	
		}else{
			printf("%d,", v1[a]);
		}
		
	}
	for(b=0;b<=n-1;b++){
		if(b==0){
		printf("(");
		} 
		if(b==n-1){
		printf("%d)>", v2[b]);	
		}else{
			printf("%d,", v2[b]);
		}
	}
	printf(" = %d", prodint);
}
int main(){
	int x[100];
	int y[100];
	int tam, i, j, conttamx=0,conttamy=0;
	
	printf("Informe a quantidade de coordenadas dos vetores: ");
	scanf("%d", &tam);
	while(tam<=1){
		printf("NUMERO INVALIDO\nTente novamente \n");
		scanf("%d", &tam);
	}
	printf("Informe as coordenadas do vetor X: \n");
	for(i=0;i<=tam-1;i++){
		scanf("\n%d", &x[i]);
		conttamx++;
	}
	printf("Informe as coordenadas do vetor Y: \n");
	for(j=0;j<=tam-1;j++){
		scanf("\n%d", &y[j]);
		conttamy++;
	}
	produtointerno(x,y,tam);
	return 0;
}
