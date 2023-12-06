#include <iostream>
#include <exception> //�� �ۼ��ؾ� �Լ� ��� ����
using namespace std;

int main() {
	int pizza_slices = 0;
	int persons = 0;
	int slices_per_person = 0;

	try {
		cout << "���� �������� �Է��Ͻÿ�: ";
		cin >> pizza_slices;
		if(pizza_slices == 0)
			throw invalid_argument("0���� ���� �� �����ϴ�."); 
			//throw�� ������ �޾Ƽ� ����Ҽ� ����
		cout << "������� �Է��Ͻÿ�: ";
		cin >> persons;
		if (persons == 0)
			throw persons;
		slices_per_person = pizza_slices / persons;
		cout << "�� ����� ���ڴ� " << slices_per_person << "�����Դϴ�." << endl;
	}
	catch (exception& e) {
		cout << "����: " << e.what() << endl; //���� �߻� �� �߰� ���
	}
	catch (...) {
		cout << "����" << endl;
	}
	return 0;
}