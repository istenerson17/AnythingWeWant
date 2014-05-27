#include <string>
#include"Faculty.h"
using namespace std;

class Student
{
public:
	int id;
	string name;
	Faculty advisor;

	void study();
	void dohomework();
	bool registerclass(string name);
	bool changeadvisor(string name);
};