/*
 * ume.c
 *
 *  Created on: Feb 3, 2020
 *      Author: sysadmin
 */


#include <stdio.h>
#include <stdlib.h>
#include "ume.h"
#define MAX_SIZE 1000 //Maximum array size

// To Create Single Node
struct Node {
	int data;
	struct Node *next;
}*first = NULL;


// Function To Create Single Linked List
void create_sll() {
	int i,N;
	int arr[MAX_SIZE]; // Declare an array of MAX_SIZE
	struct Node *t,  *last;
	/* Input array size */
	printf("Enter size of array: ");
	scanf("%d", &N);
	/* Input elements in array */
	printf("Enter %d Nodes to be created in LinkedList : ", N);
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	/* Print all elements of array */
//			printf("\nElements in array are: ");
//			for (i = 0; i < N; i++) {
//				printf("%d ", arr[i]);
//			}


	first = (struct Node *)malloc(sizeof(struct Node));
	first->data = arr[0];
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

// Function To Recursively Display Single Linked List
void recursive_display_sll(struct Node *p)  {
	if(p!=NULL) {
		printf("-->%d" ,p->data);
		recursive_display_sll(p->next);
	}

}
