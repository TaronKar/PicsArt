#include <stdio.h>

int main(){
	int const size = 5;
	int arr[size];

	int target = 0;
	printf("Enter the target number: ");
	scanf("%d", &target);
	for(int i = 0; i<size; ++i){
		printf("Eneter the %dth element: ", i);
		scanf("%d", &arr[i]);
	}

	for(int i = 0; i<size; ++i){
		if(target == arr[i]){
			printf("%d", i);
			return 0;
		}
	}

	printf("%d", -1);
	return 0;
	
}
