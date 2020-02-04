# Find the middle of a given linked list in C++

__Problem__ Given a singly linked list, find middle of the linked list. 
For example, if given linked list is 1->2->3->4->5 then output should be 3.

If there are even nodes, then there would be two middle nodes, we need to print second middle element. 
For example, if given linked list is 1->2->3->4->5->6 then output should be 4.

__Solution__

|| Method1 | Method2 | Method3 |
|---|---|---|---|
||Traverse the whole linked list and count the no. of nodes. Now traverse the list again till count/2 and return the node at count/2 | Traverse linked list using two pointers. Move one pointer by one and other pointer by two. When the fast pointer reaches end slow pointer will reach middle of the linked list.| Initialize mid element as head and initialize a counter as 0. Traverse the list from head, while traversing increment the counter and change mid to mid->next whenever the counter is odd. So the mid will move only half of the total length of the list.|
|__Time Complexity__|  |  |  |
|__Space Complexity__ | | | 
## Method1 Implementation
```cpp

```
## Method2 Implementation
```cpp
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

// Struct
struct Node {
	int data;
	struct Node* next;
};

/* Function to get the middle of the linked list*/
void printMiddle(struct Node *head) {
	struct Node *slow_ptr = head;
	struct Node *fast_ptr = head;

	if (head != NULL) {
		while (fast_ptr != NULL && fast_ptr->next != NULL) {
			fast_ptr = fast_ptr->next->next;
			slow_ptr = slow_ptr->next;
		}
		printf("The middle element is [%d]\n\n", slow_ptr->data);
	}
}

// Function to add a new node
void push(struct Node** head_ref, int new_data) {
	/* allocate node */
	struct Node* new_node = new Node;

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

// A utility function to print a given linked list
void printList(struct Node *ptr) {
	while (ptr != NULL) {
		printf("%d->", ptr->data);
		ptr = ptr->next;
	}
	printf("NULL\n");
}

// Driver Code
int main() {
	// Start with the empty list
	struct Node* head = NULL;

	// Iterate and add element
	for (int i = 5; i > 0; i--) {
		push(&head, i);
		printList(head);
		printMiddle(head);
	}

	return 0;
}
```
## Method3 Implementation
```cpp
Method3 Implementation
```
