#include <iostream>
using namespace std;

int main() {
	int money;
	int candy_price;

	cout << "���� ������ �ִ� �� : ";
	cin >> money;
	cout << "ĵ���� ���� : ";
	cin >> candy_price;

	// �ִ������� ���Ű� ������ ���� �� ���
	int n_candies = money / candy_price;
	cout << "�ִ�� �� �� �ִ� ĵ���� ���� = " << n_candies << endl;

	// ���� ���� �� �Ž����� ���
	int change = money % candy_price;
	cout << "ĵ�� ���� �� ���� �� = " << change << endl;
	 
	return 0;
}