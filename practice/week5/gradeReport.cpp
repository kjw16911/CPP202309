#include <iostream>
#include <string>
using namespace std;

int main() 
{
	const int STUDENT = 5; //배열의 크기 지정(초기화)
	const int SUBJECT = 3; //배열의 크기 지정(초기화)
	int scores[STUDENT][SUBJECT]; //STUDENT 행의 크기, SUBJECT 열의 크기
	string studentNames[STUDENT] //학생 이름 지정
		= { "영수", "영희", "철수", "미미", "쥬쥬" };
	string subjectNames[SUBJECT] //과목 이름 지정
		= { "수학", "영어", "CPP" };

	for (int i = 0; i < STUDENT; i++) {
		cout << studentNames[i]
			<< "의 성적을 하나씩 입력하시오." << endl;
		for (int j = 0; j < SUBJECT; j++) {
			cout << subjectNames[j] << ":";
			cin >> scores[i][j]; //점수 입력
		}
	}

	for (int i = 0; i < STUDENT; i++) {
		cout << studentNames[i] << "의 평균 점수는 ";
		double sum = 0; //평균 점수는 "실수"로 입력
		double average = 0;
		for (int j = 0; j < SUBJECT; j++) {
			sum += scores[i][j]; //점수 합산
		}
		average = sum / SUBJECT;
		cout << average << "입니다." << endl;

	}
	return 0;
}