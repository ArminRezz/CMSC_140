//This program is used as a review for the final exam.

//--------------------------------------------------------------------------------------------------------
//NOTE: this does not mean that the questions on here will be in the exam, nor does it mean that questions
//      absent will not be on the exam. 
//--------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void refVarFunc(int &, int);

int main()
{
	/*
	---------------------------------------------------------------------------------------
	PROBLEM #1

	1. What does it mean to increment something? What operator is used in C++ to do this?

    It means to add a value to a variable, ++ or +=  

	2. What does it mean to decrement something? What operator is used in C++ to do this?

	3. What is the difference in using a increment/decrement operator in postfix or prefix?
	---------------------------------------------------------------------------------------
	*/


	/*
	---------------------------------------------------------------------------------------------------------------
	PROBLEM #2

	1. What does it mean to find the modulus of something? What operator is used in C++ to do this?
	2. What operator is used in C++ to represent division?

	3. What will be the data type of the result of division between two integers?
	4. What will be the result of the expression 7 / 2 ? What will be different compared to the expression 7.0 / 2?
	---------------------------------------------------------------------------------------------------------------
	*/


	/*
	-------------------------------------------------------------------------------
	PROBLEM #3

	What will the variables 'someNum', 'anotherNum', 'lastNum', and 'aBool' contain 
	after the execution of the following code?
	-------------------------------------------------------------------------------
	*/

	int someNum = 2, anotherNum = 3, lastNum = 1;
	bool aBool;

	aBool = !(++someNum > (--anotherNum * lastNum++));

	/*
	------------------------------------------------------------------------------------------------
	PROBLEM #4

	1. Name the three different types of loops.
	2. For each type of loop, state if the loop is pretest or posttest, and explain what that means.
	------------------------------------------------------------------------------------------------
	*/


	/*
	----------------------------------------------------------------------------------
	PROBLEM #5

	What are the three parts of a for loop definition called? What do each of them do?
	----------------------------------------------------------------------------------
	*/


	/*
	-------------------------------------------------------------------------------
	PROBLEM #6

	What will be displayed on the screen after the execution of the following code?
	-------------------------------------------------------------------------------
	*/

	int counter = 0;
	bool moreThan20 = false;

	while (!moreThan20)
	{
		if (counter != 6)
		{
			cout << counter << endl;
		}

		if (counter == 14)
		{
			cout << "...Getting close..." << endl;
		}
		else if (counter == 18)
		{
			cout << "...Almost there..." << endl;
		}

		if (counter > 20)
		{
			cout << "...It's over twenty..." << endl;
			moreThan20 = true;
		}

		counter += 2;
	}


	/*
	--------------------------------------------------------------------------
	PROBLEM #7

	What do the following statements evaluate to, given the defined variables?
	--------------------------------------------------------------------------
	*/

	string name1 = "John", name2 = "Jane", name3 = "Devin", name4 = "John ";

	name1 < name2;

	name2 > "Janet";

	name3 != "devin";

	name3 < "DEVIN";

	name1 == name4;


	/*
	-----------------------------------------------------------------------------------------------------
	PROBLEM #8

	Create the code below to open a file named 'testing123.txt' for writing.
	Save the values 1, 2, 20, and 37 into the file. Each value should be on its own line inside the file.

	Then close the file.
	-----------------------------------------------------------------------------------------------------
	*/


	/*
	-------------------------------------------------------------------------------------------------------------
	PROBLEM #9

	1. What is a reference variable? When used as function parameters, how do they differ from normal parameters?

	2. What must you use in the variable name when you create a reference variable?
	-------------------------------------------------------------------------------------------------------------
	*/


	/*
	---------------------------------------------------------------------------------------------------------
	PROBLEM #10

	Given the function definition below, what will the value of 'x' and 'y' be after the code executes below?
	
	void refVarFunc(int &num1, int num2)
	{
		for (int i = 0; i < 5; i++)
		{
			num1++;
			num2 += 2;
		}
	}

	---------------------------------------------------------------------------------------------------------
	*/

	int x = 10, y = 2;

	refVarFunc(x, y);

	return 0;
}

/*----------------------------------------
 Here are the functions for this worksheet
----------------------------------------*/

void refVarFunc(int &num1, int num2)
{
	for (int i = 0; i < 5; i++)
	{
		num1++;
		num2 += 2;
	}
}