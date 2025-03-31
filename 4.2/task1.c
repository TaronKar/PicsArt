#include <stdio.h>

int main(){
	int const size = 5;
	char str[size];

	for(int i = 0; i<size; ++i){
		printf("Enter the %dth character: ", i);
		scanf(" %c", &str[i]);

		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] -= 32;
		}
	}

	for(int i = 0; i<size; i++){
		printf("%c", str[i]);
	}

	return 0;
}
