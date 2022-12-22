#include <stdio.h>
int main(){
	char ask[] = "sim";
	float n1, n2, n3, media, maiornota, menornota;
	//prof, tambem não entendi direito essa porque  nao vejo outra forma de fazer sem utilizar vetores
	while(strcmp(ask,"sim")==0){
		media = 0;
		printf("insira as notas do aluno = ");
		scanf("%f %f %f", &n1, &n2, &n3);
		if((n1>n2 && n1>n3) || (n1>=n2 && n1>n3) || (n1>n2 && n1>=n3)){
		    maiornota = n1;
	    }
	    if((n2>n1 && n2>n3) || (n2>=n1 && n2>n3) || (n2>n1 && n2>=n3)){
		    maiornota = n2;
	    } 
	    if((n3>n2 && n3>n1) || (n3>=n2 && n3>n1) || (n3>n2 && n3>=n1)){
		    maiornota = n3;
	    } 
	    if((n1<n2 && n1<n3)||(n1<=n2 && n1<n3)||(n1<n2 && n1<=n3)){
		    menornota = n1;
	    } 
	    if((n2<n1 && n2<n3)||(n2<=n1 && n2<n3)||(n2<n1 && n2<=n3)){
		    menornota = n2;
	    } 
	    if((n3<n2 && n3<n1)||(n3<=n2 && n3<n1)||(n3<n2 && n3<=n1)){
	        menornota = n3;
	    } 
	    if((n1==n2) && (n1==n3)){
		    printf("todas as notas sao iguais\n");
		    maiornota = n1;
		    menornota = n1;
	    }
	    media = (n1+n2+n3)/3;
	    printf("\nmaior nota = %.2f",  maiornota);
	    printf("\nmenor nota = %.2f",  menornota);
	    printf("\nmedia = %.2f", media);
		printf("\ndeseja continuar? sim ou nao = ");
		scanf("%s", &ask);
	}
	
	return 0;
}
