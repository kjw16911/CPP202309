#include <iostream>
#include <string>
using namespace std;

int main()
{
	int number;
	//number�� int�� �����Ͽ� 
	//�ԷµǴ� number ���� ���� ����Ǵ� ���ǹ�
	cout << "���ڸ� �Է��Ͻÿ�.";
	cin >> number;
	
	if (number == 0)
		cout << "zero" << endl;
	else if (number == 1)
		cout << "one" << endl;
	else
		cout << "many" << endl;
	return 0;
}