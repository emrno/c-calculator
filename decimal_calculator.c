/*

*** Simple Calculator ( decimal numbers only ) ***
Created by: @emrno
Time: 6:06 (UTC+8)

*/
#include <stdio.h> // same as before ..
#include <stdlib.h> // same as before ..

void clear() {
	system("clear");
}

int main() {
	clear();
	int choice;
	float d1; // decimal 1
	float d2; // decimal 2
	printf("Calculator ( decimal numbers only )\n\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n\nSelect your choice: ");
	scanf("%d", &choice);
	if (choice == 1) {
		clear();
		printf("Enter your first decimal number: ");
		scanf("%f", &d1);
		printf("Enter your second decimal number: ");
		scanf("%f", &d2);
		printf("Final answer: %f\n", d1 + d2);
	} else if (choice == 2) {
		clear();
		printf("Enter your first decimal number: ");
		scanf("%f", &d1);
		printf("Enter your second decimal number: ");
		scanf("%f", &d2);
		printf("Final answer: %f\n", d1 - d2);
	} else if (choice == 3) {
		clear();
		printf("Enter your first decimal number: ");
		scanf("%f", &d1);
		printf("Enter your second decimal number: ");
		scanf("%f", &d2);
		printf("Final answer: %f\n", d1 * d2);
	} else if (choice == 4) {
		clear();
		printf("Enter your first decimal number: ");
		scanf("%f", &d1);
		printf("Enter your second decimal number: ");
		scanf("%f", &d2);
		if (d2 == 0) {
			printf("Cannot divide to zero!\n");
			return 0;
		}
		printf("Final answer: %f\n", d1 / d2);
	}
}
