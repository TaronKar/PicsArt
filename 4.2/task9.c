#include <stdio.h>

int main(){
	int const N = 5;
	int arr[] = {1,2,4,3};

	int size = N-1;
	int k = 1;

	while(1){
		for(int i = 0; i<size-1; ++i){
			if(arr[i]>arr[i+1]){
				arr[i] += arr[i+1];
				arr[i+1] = arr[i] - arr[i+1];
				arr[i] = arr[i] - arr[i+1];
				k++;
			}
		}
		if(k == 1){
			break;
		}
		k = 1;
	}

	for(int i = 0; i<size; ++i){
		if(arr[i] != i+1){
			printf("%d", i+1);
			return 0;
		}
	}
	printf("%d", N);
	return 0;
}
