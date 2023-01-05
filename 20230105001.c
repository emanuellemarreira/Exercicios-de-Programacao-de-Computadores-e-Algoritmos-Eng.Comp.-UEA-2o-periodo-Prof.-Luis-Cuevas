#include <stdio.h>
#include <math.h>

int scanIntIntervalo(){//f que pega um num do teclado 
	int x;
	printf("\ndigite um numero entre 0 e 1000: ");
	scanf("%d", &x);
	while(x<0 || x>1000){
		printf("\nnumero fora do intervalo, tente novamente = ");
		scanf("%d", &x);
	}
	return x;
}
int verificaMenor(int n1, int n2){//f que retorna o menor valor
	if (n1<n2){
		return n1;
	}return n2;
}
int verificaMaior(int n1, int n2){//f que retorna o maior valor
	if (n1>n2){
		return n1;
	}return n2;
}
float percentual(float menornumero, float todo){
	return 100*(menornumero/todo);
}

float absdif(float maiornum, float menornum){
	return maiornum-menornum;
}

int main(){
	int num1, num2, maior, menor;
	float percent, diferenca, total;
	
	//pega os dois numeros
	num1 = scanIntIntervalo();
	num2 = scanIntIntervalo();
	
	//verifico o maior e o menor
	maior = verificaMaior(num1,num2);
	menor = verificaMenor(num1,num2);
	printf("\no maior numero eh = %d", maior);
	printf("\no menor numero eh = %d", menor);
	
	//agora transformo tudo em float para fazer as outras coisas
	num1 = (float)num1;
	num2 = (float)num2;
	maior = (float)maior;
	menor = (float)menor;
	total = num1+num2;
	
	percent= percentual(menor,total);
	diferenca = absdif(maior, menor);
	printf("\npercentual = %.2f %", percent);
	printf("\ndiferenca = %.2f", diferenca);
}
