#include <stdio.h>
int main(){
	int i;
	float num, maior, menor;
	
	for(i=1;i<=15;i++){
		printf("informe o %d numero = ", i);
		scanf("%f", &num);
		if(i==1){
			maior = num;
			menor = num;
		}
		else{
			if (num>maior){
		    	maior = num;
		    }
		    if (num<menor){
		    	menor = num;
	    	}
		}
	}
	printf("menor numero = %.2f", menor);
	printf("\nmaior numero = %.2f", maior);
	return 0;
}
