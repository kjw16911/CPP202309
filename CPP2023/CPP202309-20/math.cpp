#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int i = 0;
	int ans;
	cout << "��� ������ �ڵ����� �����մϴ�." << endl;

	while (true) {
		int firstNum = rand() % 100;
		int secondNum = rand() % 100;
		
		// firstNum�� secondNum�� �������� ���
		
		//Hint : ���� ��� > �� �Է� �ޱ� > ��

		cout << firstNum << "+" << secondNum << "=";
		cin >> ans;
		if (firstNum + secondNum == ans) {
			cout << "�¾ҽ��ϴ�." << endl;
			i = i+1;
			break;
		}
		else {
			cout << "Ʋ�Ƚ��ϴ�." << endl;
		}
		if (i == 2)
			break;
	}
	return 0;
}