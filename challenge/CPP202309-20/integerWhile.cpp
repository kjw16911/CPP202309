#include <iostream>
using namespace std;

int main()
{
	int userInput;

	cout << "������ 10�� �Է��ϼ��� (0�� �Է��ϸ� ����) :";
	int i = 0;
	//for(�ʱ⹮;���ǹ�;������) ������ �ۼ�
	for (int i = 0; i < 10 ; i++) {
		cin >> userInput;
		if (userInput == 0) {
			break;
		} //0�� �Է����� �� ���ᰡ ��
		cout << "�Է°�: " << userInput << " Ƚ��: " << i << endl;

	}

	cout << "���� �Ǿ����ϴ�.";
	return 0;
}