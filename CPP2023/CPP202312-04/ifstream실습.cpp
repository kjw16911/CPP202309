#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream is{ "numbers.txt" }; //파일의 출력 스트림 생성 및 초기화
	if (!is) {
		cerr << "파일 오픈에 실패했습니다." << endl;
		exit(1);
		//클래스 객체를 bool로 반환할 때 operate bool이 1이면 
	}
	int number; // 파일 데이터를 저장할 변수 생성
	while (is) {
		is >> number; // 파일 데이터 변수에 저장
		cout << number << " ";
	}
	cout << endl;
	return 0;
}