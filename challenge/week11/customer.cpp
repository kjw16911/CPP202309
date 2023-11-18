//
//  main.cpp
//  customer
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int maxPeople;
    cout << "총 고객의 수를 입력하라 : ";
    cin >> maxPeople;

    //동적 배열 생성
    vector<string> names;
    vector<int> ages;

    for (int i = 0; i < maxPeople; i++) {
        string name;
        int age;

        cout << "사람" << i + 1 << "의 이름 : ";
        cin >> name;
        cout << "사람" << i + 1 << "의 나이 : ";
        cin >> age;

        // 벡터의 push_back을 사용하여 데이터 추가
        names.push_back(name);
        ages.push_back(age);
    }

    int ageThreshold;
    cout << "특정 나이 이상인 사람을 찾으려면 나이를 입력하시오 : ";
    cin >> ageThreshold;

    cout << ageThreshold << "세 이상인 고객들 : \n";
    int detectedPeople = 0;

    for (size_t i = 0; i < names.size(); i++) {
        if (ages[i] >= ageThreshold) {
            cout << names[i] << " (" << ages[i] << "세)\n";
            detectedPeople++;
        }
    }

    if (detectedPeople == 0) {
        cout << ageThreshold << "이상의 나이를 가진 고객이 없습니다.";
    }

    // 벡터는 자동으로 메모리를 관리하므로 별도의 메모리 해제가 필요하지 않습니다.

    return 0;
}
