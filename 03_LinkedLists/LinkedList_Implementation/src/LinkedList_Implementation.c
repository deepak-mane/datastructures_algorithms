/*
 ============================================================================
 Name        : LinkedList_Implementation.c
 Author      : Deepak Mane
 Version     :
 Copyright   : MIT
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "ume.h"
#define MAX_SIZE 1000 //Maximum array size


// Driver Function
int main() {
    int arr[MAX_SIZE]; // Declare an array of MAX_SIZE
    int i, N;

    /* Input array size */
    printf("Enter size of array: ");
    scanf("%d", &N);

    /* Input elements in array */
    printf("Enter %d elements in the array : ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    /*
     * Print all elements of array
     */
    printf("\nElements in array are: ");
    for(i=0; i<N; i++)
    {
        printf("%d ", arr[i]);
    }

	create_sll(arr,N);
	printf("\nThe LinkedList created is as Below :\n");
	display_sll(first);
	return 0;
}
// END OF PROGRAM
