# To Create and Display Sinlge Linked List

- Using Array elements:
- Header file
```c
/*
 * ume.h
 *
 *  Created on: Feb 3, 2020
 *      Author: sysadmin
 */

#ifndef UME_H_
#define UME_H_

extern struct Node *first;

// Function To Create Single Linked List
void create_sll(int A[], int n);

// Function To Display Single Linked List
void display_sll(struct Node *p);

#endif /* UME_H_ */
```
- Utility type Source file
```c
/*
 * ume.c
 *
 *  Created on: Feb 3, 2020
 *      Author: sysadmin
 */
#include <stdio.h>
#include <stdlib.h>
#include "ume.h"

// To Create Single Node
struct Node {
	int data;
	struct Node *next;
}*first = NULL;

// Function To Create Single Linked List
void create_sll(int A[], int n) {
	int i;
	struct Node *t,  *last;
	first = (struct Node *)malloc(sizeof(struct Node));
	first->data = A[0];
	first->next = NULL;
	last = first;

	for(i=1; i<n; i++) {
		t = (struct Node *)malloc(sizeof(struct Node));
		t->data = A[i];
		last->next = t;
		last = t;
	}
}

// Function To Display Single Linked List
void display_sll(struct Node *p) {
	while(p!=NULL) {
		printf("-->%d" ,p->data);
		p=p->next;
	}
}
```

- Main Driver Program
```c
/*
 ============================================================================
 Name        : LinkedList_DS.c
 Author      : Deepak Mane
 Version     :
 Copyright   : Your copyright notice
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
```


## Issues
- C++ Multiple Definition of Struct
  +  
  	``` 
  	b.o:(.bss+0x0): multiple definition of `foo'
	having

	// util.hpp
	...
	// New variable
	int foo;
	each time you include util.hpp you define again the global variable foo, producing your error

	in the header file just declare it (extern int foo;) and define it on one source file

	There is not the same problem for the struct Point because this is a type definition, not a global variable definition
	```
	
