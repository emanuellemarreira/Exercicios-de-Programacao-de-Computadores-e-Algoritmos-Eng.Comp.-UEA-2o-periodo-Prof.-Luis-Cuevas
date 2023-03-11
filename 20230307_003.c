#include<stdio.h>
int main(){
	int ni = 2;
	int *nip = &ni;
	float nf = 1.5;
	float *nfp = &nf;
	char c = 'a';
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
