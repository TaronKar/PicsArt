#include <stdio.h>

int main(){
	int const n = 5;
	char str[n];

	for(int i = 0; i<n; ++i){
		scanf(" %c", &str[i]);
	}	
	for(int i = 0; i<n/2; ++i){
		str[i] += str[n-1-i];
		str[n-1-i] = str[i] - str[n-1-i];
		str[i] = str[i] - str[n-1-i];
	}
	for(int i = 0; i<n; ++i){
		printf("%c\n", str[i]);
	}
	return 0;
}
