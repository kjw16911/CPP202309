#include <iostream>
#include <string>
using namespace std;

string toLowerStr(string str)
{
	string str_1 = str ; //정식 매개 변수 재정의
	//지역변수를 선언할 때 string str이 아닌 새로운 다른 이름으로 선언할 것
	for (char & c : str_1) {
		c = tolower(c);
	}
	return str_1;
}

string toUpperStr(string str)
{
	string str_2 = str;
	for (char & c : str_2) {
		c = toupper(c);
	}
	return str_2;
}

int calcHammingDist(string s1, string s2)
{
	int count = 0;
	s1= toLowerStr(s1);//toLowerStr이든 toUpperStr이든 상관없음.
	s2= toLowerStr(s2);
	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] != s2[i])
			count += 1;
	}
	return count;
}

int main()
{
	string s1, s2;
	int count = 0;

	cout << "DNA1 : ";
	cin >> s1;
	cout << "DNA2 : ";
	cin >> s2;

	if (s1.length() != s2.length())
		cout << "오류 : 길이가 다름";

	else {
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] != s2[i])
				count += 1;
		}
		cout << "해밍 거리는 " << count << endl;
	}
	cout << "calcHammingDist(s1, s2)의 결과 = " << calcHammingDist(s1, s2) << endl;
	return 0;
}
// 세 문자열의 경우 두 문자열 사이의 거리를 구하고 그것의 평균을 구하는 문제
