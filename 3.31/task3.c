#include <stdio.h>
int main(){
	int const size = 5;
	int arr[size];
	int max = 0;
	int index = 0;
	for(int i = 0; i<size; i++){
		printf("Please, enter the value of the %dth number: ", i);
		scanf("%d", &arr[i]);
	}
	max = arr[1];
	for(int i = 0; i<size; i++){
		if(max < arr[i]){
			max = arr[i];
			index = i;
		}
	}
	printf("The index of biggest number of your array is: %d", index);
	return 0;
}
