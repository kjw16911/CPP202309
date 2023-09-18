#include <iostream>

using namespace std;

int main()
{//maxValue와 마찬가지로 int를 지정함.
	int a, b, c, smallest;

	cout << "3개의 정수를 입력하시오: ";
	cin >> a >> b >> c;

	if (a < b && a < c)
		smallest = a;
	else if (b < a && b < c)
		smallest = b;
	else
		smallest = c;
	//else에는 조건문이 들어가지 않는다.
	cout << "가장 작은 수는 " << smallest << endl;
	return 0;
}