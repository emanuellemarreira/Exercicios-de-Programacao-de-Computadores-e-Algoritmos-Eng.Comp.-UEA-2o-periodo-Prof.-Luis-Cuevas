#include <stdio.h>
#include <string.h>
#define MAX 100
int main(){
	char palavra[MAX];
	char criptografada[MAX];
	int i;
	printf("digite a palavra: ");
	scanf(" %[^\n]", palavra);
	//fgets(palavra, sizeof(palavra), stdin);
	for(i=0;i<strlen(palavra);i++){
		if(palavra[i]==' '){
			criptografada[i]=' ';
		}else{
		criptografada[i]= palavra[i]+3;		
		}
	}
	criptografada[i]='\0';
	printf("mensagem criptografada: %s", criptografada);
	return 0;
}
