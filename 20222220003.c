#include <stdio.h>
int main(){
	int num, soma, i;
	for(i=1;i<=50;i++){
		scanf("%d", &num);
		if (num>100 && num<200){
		    if(num%2==1){
		    	soma=soma+num;
		    }   
		}
	}
	printf("soma dos impares entre 100 e 200 = %d", soma);
	return 0;
}
