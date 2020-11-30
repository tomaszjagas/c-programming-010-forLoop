/*************************************
* Description: Some play with for loop
**************************************/

#include <stdio.h>

int main() {
	unsigned long long sum = 0LL; //stores the sum of the integers
	unsigned int count = 0; //the number of integers to be summed

	//read the number of integers to be summed
	printf("\nEnter the number of integers You want to sum: ");
	scanf_s("%u", &count);

	//sum integers from 1 to count
	for (unsigned int i = 1; i <= count; ++i) {
		printf("inside loop\n");
		sum += i;
	}

	printf("\nTotal of the first %u numbers is %llu\n", count, sum);

	return 0;
}