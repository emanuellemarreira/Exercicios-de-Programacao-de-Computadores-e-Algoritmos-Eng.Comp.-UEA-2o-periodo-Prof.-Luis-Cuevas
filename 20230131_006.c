#include<stdio.h>
#include<string.h>
#define MAX 100
int main(){
    char str[100];
	int i, j, a, b, engual;
	printf("digite a palavra ou frase: ");
	//tira os espacos
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = 0;
	i = 0;
	j = 0;
	while (str[i]) {
	    if (str[i] != ' ') {
            str[j++] = str[i];
        }
    i++;
    }
	str[j] = '\0';
	
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
