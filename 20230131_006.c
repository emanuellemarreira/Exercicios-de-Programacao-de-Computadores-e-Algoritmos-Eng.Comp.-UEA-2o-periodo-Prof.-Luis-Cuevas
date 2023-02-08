#include<stdio.h>
#include<string.h>
#define MAX 100
int main(){
    char str[100];
	int i, j, a, b, engual;
	printf("digite a palavra ou frase: ");
	//tira os espacos
	//fgets(str, sizeof(str), stdin);
	scanf(" %[^\n]", str);
	for(i=0;i<strlen(str);i++){
        if(str[i]==' '){
   	        for(j=i;j<=strlen(str);j++){
   	        	str[j]= str[j+1];
			}
		}
   }
	
  	//verifica se eh palindromo
    int pos= strlen(str);
	for(a=0;a<pos/2;a++){
		if(str[a]!=str[pos-a-1]){
        	engual=1;
		}
	}
   if(engual==0){
   	printf("\neh palindroma");
   }else{
   	printf("\nnao eh palindroma");
   }
	return 0;
}
