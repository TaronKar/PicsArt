#include <stdio.h>
int main(){
	int const size = 5;
	int arr[size];
	int max = 0;
	int min = 0;
	for(int i = 0; i<size; i++){
		printf("Please, enter the value of the %dth number: ", i);
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	min = arr[0];
	for(int i = 0; i<size; i++){
		if(max < arr[i]){
			max = arr[i];
		}
		if(min > arr[i]){
			min = arr[i];
		}
	}
	printf("The sum of the largest and smallest numbers of your array is: %d", min+max);
	return 0;
}
