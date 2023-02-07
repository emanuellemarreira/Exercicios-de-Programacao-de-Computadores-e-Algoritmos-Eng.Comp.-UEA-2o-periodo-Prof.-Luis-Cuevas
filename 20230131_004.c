#include <stdio.h>
#include <string.h>
#define MAX 100
int main(){
	char op;
	char s1[MAX];
	char s2[MAX];
	printf("**MENU**\n");
	printf("(a) Ler uma string S1 (tamanho maximo 20 caracteres)\n(b) Imprimir o tamanho da string S1\n(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuario e imprimir o resultado da comparacao\n(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenacao\n(e) Imprimir a string S1 de forma reversa\n(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuario\n(g) Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serao lidos pelo usuario\n(h) Verificar se uma string S2 eh substring de S1. A string S2 deve ser informada pelo usuario\n(i) Retornar uma substring da string S1. Para isso o usuario deve informar a partir de qual posicao deve ser criada a substring e qual eh o tamanho da substring");
	printf("\ndigite a opcao desejada: ");
	scanf(" %c", &op);
	if(op=='a'){
	    printf("digite a string (maximo de 20 caract): ");
	    scanf("%20s", s1);
	    printf("s1 = %s", s1);
	}
	if(op=='b'){
		printf("digite a string: ");
	    scanf("%s", s1);
	    printf("tamanho da string: %d", strlen(s1));
	}
	if(op=='c'){
		int resul;
		printf("digite a 1a string: ");
	    scanf("%s", s1);
	    printf("digite a 2a string: ");
	    scanf("%s", s2);
	    resul = strcmp(s1,s2);
		if(resul==0){
			printf("\nstrings iguais!");
		}else{
			printf("\nsao strings diferentes!");
		}
	}
	if(op=='d'){//problema com os espaços
		printf("digite a 1a string: ");
		//getchar();
		//fgets(s1, 20, stdin);
		scanf("%s", s1);
	    printf("digite a 2a string: ");
	    //fgets(s2, sizeof(s2), stdin);
	    scanf("%s", s2);
	    strcat(s1,s2);
	    printf("string1 + string2: %s", s1);
	}
	if(op=='e'){
		int i;
		printf("digite a palavra = ");
		scanf("%s", s1);
		printf("ao contrario = ");
		for(i=strlen(s1);i>=0;i--){
		printf("%c", s1[i]);
		}
	}
	if(op=='f'){
		int i, count=0;
		char c;
		printf("digite a palavra = ");
		scanf("%s", s1);
		printf("digite o caractere = ");
		scanf(" %c", &c);
		for(i=0;i<=strlen(s1);i++){
		    if(s1[i]==c){
        	    count++;
		    }
        }
		printf("o caractere %c aparece %d vezes em %s",c,count,s1);
	}
	if(op=='g'){
		int i;
		char c1, c2;
		printf("digite a palavra = ");
		scanf("%s", s1);
		printf("digite o caractere 1 p ser substituido (so a primeira ocorrencia)= ");
		scanf(" %c", &c1);
		printf("digite o caractere 2 p substituir= ");
		scanf(" %c", &c2);
		for(i=0;i<=strlen(s1);i++){
		    if(s1[i]==c1){
        	    s1[i]=c2;
        	    break;
		    }
        }
        printf("nova string: %s", s1);
	}
	if(op=='h'){
		int i, pos, j, k, controle=0;
		printf("digite a 1a string: ");
		scanf("%s", s1);
	    printf("digite a 2a string: ");
	    scanf("%s", s2);
		for(i=0;i<strlen(s1);i++){
			if(s1[i]==s2[0]){
				k=1;
				pos = i;
				for(j=1;j<strlen(s2);j++){
					pos++;
					if(s1[pos]==s2[j]){
						k++;
					}
					if(k==strlen(s2)){
						printf("%s eh substring de %s!", s2,s1);
						controle=1;
					}
				}
				if(controle==1){
					break;
				}				
			}
		}
		if(controle!=1){
			printf("\nnao eh substring");
		}
	}
	if(op=='i'){
		int pos, tam, i;
		printf("digite a string: ");
		scanf("%s", s1);
		printf("digite a posicao desejada: ");
		scanf("%d", &pos);
		pos=pos-1;//pra ele nao digitar do zero;
		printf("digite o tamanho que a substring deve ter: ");
		scanf("%d", &tam);
		char substring[tam];
		for(i=0;i<tam;i++){
			substring[i]= s1[pos];
			pos++;
		}
		substring[i]='\0';
		printf("substring: %s", substring);
	}
	return 0;
}
