#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2;
	int count = 0;

	cout << "DNA1 : ";
	cin >> s1;
	cout << "DNA2 : ";
	cin >> s2;

	//s.length() 자주 쓰임.
	if (s1.length() != s2.length()) //길이가 다른지를 확인
		cout << "오류 : 길이가 다름" << endl;
	else {
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] != s2[i]) //s1과 s2가 다른 부분의 길이를 출력
				count += 1;
		}
		cout << "해밍 거리는 " << count << endl;
	}
	return 0;
}