#include <stdio.h>

int main(){
	int a = 0;
	printf("Input a = ");
	scanf("%d", &a);

	int b = 0;
	while(a!=0){
		b*=10;
		b += a%10;
		a /= 10;
	}

	printf("%d", b);
	return 0;
}
