#include <stdio.h>
#include <string.h>
#define MAX 100
void aocontrario(){
   int i;
   char p[MAX];
   printf("\ndigite a palavra = ");
   scanf("%s", p);
   printf("\nao contrario = ");
   for(i=strlen(p);i>=0;i--){
        printf("%c", p[i]);
   }
}
void semvogais(){
   int i;
   char p[MAX];
   printf("\ndigite a palavra = ");
   scanf("%s", p);
   printf("\nsem vogais = ");
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
   printf("\ndigite a palavra = ");
   scanf("%s", p);
   printf("\nem maiusculas = ");
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
   printf("\ndigite a palavra = ");
   scanf("%s", p);
   printf("\ndigite o caractere = ");
   scanf(" %c", &c);
   for(i=0;i<=strlen(p);i++){
        if(p[i]==c){
        	count++;
		}
   }
   printf("\no caractere %c aparece %d vezes em %s",c,count,p);
}
void apagacaract(){
   int i;
   char p[MAX], c;
   printf("\ndigite a palavra = ");
   scanf("%s", p);
   printf("\ndigite o caractere = ");
   scanf(" %c", &c);
   for(i=0;i<=strlen(p);i++){
        if(p[i]==c){
        	p[i]=' ';
		}
   }
   printf("\n nova string sem o %c = %s",c,p);
}
int main(){
	aocontrario();
	semvogais();
	maiusculas();
	caractnastring();
	apagacaract();
}
