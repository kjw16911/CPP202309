#include <iostream
using namespace std;

int main()
{
	int a, b, c, largest;

	cout << "3개의 정수를 입력하시오: ";
	cin >> a >> b >> c;
	// && 동시에 만족하는 경우
	if (a > b && a > c)
		largest = a;
	else if (b > a && b > c)
		largest = b;
	else
		largest = c;
	//else에는 조건문이 들어가지 않는다.
	cout << "가장 큰 정수는 " << largest << endl;
	return 0;

}