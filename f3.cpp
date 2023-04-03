/**
 * File:    f3.Cpp
 *
 * Programmer:		Patel Bhumitkumar Kalpeshbhai
 * Assignment : Focused Assignment 3
 * First Version : 2023-01-24
 * Discription:
 *
 *   This file contains code which checks whether the
 *   number is even or odd.
 *
 */


#pragma warning(disable: 4996) // required by Visual Studio

#include<stdio.h>

int getNum(void); // This prototype indicates that the getNum function takes an integer parameter and returns void. 
int isOdd(int num);// This prototype indicates that the isOdd function takes an integer parameter.


int main() {
	printf("Enter Non-Negative Number ");
	int num = getNum(); //getNum() is used to get input from used and stored in num

	int result = isOdd(num); //result of isOdd is stored in result

	if (result == 0) // is result returns 0 then number is even else it is odd
	{
		printf("%d is even\n", num);
	}
	else
	{
		printf("%d is odd\n", num);
	}

	return 0;
}


/*
* Function: isOdd(int num)
* Description: This function will return the value 0 or 1
* if the num perameter is odd or even if the num is odd 
* then it will return 1 and if num is even then it will
* return 0
* Parameters: int num: check if it is even or odd
* Returns: 0 if num is even, 1 if num is odd
*/
int isOdd(int num) {
	if (num % 2 == 0)
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}

int getNum(void)
{
	/* the array is 121 bytes in size; we'll see in a later lecture how we can
	improve this code */
	char record[121] = { 0 }; /* record stores the string */
	int number = 0;
	/* NOTE to student: brace this function consistent with your others */
	/* use fgets() to get a string from the keyboard */
	fgets(record, 121, stdin);
	/* extract the number from the string; sscanf() returns a number
	* corresponding with the number of items it found in the string */
	if (sscanf(record, "%d", &number) != 1)
	{
		/* if the user did not enter a number recognizable by
		* the system, set number to -1 */
		number = -1;
	}
	return number;
}

