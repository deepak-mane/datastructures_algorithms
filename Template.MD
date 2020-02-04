# <DataStructure_Name> | <Short_Description>

__Problem :__ <explain the problem statement>
If there are even nodes, then there would be two middle nodes, we need to print second middle element. 
For example, if given linked list is 1->2->3->4->5->6 then output should be 4.

__Solution :__ <explain the proposed solution in tabular form>

|| Method1 | Method2 | Method3 |
|---|---|---|---|
||Traverse the whole linked list and count the no. of nodes. Now traverse the list again till count/2 and return the node at count/2 | Traverse linked list using two pointers. Move one pointer by one and other pointer by two. When the fast pointer reaches end slow pointer will reach middle of the linked list.| Initialize mid element as head and initialize a counter as 0. Traverse the list from head, while traversing increment the counter and change mid to mid->next whenever the counter is odd. So the mid will move only half of the total length of the list.|
|__Time Complexity__|  |  |  |
|__Space Complexity__ | | | 

## Method1
```cpp
```

## Method2
```cpp
```

## Method3
```cpp
```
