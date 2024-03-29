#include <iostream>
#include "Options.h"
#include "Calculator.h"

int main()
{

	Option user;
	user.userSetChoice();
	user.checkUserChoice();

	system("PAUSE");
	return 0;
}