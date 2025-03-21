#include <stdio.h>

int main(){
	int a = 0;
	printf("Enter the number of layers: ");
	scanf("%d", &a);

	for(int i = 1; i<=a; i++){
		for(int j = 1; j<=i; j++){
			printf("%d", i);
		}
		printf("\n");
	}

	return 0;

}
