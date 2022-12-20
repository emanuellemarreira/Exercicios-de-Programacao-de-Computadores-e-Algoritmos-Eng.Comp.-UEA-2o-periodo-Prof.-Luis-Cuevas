#include <stdio.h>
int main(){
	int i, num, maior, menor;
	
	for(i=1;i<=20;i++){
		scanf("%d", &num);
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
	printf("menor numero = %d", menor);
	printf("\nmaior numero = %d", maior);
	return 0;
}
