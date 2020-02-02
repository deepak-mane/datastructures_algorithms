# Datastructures & Algorithms : LinkedLists

||||
|---|---|---|
||||
||||
||||

- [Introduction and Need of Linked List Data Structures](./Introduction_LinkedLists.MD)
- Types of Linked List 
- Array Vs Linked List
- Pre-Requisites of Implementing Linked List
  + Understanding what is linkedlist
  + Know Dynamic Memory allocation, malloc function in C
  + Know Pointers and Structure Data types
  + Know accessing Structure Members

### <b>Single Linked List - SLL</b>
- Has 3 Parts in its Node
- Each node contains data part and address to the next Node.
- Address of last node contains Null
- Adress of first node is stored in Header (called Pointer)
- Head Node is the Fist Node which is next to Header and contains both Data & Address
- It has single link to next node so called singly linked list
- You can only Traverse in Forward Sequentially
- Representation of Single Linked List:

```cpp
struct node {   
    int data;
    struct node * next;  // as this pointer is to the 
}                        // next node its data type is struct
```

  
1) Create Singly Linked List  - <b>create_sll()</b>
  2) Display Singly Linked List - <b>display_sll()</b>
  3) Insert
     + At Begining    - <b>insert_at_begin_sll()</b>
     + At End         - <b>insert_at_end_sll()</b>
     + After position - <b>insert_after_pos_sll()</b>
  4) Delete
     + At Begining   - <b>delete_at_begin_sll()</b>
     + At End        - <b>delete_at_end_sll()</b>
     + After postion - <b>delet_after_pos_sll()</b>
  5) Reverse Singly Linked List - <b>reverse_sll()</b>
  6) Find Length of Single Linked List - <b>find_len_sll()</b>
||


### <b>Doubly Linked List - DLL</b>
- Has 3 Parts in its Node
  - Previous Node Pointer
  - Data Part
  - Next Node Pointer

- First Node has - Previous Node as Null, Next Node has next Nodes address, Last Noder has Next Node as Null
- Representation of Single Linked List:

```cpp
struct node {   
    int data;            // Data Part
    struct node * next; // pointer to next node
    struct node * prev; // pointer to previous node
}
```
                  
  1) Create Doubly Linked List  - <b>create_dll()</b>
  2) Display Doubly Linked List - <b>display_dll()</b>
  3) Insert
     + At Begining    - <b>insert_at_begin_dll()</b>
     + At End         - <b>insert_at_end_dll()</b>
     + After position - <b>insert_after_pos_dll()</b>
  4) Delete
     + At Begining   - <b>delete_at_begin_dll()</b>
     + At End        - <b>delete_at_end_dll()</b>
     + After postion - <b>delet_after_pos_dll()</b>
  5) Reverse Doubly Linked List - reverse_dll()</b>
  6) Find Doubly of Single Linked List - find_len_dll()</b>

### <b>Circular Linked List - CLL</b>
- Its circular. It has variation of single linked list.
- Has 2 Parts in its Node
- Its sequence of elements where every element has link to next linked list and last node has link to the first link node.
- Representation of Circular Linked List:

```cpp
struct node {   
    int data;
    struct node * next; // pointer to next node
    struct node * prev; // pointer to previous node
}
```

  1) Create Circular Linked List  - <b>create_cll()</b>
  2) Display Circular Linked List - <b>display_cll()</b>
  3) Insert
     + At Begining    - <b>insert_at_begin_cll()</b>
     + At End         - <b>insert_at_end_cll()</b>
     + After position - <b>insert_after_pos_cll()</b>
  4) Delete
     + At Begining   - <b>delete_at_begin_cll()</b>
     + At End        - <b>delete_at_end_cll()</b>
     + After postion - <b>delet_after_pos_cll()</b>
  5) Reverse Circular Linked List - <b>reverse_cll()</b>
  
### <b>Doubly Circular Linked List - CLL</b>
- Doubly linked list can be made into Doubly circular linked list
- Has 3 Parts in its Node
- Last Node points to first Node
- Previous Pointer to fist Node stores address to Last Node
- Representation of Doubly Linked List:

```cpp
struct node {   
    int data;
    struct node * next; // pointer to next node
    struct node * prev; // pointer to previous node
}
```

  1) Create Doubly Circular Linked List  - <b>create_dcll()</b>
  2) Display Doubly Circular Linked List - <b>display_dcll()</b>
  3) Insert
     + At Begining    - <b>insert_at_begin_dcll()</b>
     + At End         - <b>insert_at_end_dcll()</b>
     + After position - <b>insert_after_pos_dcll()</b>
  4) Delete
     + At Begining   - <b>delete_at_begin_dcll()</b>
     + At End        - <b>delete_at_end_dcll()</b>
     + After postion - <b>delet_after_pos_dcll()</b>
  5) Reverse Doubly Circular Linked List - <b>reverse_dcll()</b>

## [Top 20 Linked List Interview Question](https://www.geeksforgeeks.org/top-20-linked-list-interview-question/)
1. + [Print the Middle of a given linked list](./middle_of_linkedlist.md)
1. + [Flattening a linked list]()
1. + [Delete the elements in an linked list whose sum is equal to zero]()
1. + [Delete middle of linked list]()
1. + [Remove duplicate elements from sorted linked list]()
1. + [Add 1 to a number represented as a linked list]()
1. + [Reverse a linked list in groups of given size]()
1. + [Detect loop in linked list]()
1. + [Remove loop in linked list]()
1. + [Find nth node from the end of linked list]()
1. + [Function to check if a singly linked list is a palindrome]()
1. + [Reverse alternate k node in a singly linked list]()
1. + [Delete last occurrence of an item from linked list]()
1. + [Rotate a linked list.]()
1. + [Delete n nodes after m nodes of a linked list.]()
1. + [Merge a linked list into another linked list at alternate positions.]()
1. + [Write a function to delete a linked list.]()
1. + [Write a function to reverse the nodes of a linked list.]()
1. + [Why quicksort is preferred for arrays and merge sort for linked lists.]()
