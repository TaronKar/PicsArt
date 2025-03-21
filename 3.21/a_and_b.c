#include <stdio.h>

int main(){
	int a = 0;
	int b = 0;
	printf("Input the value of a = ");
	scanf("%d", &a);
	printf("\nInput the value of b = ");
	scanf("%d", &b);

	for(int i = a; i <= b; i++){
		if(i%5 == 0){
			printf("%d\n", i);
		}
	}
	return 0;
}
