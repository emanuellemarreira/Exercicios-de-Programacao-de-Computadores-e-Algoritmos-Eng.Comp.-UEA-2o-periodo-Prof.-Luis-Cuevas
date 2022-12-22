#include <stdio.h>
int main(){
	
	float n1, n2, n3, soma;
	float maiornota = 0;
	float menornota = 0;
	float media = 0;
	//prof, eu não entendi muito a questão entao fiz da forma que interpretei
	
	printf("digite a nota 1 = ");
	scanf("%f", &n1);
	printf("digite a nota 2 = ");
	scanf("%f", &n2);
	printf("digite a nota 3 = ");
	scanf("%f", &n3);
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
	printf("maior nota = %.2f\n", maiornota);
	printf("menor nota = %.2f\n", menornota);
	printf("media do aluno = %.2f\n", media);
	
	return 0;
}
