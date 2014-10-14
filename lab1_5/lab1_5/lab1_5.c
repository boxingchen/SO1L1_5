/* File: lab1_5.c */
/* Alexander Ustyuzhanin, IE SO1 group 1, WS14, 06.10.2014 */

#define _CRT_SECURE_NO_WARNINGS					// supress warnings about unsafe scanf (C4996)
#include <stdio.h>								// for the IO functions
#include <stdlib.h>								// for system("pause")

int main()
{
	long int number = 0;						// a variable to store the number from the user
	short int sum = 0;							// a variable to store the sum of all digits of the number

	printf("Enter the number: ");				// ask for user input
	scanf("%ld",&number);						// write the user input into the number variable
	if(!(number>0))								// check if the given number is positive (according to the lab assignment)
	{
		printf("Sorry, the program only works with positive numbers!\n");
		system("pause");
		return 0;								// if not - exit the program
	}
	while(number)								// cycle will run while the number is not 0 (while it makes sense to keep dividing by 10)
	{
		sum += number % 10;						// divide the number by 10, get the remainder. This is the last digit of the number. Add it to the sum of all digits.
		number = number/10;						// divide the number by 10, get the result. Write it to the number variable. Means shifting one digit to the left
	}
	printf("Sum of all digits: %hd\n", sum);	// display the result
	system("pause");							// let the user see the result
	return 0;									// the return value for int main()
}