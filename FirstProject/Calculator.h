#pragma once

class MathCalculator
{
private:
	double m_firstNum = 0.0, m_secondNum = 0.0;
	int selectOperation = 0;
public:

	MathCalculator();

	~MathCalculator();

	// Setter & Getter for operation
	int getOperation(int selectOperation) const { return selectOperation; }
	void setOperation(int operation) { selectOperation = operation; }

	// Setter & Getter for numbers
	double getFirstNumber(double m_firstNum) const { return m_firstNum; }
	double getSecondNumber(double m_secondNum) const { return m_secondNum; }

	void setNumber(double num1, double num2);

	void userSetNumbers();

	void userSetOperation();

	void printResult();
};