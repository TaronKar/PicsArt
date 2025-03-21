#include <stdio.h>

int main(){
	int a = 0;
	printf("Input the value for a = ");
	scanf("%d", &a);

	long res = 1;
	for(int i = 2; i<=a; i++){
		res *= i;
	}
	printf("%d", res);
	

	return 0;
}
