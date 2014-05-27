#include <iostream>
#include <string>
#include "Faculty.h"
#include "Student.h"
using namespace std;

int main()
{
	Student Mary;
	Faculty Beck;

	Mary.name = "Mary";
	Mary.id = 12345;

	cout << Mary.name << endl;
}