#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cout << "주민등록번호를 입력하시오 : ";
	cin >> s;

	cout << "-가 제거된 주민등록번호 : ";
	for (char c : s) {
		if (c == '-') {
			continue;
		}
		cout << c;
	}
	cout << endl;

	return 0;
}
//-를 기준으로 옳바르게 주민번호를 입력했는지 확인하는 문제