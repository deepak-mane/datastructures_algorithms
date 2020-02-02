# To Create and Display Sinlge Linked List

- Using Array elements:
```cpp
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000 //Maximum array size

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
		printf("-->%d" ,p->data);
		p=p->next;
	}
}

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
