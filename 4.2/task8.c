#include <stdio.h>

int main(){
	int arr[] = {1,1,2,2,3,3,4,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int count = 0;
	for(int i = 0; i<size; ++i){
		if(arr[i] != arr[i+1]){
			if(count == 0){
				printf("%d", arr[i]);
				return 0;
			}
			count = 0;
			continue;
		}
		count ++;
	}
}
