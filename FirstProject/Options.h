#pragma once

class Option
{
private:
	int selectOption = 0;
public:

	Option();
	~Option();

	int getOption(int selectOption) const { return selectOption; }

	void setOption(int auswahl) { selectOption = auswahl; }

	void userSetChoice();

	const void checkUserChoice();

};