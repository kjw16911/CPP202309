#include <iostream>
#include <fstream>
using namespace std;

int main() {
	for (int i = 1; i < 5; i++) {
		ofstream os{ "temp.txt", ios::app};
		if (os.is_open()) {
			os << i << " "<< i + 23.0 << endl;
			os.close();
		}
		else {
			cerr << "파일을 열 수 없습니다." << endl;
			return 1;
		}
	}
	
	ifstream is{ "temp.txt" };
	if (!is) {
		cerr << "파일 오픈에 실패했습니다." << endl;
		exit(1);
	}

	int hour;
	double temperature;

	while (is >> hour >> temperature) { //더이상 읽을 수 없을 때 false 반환
		cout << hour << "시: 온도 " << temperature << endl;
	}
	return 0;
}