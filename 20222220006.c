#include <stdio.h>
int main(){
	int i, j, tabuada;
	
	for(i=1;i<=9;i++){
		printf("***TABUADA DO %d ***\n", i);
		for(j=0;j<11;j++){
			tabuada = i*j;
			printf("%d x %d = %d\n", i, j, tabuada);
		}
	}
	
	return 0;
}
