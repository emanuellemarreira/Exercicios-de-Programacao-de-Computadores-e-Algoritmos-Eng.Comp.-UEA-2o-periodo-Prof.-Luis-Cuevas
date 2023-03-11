#include <stdio.h>
int ordena(int *a1, int *b1, int *c1){
	int muda;
	
	if(*b1<*a1){
		muda = *a1;
		*a1 = *b1;
		*b1 = muda;
	}

	if(*c1<*a1){
		muda = *a1;
		*a1 = *c1;
		*c1 = muda;
	}
	if(*c1<*b1){
		muda = *b1;
		*b1 = *c1;
		*c1 = muda;
	}
	if((*a1==*b1) && (*b1==*c1)){
		return 1;
	}return 0;
}
int main(){
	int a, b, c, ret;
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("c = ");
	scanf("%d", &c);
	ret = ordena(&a,&b,&c);
	if(ret == 1){
		printf("valores iguais");
	}else{
		printf("sao valores diferentes\n");
		printf("ordenados = %d  %d  %d", a,b,c);
	}
}
