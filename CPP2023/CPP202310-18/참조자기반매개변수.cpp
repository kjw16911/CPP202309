#include <iostream>
using namespace std;

void modify1(int& x, int& y)
{
	x = x * 2;
	y = y * 2;
}

void modify2(int x, int y)
{
	x = x * 2;
	y = y * 2;
}

int main() {
	int a = 2, b = 3;
	modify1(a, b);
	modify2(a, b);
	
	cout << modify1 << endl;
	cout << modify2 << endl;
	return 0;
}