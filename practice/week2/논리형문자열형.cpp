#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1 = "Good";
	string s2 = "Bad";
	bool b = (s1 == s2);
	cout << b << endl;
	//���ڿ��� t/f �������� ����� ������.
	s2 = "Good";
	b = (s1 == s2);
	cout << b << endl;
	//0�� FASLE 1�� TRUE
}