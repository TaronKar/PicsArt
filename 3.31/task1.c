#include <stdio.h>
int main(){
	int const size = 5;
	int arr[size];
	int max = 0;
	for(int i = 0; i<size; i++){
		printf("Please, enter the value of the %dth number: ", i);
		scanf("%d", &arr[i]);
	}
	max = arr[1];
	for(int i = 0; i<size; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	printf("The biggest number of your array is: %d", max);
	return 0;
}
