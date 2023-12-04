#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream os{ "numbers.txt" }; //파일의 출력 스트림 생성 및 초기화
	//솔루션 => 파일 탐색기에서 폴더 열기로 파일 확인 가능
	if (!os) {
		cerr << "파일 오픈에 실패했습니다." << endl; 
		// cerr : 표준 에러 출력 스트림
		// 에러 메시지 출력 시 사용
		exit(1);
	}

	for (int i = 0; i < 100; i++)
		os << i << " "; //파일에 데이터 출력
	return 0;
}