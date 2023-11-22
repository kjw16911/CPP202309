#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1 = "Hello World!";
	string s2 = "Hello C++!";
	cout << "s1 = " << s1 << ", s2 = " << s2 << endl;
	for (char & c : s1 ) {
		c = tolower(c);
	}
	for (char & c : s2) {
		c = toupper(c);
	}
	cout << "s1 = " << s1 << ", s2 = " << s2 << endl;
	return 0;
}