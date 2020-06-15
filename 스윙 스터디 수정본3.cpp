#include<iostream>
#include<string>

using namespace std;

class VendingMachine
{
private:
	string name; // ���� �̸�
	int price; // ����
	int total = 0; // ���� �ջ� ��

public:
	VendingMachine() {}; // ������
	void purchase(double v1); // �ϸ� �ɵ� / �� �ݾ�, ����, �Ž�����
	void menu();// �޴��� �κ�( ���� ���Ǳ� �κ�)
	void upgrademenu();
	string getName();
	double getPrice();
	double getTotal();
	void setName(string n); // ���� �̸� ����
	void setPrice(int p); // ���� ���ݤ� ����
	void setTotal(int t); // ���� ��Ż ����
};

void VendingMachine::menu()
{
	cout << "==========SWING ���Ǳ�==========" << endl;
	cout << "1. ��ī�ݶ� : 1200��" << endl;
	cout << "2. ĥ�� ���̴� : 1400��" << endl;
	cout << "3. �̿��� ȭ�̹�: 1800��" << endl;
	cout << "4. �غ���" << endl;
	cout << "5. ��� " << endl;
}
void VendingMachine::upgrademenu()
{
	cout << "==========SWING ���Ǳ�==========" << endl;
	cout << "1. ��ī�ݶ� : 1200��" << endl;
	cout << "2. ĥ�� ���̴� : 1400��" << endl;
	cout << "3. �̿��� ȭ�̹�: 1800��" << endl;
	cout << "4." << name << ": " << price << "��" << endl;
	cout << "5. ��� " << endl;
}


void VendingMachine::purchase(double v1)
{
	int gap;
	cout << endl << " �� �ݾ� : " << v1 << endl;
	cout << "���� �Է��ϼ���: ";
	cin >> gap;
	int change = gap - v1;

	for (;;)
	{
		if (gap > v1)
		{
			if (change % 100 == 0)
			{
				cout << "�Ž��� ���Դϴ�." << endl;
				cout << "500��: " << change / 500 << "��" << endl;
				cout << "100��: " << change % 500 / 100 << "��" << endl;
				break;
			}
			else
			{
				cout << "�Ž��� ���� 500���� 100���� �����մϴ�." << endl;
				cout << "500��: " << change / 500 << "��" << endl;
				cout << "100��: " << change % 500 / 100 << "��" << endl;
				cout << "�ȳ���������.";
				break;
			}
		}
		else if (gap == v1)
		{
			cout << "�Ž������� �����ϴ�. �ȳ���������" << endl;
			break;
		}
		else
		{
			cout << "�ݾ��� �����մϴ�. �ٽ� �־��ּ���. ";
			cin >> gap;
		}
	}
}
string VendingMachine::getName()
{
	return name;
}
void VendingMachine::setName(string n)
{
	name = n;
}
double VendingMachine::getPrice()
{
	return price;
}
void VendingMachine::setPrice(int p)
{
	price = p;
}
double VendingMachine::getTotal()
{
	return total;
}
void VendingMachine::setTotal(int t)
{
	total += t;
}


int main()
{
	VendingMachine machine1;
	VendingMachine* p = &machine1;
	string inputname;
	double inputprice;
	int number;
	int hap;

	machine1.menu();
	cout << "�߰��� ���� �̸��� �Է����ּ��� : ";
	cin >> inputname;
	machine1.setName(inputname);

	cout << "�Ǹ��� ������ �Է��ϼ��� : ";
	cin >> inputprice;
	machine1.setPrice(inputprice);
	cout << endl;

	do
	{
		machine1.upgrademenu();
		cout << "��ȣ�� �������ּ��� : ";
		cin >> number;

		switch (number)
		{
		case 1:
			cout << "������ ������ �Է����ּ��� :";
			cin >> hap;
			cout << endl;
			machine1.setTotal(hap * 1200);
			break;
		case 2:
			cout << "������ ������ �Է����ּ��� :";
			cin >> hap;
			cout << endl;
			machine1.setTotal(hap * 1400);
			break;
		case 3:
			cout << "������ ������ �Է����ּ��� :";
			cin >> hap;
			cout << endl;
			machine1.setTotal(hap * 1800);
			break;
		case 4:
			cout << "������ ������ �Է����ּ��� :";
			cin >> hap;
			cout << endl;
			machine1.setTotal(hap * machine1.getPrice());
			break;
		}
	} while (number != 5);// while���� �� �� �ִ� �� ����
	cout << endl;
	cout << "��� ���Դϴ�. ��ٷ��ּ��� .  .  .  ." << endl;

	machine1.purchase(machine1.getTotal());
}