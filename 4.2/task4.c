#include <stdio.h>

int main(){
	int const size = 5;
	int arr[size];
	int even[size];
	int odd[size];

	int odd_idx = 0;
	int even_idx = 0;
	
	for(int i = 0; i<size; ++i){
		printf("Enter the %dth element: ", i);
		scanf("%d", &arr[i]);

		if(arr[i] % 2== 0){
			even[even_idx] = arr[i];
			even_idx ++;
		}
		else{
			odd[odd_idx] = arr[i];
			odd_idx ++;
		}
	}
	odd_idx = 0;
	for(int i = 0; i<size; i++){
		if(i<even_idx){
			arr[i] = even[i];
		}	
		else{
			arr[i] = odd[odd_idx];
			odd_idx++;
		}
	}

	for(int i = 0; i<size; ++i){
		printf("%d, ", arr[i]);
	}
	return 0;
}
