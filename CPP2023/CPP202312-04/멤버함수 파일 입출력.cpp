#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream is{ "temp.txt" };
	if (!is) {
		cerr << "���� ���¿� �����߽��ϴ�." << endl;
		exit(1);
	}
	char c;
	while (!is.eof()) {
		is.get(c);
		cout << c;
	}
	cout << endl;
	return 0;
}