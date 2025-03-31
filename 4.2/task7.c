#include <stdio.h>
int main(){
	int const size = 5;
	int arr[size];

	for(int i = 0; i<size; ++i){
		printf("Enter the value of the %dth number: ", i);
		scanf("%d", &arr[i]);
	}

	for(int i = size-1; i>0; --i){
		if(arr[i] > arr[i-1]){
			printf("false");
			return 0;
		}
	}

	printf("true");
	return 0;

}
