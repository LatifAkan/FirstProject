#include <iostream>
#include "Calculator.h"

MathCalculator::MathCalculator()
{
	std::cout << "\n\tYou selected the Math Calculator\n"
		<< "=========================================================\n"
		<< std::endl;
}

MathCalculator::~MathCalculator()
{
	m_firstNum = 0.0;
	m_secondNum = 0.0;
	selectOperation = 0;
}

void MathCalculator::setNumber(double num1, double num2)
{
	m_firstNum = num1;
	m_secondNum = num2;
}

void MathCalculator::userSetNumbers()
{
	double number1 = 0.0, number2 = 0.0;
	std::cout << "Enter your first number: ";
	std::cin >> number1;
	std::cout << "Enter your second number: ";
	std::cin >> number2;
	setNumber(number1, number2);
}

void MathCalculator::userSetOperation()
{
	int userMathOperation = 0;
	std::cout << "\nChoose the operation for the calculation:\n"
		<< "\n1. Add\n"
		<< "2. Subtract\n"
		<< "3. Multiply\n"
		<< "4. Divide\n"
		<< "5. Change numbers\n"
		<< "9. To Quit\n";

	std::cout << "Select a number for the operation: ";
	std::cin >> userMathOperation;
	setOperation(userMathOperation);
}

void MathCalculator::printResult()
{
	if (selectOperation >= 0 || selectOperation <= 5)
	{
		if (selectOperation == 0)
		{
			std::cout << "\nInvalid input! - Please try again.\n";
			userSetOperation();
		}

		else if (selectOperation == 1)
			std::cout << "Result: " << m_firstNum << " " << "+" << " " << m_secondNum << " = " << m_firstNum + m_secondNum << std::endl;

		else if (selectOperation == 2)
			std::cout << "Result: " << m_firstNum << " " << "-" << " " << m_secondNum << " = " << m_firstNum - m_secondNum << std::endl;

		else if (selectOperation == 3)
			std::cout << "Result: " << m_firstNum << " " << "*" << " " << m_secondNum << " = " << m_firstNum * m_secondNum << std::endl;

		else if (selectOperation == 4)

			if (m_secondNum == 0)
			{
				std::cout << "\nDividing by 0 is forbidden, try again!\n" << std::endl;
				userSetNumbers();
				printResult();
			}
			else
				std::cout << "Result: " << m_firstNum << " " << "/" << " " << m_secondNum << " = " << m_firstNum / m_secondNum << std::endl;

		else if (selectOperation == 5)
		{
			userSetNumbers();
			userSetOperation();
			printResult();
		}

	}

}