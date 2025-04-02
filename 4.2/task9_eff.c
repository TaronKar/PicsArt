#include <stdio.h>

int main(){
	int N = 5;
       	int size = N-1;
	int arr[] = {1,2,4,3};

	int target = 1;
	int check = 0;
	for(int i = 0; i < N; i++){
		for(int i = 0; i < size; ++i){
			if(arr[i] == target){
				check = 1;
				break;
			}
		}
		if(check != 1){
			printf("%d", target);
			return 0;
		}
		target += 1;
		check = 0;
	}
	return 0;

}
