# To Create and Display Sinlge Linked List

- Using Array elements:
```cpp
#include <stdio.h>
#include <stdlib.h>

// To Create Single Node
struct Node {
	int data;
	struct Node *next;
}*first=NULL;

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
		printf("%d-->", p->data);
		p=p->next;
	}
	printf("%d", 0);
}

// Driver Function
int main() {
	int A[]={3, 5, 7, 10, 15};
	create_sll(A,5);
	display_sll(first);
	return 0;
}
// END OF PROGRAM
```
