#include <iostream>
using namespace std;

int main() {
	int number = 10;
	//���� number�� �ּҸ� ����Ͽ� p�� ����
	//& �ּ� ������
	int* p = &number;

	//p�� ����Ű�� ������ ����� ���� ���
	cout << *p << endl;

	//p�� �ּҸ� ���
	cout << p << endl;
	return 0;
}
