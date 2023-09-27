#include "Header.h"

void ReadPersonData(string& _name, unsigned short& _age, double& _salary)
{
	cout << endl << "-" << endl;
	cout << " #1" << endl;
	cout << "Имя: ";
	_name = ReadPersonName();
	cout << "Возраст: ";
	_age = ReadPersonAge();
	cout << "Зарплата: ";
	ReadPersonSalary(&_salary);
	cout << endl;
	cout << endl << "-" << endl;
}

void ReadPersonData(string& _name, unsigned short& _age, unsigned short& height, unsigned short& _weight)
{
	cout << endl << "-" << endl;
	cout << " #2" << endl;
	cout << "Имя: ";
	_name = ReadPersonName();
	cout << "Возраст: ";
	_age = ReadPersonAge();
	cout << "Рост: ";
	ReadPersonHeight();
	cout << "Вес: ";
	ReadPersonWeight(_weight);
	cout << endl;
	cout << endl << "-" << endl;
}