#include <stdio.h>
#include <string.h>
#define MAX 100
void aocontrario(){
   int i;
   char p[MAX];
   printf("\nAO CONTRARIO\n");
   printf("\ndigite a palavra = ");
   scanf(" %[^\n]", p);
   printf("ao contrario = ");
   for(i=strlen(p);i>=0;i--){
        printf("%c", p[i]);
   }
}
void semvogais(){
   int i;
   char p[MAX];
   printf("\n\nSEM VOGAIS\n");
   printf("\ndigite a palavra = ");
   scanf(" %[^\n]", p);
   printf("sem vogais = ");
   for(i=0;i<=strlen(p);i++){
        if(p[i]!= 65 && p[i]!= 69 && p[i]!=73 && p[i]!= 79 && p[i]!= 85){
		  if(p[i]!= 97 && p[i]!= 101 && p[i]!=105 && p[i]!= 111 && p[i]!=117 ){
		  	printf("%c", p[i]);
		  }
		}
   }	
}
void maiusculas(){
   int i;
   char p[MAX];
   printf("\n\nEM MAIUSCULAS\n");
   printf("\ndigite a palavra = ");
   scanf(" %[^\n]", p);
   printf("em maiusculas = ");
   for(i=0;i<=strlen(p);i++){
   	    if((p[i]>='a')&&(p[i]<='z')){
		p[i]= p[i]-('a'-'A');
		}
   }	
   for(i=0;i<=strlen(p);i++){
        printf("%c", p[i]);
   }	
}
void caractnastring(){
   int i, count=0;
   char p[MAX], c;
   printf("\n\nQTS VEZES APARECE NA STRING\n");
   printf("digite a palavra = ");
   scanf(" %[^\n]", p);
   printf("digite o caractere = ");
   scanf(" %c", &c);
   for(i=0;i<=strlen(p);i++){
        if(p[i]==c){
        	count++;
		}
   }
   printf("\no caractere %c aparece %d vezes em %s",c,count,p);
}
void apagacaract(){
   int i, j;
   char p[MAX], c;
   printf("\n\nAPAGA DA STRING\n");
   printf("\ndigite a palavra = ");
   scanf(" %[^\n]", p);
   printf("digite o caractere = ");
   scanf(" %c", &c);
   for(i=0;i<strlen(p);i++){
        if(p[i]==c){
   	        for(j=i;j<=strlen(p);j++){
   	        	p[j]= p[j+1];
			}
		}
   }
	printf("nova string sem o %c = %s",c,p);
}
int main(){
	aocontrario();
	semvogais();
	maiusculas();
	caractnastring();
	apagacaract();
}
