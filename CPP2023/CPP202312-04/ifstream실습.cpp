#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream is{ "numbers.txt" }; //������ ��� ��Ʈ�� ���� �� �ʱ�ȭ
	if (!is) {
		cerr << "���� ���¿� �����߽��ϴ�." << endl;
		exit(1);
		//Ŭ���� ��ü�� bool�� ��ȯ�� �� operate bool�� 1�̸� 
	}
	int number; // ���� �����͸� ������ ���� ����
	while (is) {
		is >> number; // ���� ������ ������ ����
		cout << number << " ";
	}
	cout << endl;
	return 0;
}