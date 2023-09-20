#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int i = 0;
	int ans;
	cout << "산수 문제를 자동으로 출제합니다." << endl;

	while (true) {
		int firstNum = rand() % 100;
		int secondNum = rand() % 100;
		
		// firstNum과 secondNum을 랜덤으로 출력
		
		//Hint : 문제 출력 > 답 입력 받기 > 평가

		cout << firstNum << "+" << secondNum << "=";
		cin >> ans;
		if (firstNum + secondNum == ans) {
			cout << "맞았습니다." << endl;
			i = i+1;
			break;
		}
		else {
			cout << "틀렸습니다." << endl;
		}
		if (i == 2)
			break;
	}
	return 0;
}