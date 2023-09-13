#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "이름을 입력하시오: ";
	//cin : name을 읽어서 저장함.
	cin >> name,
	//name을 작서하면 "을 환영합니다."을 출력함.
	cout << name << "을 환영합니다." << endl;
}