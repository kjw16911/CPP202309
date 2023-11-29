#include <iostream>
using namespace std;

class RemoteControl {
public:
	virtual void TurnON() = 0;
	virtual void TurnOFF() = 0;
};

class Television :public RemoteControl {
	void TurnON() {
		cout << "TV�� �մϴ�." << endl;
	}
	void TurnOFF() {
		cout << "TV�� ���ϴ�." << endl;
	}
};
class Refrigerator :public RemoteControl {
	void TurnON() {
		cout << "����� �մϴ�." << endl;
	}
	void TurnOFF() {
		cout << "����� ���ϴ�." << endl;
	}
};

int main() {
	//TV�� �Ѱ� ���� ������ �������̽��� ���� ����
	RemoteControl* remoteTV = new Television();
	remoteTV->TurnON();
	remoteTV->TurnOFF();

	//����� �Ѱ� ���� ������ �������̽��� ���� ����
	RemoteControl* remoteRefrigerator = new Refrigerator();
	remoteRefrigerator->TurnON();
	remoteRefrigerator->TurnOFF();

	delete remoteTV, remoteRefrigerator;
	return 0;
}