#include <stdio.h>

int main(){
	int a = 0;
	printf("Please, enter your number: ");
	scanf("%d", &a);
	int res = 0;

	for(int i = 1; i <= a/2; i++){
		if(a%i==0){
			res += i;
		}	
	}

	if(res == a){
		printf("PUUUURFECT :D");
	}
	else{
		printf("there's room for improvement");
	}

	return 0;
}
