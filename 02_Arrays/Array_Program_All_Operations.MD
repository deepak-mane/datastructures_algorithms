# Array | Program all operations


```c
/*
 ============================================================================
 Name        : ArrayADT.c
 Author      : Deepak Mane
 Version     :
 Copyright   : MIT
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//struct Array {
//	int *A;
//	int size;
//	int length;
//};

struct Array {
	int A[20];
	int size;
	int length;
};


void Display(struct Array arr) {
	int i;
	printf("\nElements are : \n");
	printf("[");
	for(i=0; i<arr.length; i++) {
		printf("%d",arr.A[i]);
		if ((i + 1)< arr.length) {
			printf(", ");
		}
	}
	printf("]");
}

int main() {
	struct Array arr={{2, 3, 4, 5, 6}, 20, 5};
	//	int n,i;
	//	printf("Enter size of an array : ");
	//	scanf("%d", &arr.size);
	//
	//	arr.A=(int *)malloc(arr.size*sizeof(int));
	//	arr.length=0;
	//
	//	printf("Enter number of elements : ");
	//	scanf("%d", &n);
	//
	//	printf("\nEnter all elements\n");
	//	for(i=0; i<n;i++)
	//		scanf("%d", &arr.A[i]);
	//	arr.length=n;


	Display(arr);
	return 0;
}

```
