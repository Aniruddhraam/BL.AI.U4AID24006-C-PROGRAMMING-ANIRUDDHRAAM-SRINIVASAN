// C program to interchange two random rows in a matrix 
#include <stdio.h> 

int main() 
{ 
	int rows, columns; 

	printf("Enter the number of rows & columns: "); 
	scanf("%d %d", &rows, &columns); 

	int i, j, arr[10][10]; 

	printf("\nEnter the elements:\n\n"); 

	for (i = 0; i < rows; ++i) { 
		for (j = 0; j < columns; ++j) { 
			printf("Matrix[%d][%d]: ", i, j); 
			scanf("%d", &arr[i][j]); 
		} 
	} 

	printf("\nMatrix before interchanging rows:\n"); 

	for (i = 0; i < rows; ++i) { 
		for (j = 0; j < columns; ++j) { 
			printf("%d ", arr[i][j]); 
		} 

		printf("\n"); 
	} 

	int r1, r2, temp; 

	printf("\nEnter two row numbers that will be "
		"interchanged: "); 
	scanf("%d %d", &r1, &r2); 

	// Swap elements in both rows 

	for (i = 0; i < rows; ++i) { 
		temp = arr[r1 - 1][i]; 
		arr[r1 - 1][i] = arr[r2 - 1][i]; 
		arr[r2 - 1][i] = temp; 
	} 

	printf("\nMatrix after interchanging rows:\n"); 

	for (i = 0; i < rows; ++i) { 
		for (j = 0; j < columns; ++j) { 
			printf("%d ", arr[i][j]); 
		} 

		printf("\n"); 
	} 

	return 0; 
}

