#include <iostream>
using namespace std;

float Average(int value1, int value2 = 0) {
	float n = 2;
	float result = (value1 + value2) / n; 
	// ������ ���� int Ÿ���̸� result �� float�� �����ص�
	// int Ÿ������ ���� ��ȯ��.
	// ���� 2.0�� ���� floatŸ������ �ۼ��ϴ���
	// �ƴ� ((float)value1 + value2) / 2 �� ���� �ۼ��ϸ��.
	return result;
}

int main() {
	int a = 2, b = 3;
	float value1= Average(a, b);
	cout << value1 << endl;

	float value2 = Average(a);
	cout << value2 << endl;

	return 0;
}