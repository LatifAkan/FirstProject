#include <iostream>
#include "Options.h"
#include "Calculator.h"

Option::Option()
{
	std::cout << "\t\tWelcome to my calculator!\n"
		<< "=========================================================\n"
		<< std::endl;
}

Option::~Option()
{
}

void Option::userSetChoice()
{
	int UserChoice = 0;
	std::cout << "Please choose one of the following Options to continue:\n"
		<< "\n1. Math Calculator\n"
		<< "2. Currency Converter\n"
		<< "3. Bisecture Procedure\n"
		<< "4. Sort Algorithm\n" << std::endl;
	std::cout << "Enter the number to continue: ";
	std::cin >> UserChoice;
	setOption(UserChoice);
}

const void Option::checkUserChoice()
{
	if (selectOption == 1)
	{
		MathCalculator calculator;
		calculator.userSetNumbers();
		calculator.userSetOperation();
		calculator.printResult();
	}
}