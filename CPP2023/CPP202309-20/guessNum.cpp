#include <iostream>
#include <time.h> // rand() 함수를 호출하기 위한 헤더 포함
using namespace std;

int main()
{
	srand(time(NULL)); // random 함수 관련 설정

	int answer = rand() % 100; // 정답
	int tries = 0; // 시도 횟수 저장하는 변수

	int guess; // 사용자 입력 저장하기 위한 변수

	// Hint : while / do-while문

	do {
		cout << "정답을 추측하여 보시오: ";
		cin >> guess;
		tries++;

		if (guess > answer)
			cout << "제시한 정수가 높습니다." << endl;
		if (guess < answer)
			cout << "제시한 정수가 낮습니다." << endl;
		//else if를 안쓰고 조건을 2개로 작성
	} while (guess != answer);

	cout << "축하합니다. 시도 횟수= " << tries << endl;
	return 0;

}