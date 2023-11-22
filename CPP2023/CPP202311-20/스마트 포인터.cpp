#include <iostream>
#include <memory>
using namespace std;

int main() {
	unique_ptr<int[]> buf(new int[10]); //포인터 할당을 위해 new를 작성 
	// unique_ptr을 통해 자동으로 동적 메모리 해제

	for (int i = 0; i < 10; i++) {
		buf[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		cout << buf[i] << " ";
	}
	cout << endl;
	return 0;
}