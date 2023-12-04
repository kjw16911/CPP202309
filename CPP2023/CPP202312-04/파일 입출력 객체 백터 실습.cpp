#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class tempdata {
public:
	int hour;
	double temperatur;
};

int main() {
	ifstream is{ "temp.txt"};
	if (!is) {
		cerr << "파일 오픈에 실패했습니다." << endl;
		exit(1);
	}

	vector<tempdata> temps;
	int hour;
	double temperature;

	while (is >> hour >> temperature) {
		temps.push_back(tempdata{ hour, temperature });
	}
	for (tempdata t : temps) {
		cout << t.hour << "시 : 온도 " << t.temperatur << endl;
	}
	return 0;

	
}