/* simple calculator in C

created by: @emrno
time: 5:54 PM (utc+8)

*/

#include <stdio.h> // for printf, scanf, etc.
#include <stdlib.h> // for system

void clear() {
	system("clear"); // whenever you are on windows, change "clear" to "cls"
}

int main() {
	clear();
	int choice;
	int num1;
	int num2;
	printf("Calculator (Whole numbers only)\n\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n\nSelect your choice: ");
	scanf("%d", &choice);
	if (choice == 1) {
		clear();
		printf("Enter your first number: ");
		scanf("%d", &num1);
		printf("Enter your second number: ");
		scanf("%d", &num2);
		printf("Final answer: %d\n", num1 + num2);
	} else if (choice == 2) {
		clear();
		printf("Enter your first number: ");
		scanf("%d", &num1);
		printf("Enter your second number: ");
		scanf("%d", &num2);
		printf("Final answer: %d\n", num1 - num2);
	} else if (choice == 3) {
		clear();
		printf("Enter your first number: ");
		scanf("%d", &num1);
		printf("Enter your second number: ");
		scanf("%d", &num2);
		printf("Final answer: %d\n", num1 * num2);
	} else if (choice == 4) {
		clear();
		printf("Enter your first number: ");
		scanf("%d", &num1);
		printf("Enter your second number: ");
		scanf("%d", &num2);
		if (num2 == 0) {
			printf("Cannot divide to zero!\n");
		}
		printf("Final answer: %d\n", num1 / num2);
	}
}
