#include <iostream>
using namespace std;

int square(int i)
{
	cout << "square(int) 호출" << endl;
	return i * i;
}

double square(double i)
{
	cout << "square(double) 호출" << endl;
	return i * i;
}

float square(float i)
{
	cout << "square(float) 호출" << endl;
	return i * i;
}

int main() {
	cout << square(10) << endl;
	cout << square(3.3) << endl;
}