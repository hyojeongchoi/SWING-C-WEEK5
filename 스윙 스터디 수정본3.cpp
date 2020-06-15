#include<iostream>
#include<string>

using namespace std;

class VendingMachine
{
private:
	string name; // 음료 이름
	int price; // 가격
	int total = 0; // 음료 합산 값

public:
	VendingMachine() {}; // 생성자
	void purchase(double v1); // 하면 될듯 / 총 금액, 지폐, 거스름돈
	void menu();// 메뉴판 부분( 스윙 자판기 부분)
	void upgrademenu();
	string getName();
	double getPrice();
	double getTotal();
	void setName(string n); // 음료 이름 수정
	void setPrice(int p); // 음료 가격ㄱ 수정
	void setTotal(int t); // 총합 토탈 수정
};

void VendingMachine::menu()
{
	cout << "==========SWING 자판기==========" << endl;
	cout << "1. 코카콜라 : 1200원" << endl;
	cout << "2. 칠성 사이다 : 1400원" << endl;
	cout << "3. 미에로 화이바: 1800원" << endl;
	cout << "4. 준비중" << endl;
	cout << "5. 계산 " << endl;
}
void VendingMachine::upgrademenu()
{
	cout << "==========SWING 자판기==========" << endl;
	cout << "1. 코카콜라 : 1200원" << endl;
	cout << "2. 칠성 사이다 : 1400원" << endl;
	cout << "3. 미에로 화이바: 1800원" << endl;
	cout << "4." << name << ": " << price << "원" << endl;
	cout << "5. 계산 " << endl;
}


void VendingMachine::purchase(double v1)
{
	int gap;
	cout << endl << " 총 금액 : " << v1 << endl;
	cout << "지폐를 입력하세요: ";
	cin >> gap;
	int change = gap - v1;

	for (;;)
	{
		if (gap > v1)
		{
			if (change % 100 == 0)
			{
				cout << "거스름 돈입니다." << endl;
				cout << "500원: " << change / 500 << "개" << endl;
				cout << "100원: " << change % 500 / 100 << "개" << endl;
				break;
			}
			else
			{
				cout << "거스름 돈은 500원과 100원만 가능합니다." << endl;
				cout << "500원: " << change / 500 << "개" << endl;
				cout << "100원: " << change % 500 / 100 << "개" << endl;
				cout << "안녕히가세요.";
				break;
			}
		}
		else if (gap == v1)
		{
			cout << "거스름돈이 없습니다. 안녕히가세요" << endl;
			break;
		}
		else
		{
			cout << "금액이 부족합니다. 다시 넣어주세요. ";
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
	cout << "추가할 음료 이름을 입력해주세요 : ";
	cin >> inputname;
	machine1.setName(inputname);

	cout << "판매할 가격을 입력하세요 : ";
	cin >> inputprice;
	machine1.setPrice(inputprice);
	cout << endl;

	do
	{
		machine1.upgrademenu();
		cout << "번호를 선택해주세요 : ";
		cin >> number;

		switch (number)
		{
		case 1:
			cout << "구매할 수량을 입력해주세요 :";
			cin >> hap;
			cout << endl;
			machine1.setTotal(hap * 1200);
			break;
		case 2:
			cout << "구매할 수량을 입력해주세요 :";
			cin >> hap;
			cout << endl;
			machine1.setTotal(hap * 1400);
			break;
		case 3:
			cout << "구매할 수량을 입력해주세요 :";
			cin >> hap;
			cout << endl;
			machine1.setTotal(hap * 1800);
			break;
		case 4:
			cout << "구매할 수량을 입력해주세요 :";
			cin >> hap;
			cout << endl;
			machine1.setTotal(hap * machine1.getPrice());
			break;
		}
	} while (number != 5);// while문만 쓸 수 있는 거 같음
	cout << endl;
	cout << "계산 중입니다. 기다려주세요 .  .  .  ." << endl;

	machine1.purchase(machine1.getTotal());
}