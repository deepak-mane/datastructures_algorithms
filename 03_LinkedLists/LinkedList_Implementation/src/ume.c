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
