#include <iostream>
#include <fstream>
using namespace std;

int main() {
	for (int i = 0; i < 2; i++) {
		//ios::out 플래그를 사용하여 파일에 쓰기
		ofstream outFileOut("output.txt", ios::out);
		if (outFileOut.is_open()) {
			outFileOut << "ios::out을 사용한 파일 쓰기" << i << endl;
			outFileOut.close();
		}
		else {
			cerr << "파일을 열 수 없습니다." << endl;
			return 1;
		}
		//파일을 쓰기 위해 열기 때문에 다음 파일을 작성할 때는 기존 파일에 덮어씀
	}

	for (int i = 0; i < 2; i++) {
		ofstream outFileAppend("append.txt", ios::app);
		if (outFileAppend.is_open()) {
			outFileAppend << "ios::app을 사용한 파일 쓰기" << i << endl;
			outFileAppend.close();
		}
		else {
			cerr << "파일을 열 수 없습니다." << endl;
			return 1;
		}
		//파일을 쓰기 위해 열고 추가되는 데이터를 끝에 추가함.
	}

	for (int i = 0; i < 2; i++) {
		ofstream outFileTrucate("truncate.txt", ios::trunc);
		if(outFileTrucate.is_open()){
			outFileTrucate << "ios::trunc를 사용한 파일 쓰기" << i << endl;
			outFileTrucate.close();
		}
		else {
			cerr << "파일을 열 수 없습니다." << endl;
			return 1;
		}
		// 파일을 쓰기 위해 열고 데이터를 새롭게 작성
	}
	cout << "파일 작업이 완료했습니다." << endl;
	return 0;
}