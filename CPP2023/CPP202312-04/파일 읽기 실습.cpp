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
			cerr << "������ �� �� �����ϴ�." << endl;
			return 1;
		}
	}
	
	ifstream is{ "temp.txt" };
	if (!is) {
		cerr << "���� ���¿� �����߽��ϴ�." << endl;
		exit(1);
	}

	int hour;
	double temperature;

	while (is >> hour >> temperature) { //���̻� ���� �� ���� �� false ��ȯ
		cout << hour << "��: �µ� " << temperature << endl;
	}
	return 0;
}