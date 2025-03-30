#include <stdio.h>
int main(){
	int const size = 5;
	int arr[size];
	int min = 0;
	for(int i = 0; i<size; i++){
		printf("Please, enter the value of the %dth number: ", i);
		scanf("%d", &arr[i]);
	}
	min = arr[1];
	for(int i = 0; i<size; i++){
		if(min > arr[i]){
			min = arr[i];
		}
	}
	printf("The smallest number of your array is: %d", min);
	return 0;
}
