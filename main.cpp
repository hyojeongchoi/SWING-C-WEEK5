#include <iostream>
#include "Class.h"
using namespace std;

int main()
{
	PhoneBook h;
	int k;

	h.addPhone();
	for (;;)
	{
		cout << "1. �ֽ� ��� ��ȭ��ȣ ��ȸ" << endl;
		cout << "2. �ֽ� ��� ��ȭ��ȣ ����" << endl;
		cout << "3. ���� " << endl;
		cout << ">> ";
		cin >> k;

		if (k == 1)
		{
			h.getName();
			h.getPnum();
			cout << endl;
		}
		else if (k == 2)
		{
			h.editPhone();
			cout << endl;
		}
		else if (k == 3)
			break;
	}
}