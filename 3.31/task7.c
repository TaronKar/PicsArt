#include <stdio.h>

int main(){
	int const n = 3;
	int matrix[n][n];

	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			printf("Enter the value of the %dth row and %dth column: ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	int sum = 0;
	for(int i = 0; i<n; i++){
		sum += matrix[i][i];
	}

	printf("%d", sum);
	return 0;

}
