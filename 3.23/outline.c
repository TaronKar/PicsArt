#include <stdio.h>

int main(){
	int a = 0;
	printf("Enter your number: ");
	scanf("%d", &a);

	for(int i = 1; i<= a; i++){
		if(i == 1 || i == a){
			for(int j = 1; j<=a; j++){
				printf("*");
			}
		}
		else{
			printf("*   *");
		}
		printf("\n");	
	}
	return 0;
}
