#include <iostream>
#include <string>
using namespace std;

class Date {
	int year, month, day;
public:
	Date(int y =0, int m =0, int d=0) { year = y; month = m; day = d; } 
	//Person 클래스에서 Date 변수를 사용하려면 초기화시켜야 됨.
	void Print() {
		cout << year << "." << month << "." << day << endl;
	}
};

class Person {
	string name;
	Date birth; //만든 클래스를 다른 클래스에서 사용 가능
public:
	Person(string n, Date d) {name = n; birth = d; }
	void Print() {
		cout << name << ":";
		birth.Print();
		cout << endl;
	}
};

int main() {
	Date d{ 1998, 3, 1 };
	Person p{ "김철수", d };
	p.Print();
	return 0;
}