# LinkedList | Single Program with All operations


```c


/*
 ============================================================================
 Name        : LLDisplay.c
 Author      : Deepak Mane
 Version     :
 Copyright   : MIT
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int node_count; //Global Variable

struct Node {
	int data;
	struct Node * next;
}*head,*newnode=NULL;
int count_nodes_sll(struct Node *p);
void display(struct Node * temp);



void create(int A[], int n) {
	int i=0;
	struct Node *temp=NULL ;
	head = 0;
	while(i<n) {
		newnode=(struct Node *)malloc(sizeof(struct Node));
		newnode->data = A[i];
		newnode->next = NULL;
		if(head==0) {
			head=temp=newnode;
		} else {
			temp->next = newnode;
			temp = newnode;
		}
		i++;
	}
	display(head);
}

void display(struct Node * temp) {
	printf("\nThe LinkedList created is as Below :\n");
	printf("[HEAD]");
	while(temp!=NULL) {
		printf("-->%d", temp->data);
		temp=temp->next;
	}
	int node_count = count_nodes_sll(head);
	printf("\nThe Count of Nodes in LinkedList is as Below : %d \n", node_count);
}

// Function To Count Nodes in Linked List
int count_nodes_sll(struct Node *p) {
	int node_count = 0;
	while(p!=NULL) {
		node_count++;
		p=p->next;
	}
	return node_count;
}

void insert_begin_sll() {
	newnode=(struct Node *)malloc(sizeof(struct Node));
	printf("Enter Data Element you need to Insert in LinkedList: ");
	scanf("%d", &newnode->data);
	newnode->next = head;
	head = newnode;
}

void insert_end_sll() {
	struct Node *temp=NULL ;
	newnode=(struct Node *)malloc(sizeof(struct Node));
	printf("Enter Data Element you need to Insert in LinkedList: ");
	scanf("%d", &newnode->data);
	newnode->next = 0;
	temp = head;
	while(temp->next != 0) {
		temp = temp->next;
	}
	temp->next = newnode;
}

void insert_position_sll() {
	int node_count = count_nodes_sll(head);
	printf("\nCurrent number of Nodes : %d\n",node_count);

	struct Node *temp=NULL ;
	int position = 0;
	int i = 1;
	newnode=(struct Node *)malloc(sizeof(struct Node));
	printf("Enter Position where you need to Insert in LinkedList: ");
	scanf("%d",&position);
	printf("\nPositon Set to : %d\n",position);

	if(position > node_count) {
		printf("Invalid Position in LinkedList");
	} else {
		temp = head;
		while(i < position) {
			temp = temp->next;
			i++;
		}
		newnode=(struct Node *)malloc(sizeof(struct Node));
		printf("Enter Data Element you need to Insert in LinkedList: ");
		scanf("%d", &newnode->data);
		newnode->next = temp->next;
		temp->next = newnode;
	}
}

int input() {
	int number;
	scanf("%d", &number);
	return (number);
}

int main() {
	int A[] = {3,5,7,10,15};
	create(A,5);
//	display(head);
	int choice;
	do {
		printf("\n\n");
		printf("        MENU DRIVER PROGRAM !!!\n");
		printf("------------------------------------------\n");
		printf("Press 001 to Insert at Beginning of Singly Linked List\n");
		printf("Press 002 to Insert at Ending of Singly Linked List\n");
		printf("Press 003 to Insert after Specific Position in Singly Linked List\n");
		printf("Press 004 to Sum of Elements  in sll\n");
		printf("Press 005 to Find Max Element in sll\n");
		printf("Press 006 to XXXX  sll\n");
		printf("Press 007 to Search for Element in sll\n");
		printf("Press 100 to Exit\n");
		printf("Enter your choice: ");
		choice = input();

		switch (choice) {
		case 001: {
			insert_begin_sll();
			display(head);
			break;
		}
		case 002: {
			insert_end_sll();
			display(head);
			break;
		}
		case 003: {
			insert_position_sll();
			display(head);
			break;
		}
		case 100: {
			printf("Bye-Bye:\n");
			break;
		}
		default:
			printf("wrong Input\n");
		}
		printf("\n------o----------o---------o-------o----------");
		printf("\nWhat's Next you want to do ... : ");
	} while (choice != 100);

	return 0;
}
```
