#include <iostream>
using namespace std;

int main() {
	double f_temp; //ȭ���µ��� ���� ����
	double c_temp; //�����µ��� ���� ����

	cout << "ȭ���µ� : ";
	cin >> f_temp;

	//ȭ���µ����� �����µ����� ��ȯ�� ���
	c_temp = (5.0 / 9.0) * (f_temp - 32);
	
	cout << "�����µ� = " << c_temp << endl;

	return 0;
}