#include <iostream>
using namespace std;

int main()
{
	int choice;

	cout << "1. ���� ����" << endl;
	cout << "2. ���� ���� �ݱ�" << endl;
	cout << "3. ����" << endl;
	cin >> choice;

	switch (choice) {
		case 1:
			cout << "���� ������ �����߽��ϴ�." << endl;
			break;
		case 2:
			cout << "���� �ݱ⸦ �����߽��ϴ�." << endl;
			break;
		case 3:
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		default:
			cout << "�߸��� �����Դϴ�." << endl;
			break;
// switch���� ǥ������ ������� case�� ���� �������� Ȯ����.
// break�� ���� �ʴ� ��� ����ؼ� ������ �����Ŵ.
// default���� break�� ū �ǹ� ����.
	}
	return 0;
}