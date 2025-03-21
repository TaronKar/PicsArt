#include <stdio.h>

int main(){
	int a = 0;
	printf("Enter the number: ");
	scanf("%d", &a);
	int b = 1;
	for(int i = 0; i <= a; i++){
		for(int j = 1; j <= i; j++){
			printf("%d ", b);
			b++;
			if(b>a){
				break;
			}
		}
		printf("\n");
		if(b>a){
			break;
		}
	}
	return 0;
}
