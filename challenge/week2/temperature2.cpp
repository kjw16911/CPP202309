#include <iostream>
using namespace std;

int main() {
	double f_temp; //ȭ���µ��� ���� ����
	double c_temp; //�����µ��� ���� ����

	cout << "�����µ� = ";
	cin >> c_temp;

	//�����µ����� ȭ���µ����� ��ȯ�� ���
	f_temp = (9.0 / 5.0) * c_temp + 32;

	cout << "ȭ���µ� = " << f_temp << endl;

	return 0;
}