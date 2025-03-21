#include <stdio.h>

int main(){
	int a = 0;
	printf("Enter the height of the triangle: ");
	scanf("%d", &a);
	
	int b = a;
	int t = 0;

	for(int i = 1; i<=a; i++){
		if(i == a){
			for(int j = 1; j<=a; j++){
				printf("* ");
			}
			break;
		}
		int c = b;
		while(c/2>0){
			printf(" ");
			c--;
		}
		printf("*");
		c = t;
		while(c-1>0){
			printf(" ");
			c--;			
		}
		if(t>0){
			printf("*");
		}
		b--;
		t+=2;
		printf("\n");
	}
	return 0;

}
