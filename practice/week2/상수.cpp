#include <iostream>
//#define�� ���� ������.
#define PI 3.14159265359 // PI�� ��ȣ ���
using namespace std;

int main()
{
	int income = 1000; //1000�� ���ͷ� ���
	const double TAX_RATE = 0.25; //TAX_RATE�� ��� ����
	//const ��� : Ÿ���� ������ ���
	income = income - TAX_RATE * income;

	double x = 100;
	x = x * PI;

	cout << x << endl;
	return 0;
}