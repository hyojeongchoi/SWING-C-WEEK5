#include <iostream>
#include "Class.h"
using namespace std;


void PhoneBook::addPhone()
{
	cout << "------------ swing 전화번호부 ------------" << endl;
	cout << "이름을 입력해주세요 >> ";
	cin >> name;
	cout << "전화번호를 입력해주세요 >> ";
	cin >> phonenumber;
	cout << endl;

}

void PhoneBook::editPhone()
{
	string inputname;
	string newPnumber;

	cout << "이름을 입력해주세요 >> ";
	cin >> inputname;

	for (;;)
	{
		if (name != inputname)
		{
			cout << "연락처가 존재하지 않습니다. 다시 입력해주세요 >>";
			cin >> inputname;
		}
		else
		{
			name = inputname;
			break;
		}
	}
	cout << "변경할 전화번호를 입력해주세요>>";
	cin >> newPnumber;
	phonenumber = newPnumber;
	cout << '\n';
}

void PhoneBook::getPnum()
{
	cout << phonenumber << endl << endl;
}
void PhoneBook::getName()
{
	cout << name << "::";
}