#include <iostream>
#include "Class.h"
using namespace std;


void PhoneBook::addPhone()
{
	cout << "------------ swing ��ȭ��ȣ�� ------------" << endl;
	cout << "�̸��� �Է����ּ��� >> ";
	cin >> name;
	cout << "��ȭ��ȣ�� �Է����ּ��� >> ";
	cin >> phonenumber;
	cout << endl;

}

void PhoneBook::editPhone()
{
	string inputname;
	string newPnumber;

	cout << "�̸��� �Է����ּ��� >> ";
	cin >> inputname;

	for (;;)
	{
		if (name != inputname)
		{
			cout << "����ó�� �������� �ʽ��ϴ�. �ٽ� �Է����ּ��� >>";
			cin >> inputname;
		}
		else
		{
			name = inputname;
			break;
		}
	}
	cout << "������ ��ȭ��ȣ�� �Է����ּ���>>";
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