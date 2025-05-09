/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Carolina Duarte
 */

/*
Write a program that performs as a very simple calculator. Your calculator should be able to handle the four basic math operations — add, subtract, multiply, and divide — on two input values. Your program should prompt the user to enter three arguments: two double values and a character to represent an operation. If the entry arguments are 35.6, 24.1, and '+', the program output should be The sum of 35.6 and 24.1 is 59.7. In Chapter 6 we look at a much more sophisticated simple calculator.

Modify the “mini calculator” from exercise 5 to accept (just) single-digit numbers written as either digits or spelled out.
*/

//Header file.
#include "std_lib_facilities.h" 

int ParseInput(string s);
int GetDigit(string s);

int main()
{
	double temp;
	int digit1, digit2;
	char operation;

	string val1, val2;
	
	cout << "Please enter only single digits from 0-9 or enter their value spelled-out (Example: 1 2 + OR one two +): ";  
    cin >> val1 >> val2 >> operation;   
    
	digit1 = ParseInput(val1);
	digit2 = ParseInput(val2);

    //Switch function to determine which operation will be performed by user.
	switch (operation) 
	{
		case '+':
			cout << "The sum of " << digit1 << " and " << digit2 << " is " << (digit1 + digit2) << "." << "\n";
			break;
			
		case '-':
			cout << "The difference of " << digit1 << " and " << digit2 << " is " << (digit1 - digit2) << "." << "\n";
			break;
			
		case '*':
			cout << "The product of " << digit1 << " and " << digit2 << " is " << (digit1 * digit2) << "." << "\n";
			break;
			
		case '/':
			if (digit2 == 0) {
				cout << "Error. Cannot be divided by 0.";
				break;
			}
				
			cout << "The quotient of " << digit1 << " and " << digit2 << " is " << (digit1 / digit2) << "." << "\n";
			break;
			
		default:
			cout << "Invalid operation input.";
			break;
	}	
	return 0; 		
}

//Function to recognize spelled-out input:    
int ParseInput(string s)
{
	int digit;
	
	vector<string> sdigit = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

	digit = GetDigit(s);
	
	return digit;
}

//Function to get spelled-out input and transform it into int digit value:
int GetDigit(string s)
{
	int digit;
	if (s == "zero") {
		digit = 0;
	}
	else if (s == "one") {
		digit = 1;
	}
	else if (s == "two") {
		digit = 2;
	}
	else if (s == "three") {
		digit = 3;
	}
	else if (s == "four") {
		digit = 4;
	}
	else if (s == "five") {
		digit = 5;
	}
	else if (s == "six") {
		digit = 6;
	}
	else if (s == "seven") {
		digit = 7;
	}
	else if (s == "eight") {
		digit = 8;
	}
	else if (s == "nine") {
		digit = 9;
	}
	return digit;
}

using namespace std;

int main() {
    int num1, num2, sum;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Add the numbers
    sum = num1 + num2;

    // Display the result
    cout << "Sum = " << sum << endl;

    return 0;
}

    
