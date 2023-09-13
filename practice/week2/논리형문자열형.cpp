#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1 = "Good";
	string s2 = "Bad";
	bool b = (s1 == s2);
	cout << b << endl;
	//문자열이 t/f 논리형으로 결과를 도출함.
	s2 = "Good";
	b = (s1 == s2);
	cout << b << endl;
	//0은 FASLE 1은 TRUE
}