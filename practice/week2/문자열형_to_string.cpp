#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1 = "사과";
	string s2;
	//s1 + " " + 10 + "개" 10이 문자열이 아니기 때문에 오류남.
	//to_string은 문자열로 변경시켜주는 역할
	s2 = s1 + " " + to_string(10) + "개";
	cout << s2 << endl;
}