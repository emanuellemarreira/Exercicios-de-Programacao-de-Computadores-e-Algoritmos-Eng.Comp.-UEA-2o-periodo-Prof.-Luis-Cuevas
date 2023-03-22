#include<stdio.h>
int main(){
	int ni = 2;
	float nf = 1.5;
	char c = 'a';
	
	int *nip = &ni;
	float *nfp = &nf;
	char *cp = &c;
	
	printf("\nni = %d", ni);
	printf("\nnf = %f", nf);
	printf("\nc = %c", c);
	 
	*nip= 4;
	*nfp= 3; 
	*cp = 'b';
	
	printf("\napos a mudanca:");
	printf("\nni = %d", ni);
	printf("\nnf = %f", nf);
	printf("\nc = %c", c); 
	return 0;
}
