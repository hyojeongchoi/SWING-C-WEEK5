#ifndef Class
#define Class
#include <iostream>
using namespace std;

class PhoneBook {
private:
	string name;
	string phonenumber;

public:
	void addPhone();
	void editPhone();
	void getPnum();
	void getName();
};
#endif