#include <stdio.h>

int main(){
	int const size = 5;
	int arr[size];
	int count = 0;

	for(int i = 0; i<size; ++i){
		printf("Enter the %dth value: ", i);
		scanf("%d", &arr[i]);

		if(arr[i]%2 != 0){
			count ++;
		}
	}

	printf("%d", count);
	return 0;
}
