#include <iostream
using namespace std;

int main()
{
	int a, b, c, largest;

	cout << "3���� ������ �Է��Ͻÿ�: ";
	cin >> a >> b >> c;
	// && ���ÿ� �����ϴ� ���
	if (a > b && a > c)
		largest = a;
	else if (b > a && b > c)
		largest = b;
	else
		largest = c;
	//else���� ���ǹ��� ���� �ʴ´�.
	cout << "���� ū ������ " << largest << endl;
	return 0;

}