#include "Header.h"

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	unsigned short weight, age;
	string strHeight, strWeight;
	string name;
	double salary;

	ReadPersonData(name, age, salary);
	strGlobalSalary = to_string(salary);
	WritePersonData(name, strHeight, strWeight, &age);
	ReadPersonData(name, age, height, weight);
	WritePersonData(name, to_string(height), to_string(weight), &age);

	return 0;
}