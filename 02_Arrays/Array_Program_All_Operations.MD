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
#include <time.h>
#include <math.h>


struct Array {
	int A[10];
	int size;
	int length;
};


//struct foo{
//        long long int field_1;
//        long long int field_2;
//    };


void Display(struct Array arr) {
	int i;
	printf("\nElements are : \n");
	printf("[");
	for (i = 0; i < arr.length; i++) {
		printf("%d", arr.A[i]);
		if ((i + 1) < arr.length) {
			printf(", ");
		}
	}
	printf("]");
}

void Append(struct Array *arr, int x) {
	if (arr->length < arr->size) {
		arr->A[arr->length++] = x;
	}
}

void Insert(struct Array *arr, int index, int x) {
	int i;
	if (index >= 0 && index <= arr->length) {
		for (i = arr->length; i > index; i--) {
			arr->A[i] = arr->A[i - 1];
		}
		arr->A[index] = x;
		arr->length++;
	}
}

int Delete(struct Array *arr, int index) {
	int x = 0;
	int i;

	if (index >= 0 && index <= arr->length) {
		x = arr->A[index];
		for (i = index; i < arr->length - 1; i++) {
			arr->A[i] = arr->A[i + 1];
		}
		arr->length--;
		return x;
	}
	return 0;
}

void swap(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int LinearSearch(struct Array *arr, int key) {
	int i;
	for (i = 0; i < arr->length; i++) {
		if (key == arr->A[i]) {
//			For Transposition type Linear Search
//			swap(&arr->A[i],&arr->A[i-1]);
//			For Move to Front-Head type Linear Search
			swap(&arr->A[i], &arr->A[0]);
			return i;
		}
	}
	return -1;
}

int BinarySearch(struct Array arr, int key) {
	int l, mid, h;
	l = 0;
	h = arr.length - 1;

	while (l <= h) {
		mid = (l + h) / 2;
		if (key == arr.A[mid]) {
			return mid;
		} else if (key < arr.A[mid]) {
			h = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	return -1;
}

int RBinSearch(int a[], int l, int h, int key) {
	int mid;
	if(l<=h) {
		mid=(l+h)/2;
		if(key==a[mid]) {
			return mid;
		} else if(key<a[mid]) {
			return RBinSearch(a,l,mid-1,key);
		} else {
			return RBinSearch(a,mid+1,h,key);
		}
	}

	return -1;
}

int Get(struct Array arr,int index ) {
	if(index>0 && index<arr.length) {
		return arr.A[index];
	}
	return -1;
}

void Set(struct Array *arr, int index, int x) {
	if(index>=0 && index<arr->length){
		arr->A[index]=x;
	}
}

int Max(struct Array arr) {
	int max=arr.A[0];
	int i;
	for(i=1;i<arr.length;i++) {
		if(arr.A[i]>max)
			max=arr.A[i];
	}
	return max;
}

int Min(struct Array arr) {
	int min=arr.A[0];
	int i;
	for(i=1;i<arr.length;i++) {
		if(arr.A[i]<min)
			min=arr.A[i];
	}
	return min;
}

int Sum(struct Array arr) {
	int s=0;
	int i;
	for(i=0;i<arr.length;i++) {
		s+=arr.A[i];
	}
	return s;
}

float Avg(struct Array arr) {
	return (float)Sum(arr)/arr.length;
}

int main() {
	// Calculate the time taken by fun()
	clock_t t;
	t = clock();

	struct Array arr = { { 2, 3, 4, 5, 6 }, 10, 5 };
//  2. Append Operation
	Append(&arr, 10);
//	3. Insert Operation
	Insert(&arr, 4,100);

//	4. Delete Operation
	printf("%d\n",Delete(&arr,4));

//	5. Linear Search Operation
	printf("%d\n",LinearSearch(&arr,5));

//	6. Binary Search Operation
	printf("%d\n", BinarySearch(arr, 5));

//	7. Recursive Binary Search Operation
	printf("%d\n", RBinSearch(arr.A,0,arr.length,5));


//	8. Get function
	printf("%d\n",Get(arr,9));

//	9. Set function
	Set(&arr,0,15);

//	10. Find Max Element of Array
	printf("%d\n",Max(arr));

//	11. Find Min Element of Array
	printf("%d\n",Min(arr));

//	12. Find Sum of all Element of Array
	printf("%d\n",Sum(arr));

//	13. Find Average of all Element of Array
	printf("%0.3f\n",Avg(arr));

// 1. Display Operation
	Display(arr);

	t = clock() - t;
	double time_taken = ((double) t) / CLOCKS_PER_SEC; // in seconds

	printf("\n\nTime Taken to Execute in seconds  %f to execute \n",
			time_taken);
	return 0;
}



```
