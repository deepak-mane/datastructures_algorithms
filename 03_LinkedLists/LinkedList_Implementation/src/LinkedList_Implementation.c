/*
 ============================================================================
 Name        : LinkedList_Implementation.c
 Author      : Deepak Mane
 Version     :
 Copyright   : MIT
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "ume.h"


int input();
void output(float);

// Driver Function
int main() {
	float result;
	int choice, num;


	printf("        MENU DRIVER PROGRAM !!!\n");
	printf("------------------------------------------\n\n");
	do {
		printf("Press 1 to Create Linked List & Display\n");
		printf("Press 2 to Create Linked List & Use Recursion to Display\n");
		printf("Press 3 to calculate area of sphere\n");
		printf("Press 9 to Exit\n");
		printf("Enter your choice:\n");
		choice = input();

		switch (choice) {
		case 1: {
			create_sll();
			printf("\nThe LinkedList created is as Below :\n");
			printf("HEAD");
			display_sll(first);
			printf("\n------------------------------------------\n\n");
			printf("\n\nWhat's Next you want to do ...\n");
			break;
		}
		case 2: {
			create_sll();
			printf("\nThe LinkedList created is as Below :\n");
			printf("HEAD");
			recursive_display_sll(first);
			printf("\n------------------------------------------\n\n");
			printf("\n\nWhat's Next you want to do ...\n");
			break;
		}
		case 3: {
			printf("Enter radius:\n");
			num = input();
			result = 4 * (3.14 * num * num);
			printf("Area of sphere=");
			output(result);
			printf("\n\n");
			break;
		}
		case 9: {
			printf("Bye-Bye:\n");
			break;
		}
		default:
			printf("wrong Input\n");
		}
	} while (choice != 9);

	return 0;
}

int input() {
	int number;
	scanf("%d", &number);
	return (number);
}

void output(float number) {
	printf("%f", number);
}
// END OF PROGRAM
