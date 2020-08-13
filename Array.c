#include <stdio.h> 
#include <stdlib.h>

void sortfun(int n, int* ptr);

int main() 
{ 
	int n = 6,i; 
	int* ptr;
	ptr = (int*)malloc(n * sizeof(int)); //Dynamic memory allocation
	if (ptr == NULL) {                      //If there is no free memory left
        printf("Memory not allocated.\n");  //print this message
        exit(0); 
    } 
     else { 
  
        // Memory has been successfully allocated 
        printf("Memory successfully allocated using malloc.\n"); 
  
        // Print the elements of the array 
        printf("The elements of the array  in ascending order: "); 
        int arr[] = { 1, 23, 14, 22, 19, 20 };      //array elements which we have to sort 
        sortfun(n, arr);                        //call sortfun function

    } 
    
	return 0; 
} 

// Function to sort the numbers using pointers 
void sortfun(int n, int* ptr) 
{ 
	int i, j, t; 

	// Sort the numbers using pointers 
	for (i = 0; i < n; i++) { 

		for (j = i + 1; j < n; j++) { 

			if (*(ptr + j) < *(ptr + i)) { 

				t = *(ptr + i); 
				*(ptr + i) = *(ptr + j); 
				*(ptr + j) = t; 
			} 
		} 
	} 

	// print the numbers 
	for (i = 0; i < n; i++) 
		printf("%d ", *(ptr + i)); 
} 
