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
		cout << "1. 최신 등록 전화번호 조회" << endl;
		cout << "2. 최신 등록 전화번호 수정" << endl;
		cout << "3. 종료 " << endl;
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