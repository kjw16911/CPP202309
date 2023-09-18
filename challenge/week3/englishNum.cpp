#include <iostream>
#include <string>
using namespace std;

int main()
{
	int number;
	//number를 int로 지정하여 
	//입력되는 number 값에 따라 실행되는 조건문
	cout << "숫자를 입력하시오.";
	cin >> number;
	
	if (number == 0)
		cout << "zero" << endl;
	else if (number == 1)
		cout << "one" << endl;
	else
		cout << "many" << endl;
	return 0;
}