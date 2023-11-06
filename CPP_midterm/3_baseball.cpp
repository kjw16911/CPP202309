#include <iostream>
#include <string>
using namespace std;
//전역 변수로 이동
int randomNum; // 맞춰야 하는 3자리수의 숫자 저장 변수
int userNumber; // 사용자가 입력한 세자리수 저장 변수
int guessFirst = userNumber / 100; // 추측한 숫자의 첫번째 자리수
int guessSecond = (userNumber - 100 * guessFirst) / 10; // 추측한 숫자의 두번째 자리수
int guessThird = (userNumber - 100 * guessFirst - 10 * guessSecond) / 1; // 추측한 숫자의 세번째 자리수
int firstNum = randomNum / 100; // 정답의 첫번째 자리수
int secondNum = (randomNum - 100 * firstNum) / 10; // 정답의 두번째 자리수
int thirdNum = (randomNum - 100 * firstNum - 10 * secondNum) / 1; // 정답의 세번째 자리수
int strike = 0; // 스트라이크 갯수를 저장하는 변수
int ball = 0; // 볼 갯수를 저장하는 변수

bool checkNumber(bool same) {
	// TODO 1: 3자리 숫자의 자릿수를 추출하고, 모든 수가 다른지 체크하는 코드블록 작성
	while (1) {
		randomNum = rand() % 900 + 100; // 랜덤한 3자리수 생성
		bool same = false; // 모든 수가 다를 경우 true를 갖는 변수

		// 예측한 자릿수가 서로 같은지를 확인
		if (guessFirst == guessSecond || guessFirst == guessThird || guessSecond == guessThird) {
			cout << "입력한 숫자에 중복된 숫자가 있습니다. " << "다시 입력해주세요" << endl;
			same = false;
			continue;
		}
		else if(same == true) {
			break;
		}
	}
	// TODO 2: 정답과 추측한 숫자의 자릿수와 숫자를 비교하며 힌트를 주기 위한 코드블록 작성
	// 각 자리의 수가 예측한 수와 같은지를 확인하기 위해 if문을 활용함.
	if (firstNum == guessFirst) {
		strike += 1;
	}
	else if (firstNum == guessSecond) {
		ball += 1;
	}
	else if (firstNum == guessThird) {
		ball += 1;
	}
	if (secondNum == guessSecond) {
		strike += 1;
	}
	else if (secondNum == guessFirst) {
		ball += 1;
	}
	else if (secondNum == guessThird) {
		ball += 1;
	}
	if (thirdNum == guessThird) {
		strike += 1;
	}
	else if (thirdNum == guessFirst) {
		ball += 1;
	}
	else if (thirdNum == guessSecond) {
		ball += 1;
	}
	else if(firstNum != guessFirst && firstNum != guessSecond && firstNum != guessThird && secondNum != guessFirst && secondNum != guessSecond && secondNum != guessThird && thirdNum != guessFirst && thirdNum != guessSecond && thirdNum != guessThird)
	{
		cout << "아웃입니다." << endl;
	}
	cout << userNumber << "의 결과 : " << strike << " 스트라이크, " << ball << "볼 입니다." << endl;
	
	return same;
}
int main() {

	randomNum = rand() % 900 + 100; // 랜덤한 3자리수 생성

	int turn = 0;
	while (1) {
		cout << turn + 1 << "번째 시도입니다. " << endl;




		// 사용자에게 세자리 수를 입력받는 코드 블록
		while (1) {
			cout << "세자리 수를 입력해주세요: ";
			cin >> userNumber;

			bool same = false; // 모든 수가 다를 경우 true를 갖는 변수




			if (to_string(userNumber).length() != 3) {
				cout << "입력된 숫자가 3자리 수가 아닙니다. 다시 입력하세요." << endl;
				continue;
			}

			if (same == true) {
				break;
			}
		}

		if (strike == 3) {	
			cout << "정답을 맞췄습니다. 축하합니다.";
			break;
		}

		turn += 1;
	}
	// TODO 1과 TODO 2 코드 블록을 함수화한 함수 호출
	bool check = false;
	check = checkNumber(check);
	check;
	return 0;
}
