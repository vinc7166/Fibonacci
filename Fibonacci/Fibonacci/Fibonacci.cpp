/*************************************************************************************
Fibonacci Functions: allows users to find numbers
in either a recursive or iterative function.
*************************************************************************************/
#include <iostream>
using namespace std;

int fiboIterative(int number)	/*************Function fiboIterative******************/
{								//Description: This function imports a number and 
	if (number <= 0)			//checks it.  If the number is or is less than 0, it returns 0. 
	{							//If the number is 1, it returns 1.  Otherwise 
		return 0;				//the function creates 3 variables(a set to 0, 
	}							//and b and c set to 1 each) and initiates a for loop.  
	if (number == 1)			//Then until the loop reaches 2 less than the number
	{							//(to account for the fact that the loop starts 2
		return 1;				//rounds early) it sets a to b, b to c, and c to the
	}							//sum of a and b.  Then it ends with the function
	else						//returning the final value of c.
	{							/*****************************************************/
		int a = 0;
		int b = 1;
		int c = 1;
		for (int i = 0; i < number - 2; i++)
		{
			a = b;
			b = c;
			c = a + b;
		}
		return c;
	}
}

int fiboRecursive(int number)	/***************Function fiboRecursive***************/
{								//Description: This function imports a number and 
	if (number <= 0)			//checks it.  If the number is or is less than 0, it returns 0. 
	{							//If the number is 1, it returns 1.  Otherwise
		return 0;				//the function recursively calls the function twice,
	}							//once until the function reaches 1 less than the 
	if (number == 1)			//number and the other until it reaches 2 less than 
	{							//the number, and adds together the sum of the two.
		return 1;				/****************************************************/
	}
	else
	{
		return fiboRecursive(number - 1) + fiboRecursive(number - 2);
	}
}

void main()
{
	int number;//Initializes a number variable for the functions
	int choice;//Initializes a choice variable for the switch case
	while (1)
	{
		cout << "How would you like to find a ";				/********************************/
		cout << "number from the Fibonacci sequence?" << endl;	//In an infinite loop, the user
		cout << "1) In an iterative function" << endl;			//is prompted with choices on how
		cout << "2) In a recursive function" << endl;			//to find a fibonacci number via
		cout << "3) Exit" << endl;								//inputed commands through the
		cout << "-> ";											//"choice" variable.
		cin >> choice;											/********************************/
		switch (choice)
		{
		case 1://Choice 1: Iterative Fibonacci
			cout << "What number? -> ";//Prompts the user for a number
			cin >> number;//User inputs a number
			cout << fiboIterative(number) << endl;
			//^Calls "fiboIterative" and outputs
			//^the result to the screen
			break;
		case 2://Choice 2: Recursive Fibonacci
			cout << "What number? -> ";//Prompts the user for a number
			cin >> number;//User inputs a number
			cout << fiboRecursive(number) << endl;
			//^Calls "fiboRecursive" and outputs
			//^the result to the screen
			break;
		case 3://Choice 3: Exit
			exit(1);//Closes the program.
			break;
		default://Should a choice not specified be called,
				//an error message pops up and nothing happens
			cout << "INVALID" << endl;
			break;
		}
	}
}