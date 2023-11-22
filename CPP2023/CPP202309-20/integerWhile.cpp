#include <iostream>
using namespace std;

int main()
{
	int userInput;

	cout << "정수를 10번 입력하세요 (0을 입력하면 종료) :";
	int i = 0;
	//for(초기문;조건문;증감식) 구조로 작성
	for (int i = 0; i < 10 ; i++) {
		cin >> userInput;
		if (userInput == 0) {
			break;
		} //0을 입력했을 때 종료가 됨
		cout << "입력값: " << userInput << " 횟수: " << i << endl;

	}

	cout << "종료 되었습니다.";
	return 0;
}