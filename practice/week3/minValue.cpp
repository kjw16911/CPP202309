#include <iostream>

using namespace std;

int main()
{//maxValue�� ���������� int�� ������.
	int a, b, c, smallest;

	cout << "3���� ������ �Է��Ͻÿ�: ";
	cin >> a >> b >> c;

	if (a < b && a < c)
		smallest = a;
	else if (b < a && b < c)
		smallest = b;
	else
		smallest = c;
	//else���� ���ǹ��� ���� �ʴ´�.
	cout << "���� ���� ���� " << smallest << endl;
	return 0;
}