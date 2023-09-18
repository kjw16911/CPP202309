#include <iostream>
using namespace std;

int main()
{
	int choice;

	cout << "1. 파일 저장" << endl;
	cout << "2. 저장 없이 닫기" << endl;
	cout << "3. 종료" << endl;
	cin >> choice;

	switch (choice) {
		case 1:
			cout << "파일 저장을 선택했습니다." << endl;
			break;
		case 2:
			cout << "파일 닫기를 선택했습니다." << endl;
			break;
		case 3:
			cout << "프로그램을 종료합니다." << endl;
			break;
		default:
			cout << "잘못된 선택입니다." << endl;
			break;
// switch문은 표현식의 결과값이 case의 값과 같은지를 확인함.
// break를 쓰지 않는 경우 계속해서 문장을 실행시킴.
// default에서 break는 큰 의미 없음.
	}
	return 0;
}