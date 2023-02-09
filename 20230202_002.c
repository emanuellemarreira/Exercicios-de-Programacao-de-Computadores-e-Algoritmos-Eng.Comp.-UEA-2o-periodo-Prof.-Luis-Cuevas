#include<stdio.h>
#include<string.h>
void imprimir(char nomes[20][120]){
	int b;
	for(b=0;b<20;b++){
		printf("%s", nomes[b]);
	}
}
void eliminar(char nomes[20][120]){
	char eliminado[20];
	int i, j, d;
	printf("digite o nome do consagrado que deseja eliminar: ");
	scanf(" %[^\n]", eliminado);
	for(i=0;i<20;i++){
        if(strcmp(nomes[i],eliminado)==0){
        	printf("\nteste");
   	        for(j=i;j<=20;j++){
   	        	strcpy(nomes[j],nomes[j+1]);
			}
		}
   }
	printf("nova lista sem o consagrado: \n");
	for(d=0;d<20;d++){
		printf("\n%s", nomes[d]);
	}
}
void ordemalfabetica(char nomes[20][120]){
	int j, k, a;
	char menor[120], guarda[120];
	for(j=0;j<=19;j++){
		for(k=j;k<=19;k++){
			strcpy(menor, nomes[j]);
			if(strcmp(nomes[k],menor)<0){
			    strcpy(guarda, menor);	
			    strcpy(nomes[j], nomes[k]);
			    strcpy(nomes[k], guarda);
			}
		}
	}
	printf("Sequencia ordenada: ");
	for(a=0;a<20;a++){
		printf("\n%s", nomes[a]);
	}
}
void outralista(char nomes[20][120]){
	int j, k, a;
	char novalista[20][120];
	char menor[120], guarda[120];
	
	for(j=0;j<=19;j++){
		for(k=j;k<=19;k++){
			strcpy(menor, nomes[j]);
			if(strcmp(nomes[k],menor)<0){
			    strcpy(guarda, menor);	
			    strcpy(nomes[j], nomes[k]);
			    strcpy(nomes[k], guarda);
			}
		}
	}
	for(a=0;a<20;a++){
		strcpy(novalista[a], nomes[a]);
	}
	printf("Sequencia ordenada: ");
	for(a=0;a<20;a++){
		printf("\n%s", nomes[a]);
	}
}

int main(){
	char nomes[20][120];
	char nome[20];
	int a, op;
	for(a=0;a<20;a++){
		printf("digite o %do nome: ", a+1);
		scanf(" %20[^\n]", nome);
		strcpy(nomes[a], nome);
	}
	printf("(1)imprimir a lista\n(2)eliminar um nome\n(3)imprimir em ordem alfabetica\n(4)inserir os nomes da lista em outra lista em ordem alfabetica\n");
	scanf("%d", &op);
	if(op==1){
	    imprimir(nomes);	
	}
	if(op==2){
	    eliminar(nomes);	
	}
	if(op==3){
	    ordemalfabetica(nomes);	
	}
	if(op==4){
		outralista(nomes);
	}
	return 0;
}
