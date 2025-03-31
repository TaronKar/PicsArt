#include <stdio.h>

int main(){
	int arr1[] = {1,2,3,4,5};
	int arr2[] = {1,2,3,4,5};

	if(sizeof(arr1)/sizeof(arr1[0]) != sizeof(arr2)/sizeof(arr2[0])){
		printf("false");
		return 0;		
	}
	
	int size = sizeof(arr1)/sizeof(arr1[0]);
	for(int i = 0; i<size; i++){
		if(arr1[i] != arr2[i]){
			printf("false");
			return 0;
		}
	}

	printf("true");
	return 0;

}
