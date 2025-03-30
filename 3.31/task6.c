#include <stdio.h>

int main(){
	int const n = 3;
	int matrix[n][n];

	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			printf("Enter the element of %dth row and %dth column: ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}

	int sum = 0;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			sum += matrix[i][j];
		}
		printf("The sum of the %dth row is: %d\n", i, sum);
	       	sum = 0;	
	}

	return 0;

}
