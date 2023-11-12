#include <iostream>
#include <string>
#include "user.hpp"
using namespace std;

//맵 사이즈 설정
const int mapX = 5;
const int mapY = 5;

// 사용자 정의 함수 (함수 원형)
// 이동하는 좌표가 맵을 벗어나는지를 확인하는 함수
bool checkXY(int user_x, int mapX, int user_y, int mapY);

// '지도'라는 명령어를 통해df 현재 맵 상태를 보여주는 함수
void displayMap(int map[][mapX], int user_x, int user_y);

// 현재 위치가 목적지인지를 체크하는 함수
bool checkGoal(int map[][mapX], int user_x, int user_y);

// 아이템/포션/적을 만났을 때 해당 효과와 메세제 출력하는 함수
bool checkState(int map[][mapX], int user_x, int user_y);

// 메인  함수
int main() {
    User my_user;
    my_user.hp = 20;
    // 0은 빈 공간, 1은 아이템, 2는 적, 3은 포션, 4는 목적지
    int map[mapY][mapX] = { {0, 1, 2, 0, 4},
                    {1, 0, 0, 2, 0},
                    {0, 0, 0, 0, 0},
                    {0, 2, 3, 0, 0},
                    {3, 0, 0, 0, 2} };
    // x가 세로를 y가 가로를 의미하므로 배열 순서에 유의


    // 유저의 위치를 저장할 변수
    int user_x = 0; // 가로 번호
    int user_y = 0; // 세로 번호

    // 게임 시작
    while (1) { // 사용자에게 계속 입력받기 위해 무한 루프

        // 사용자의 입력을 저장할 변수
        string user_input = "";

        cout << "현재 HP : " << my_user.GetHP();
        cout << " 명령어를 입력하세요 (상, 하, 좌, 우, 지도, 종료) : ";
        cin >> user_input;

        //사용자에게 입력받은 값에 따른 행동 정리(if문 활용)
        if (user_input == "상") {
            // 위로 한 칸 올라가기
            user_y -= 1;
            //2차원 배열의 시작이 좌측 상단에서 시작하므로 -1를 해야 한칸 위로 올라감.
            bool inMap = checkXY(user_x, mapX, user_y, mapY);
            if (inMap == false) {
                cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
                user_y += 1; //이미 위로 올라간 상태이므로 맵을 벗어났을 경우 다시 원상복구해야 함.
            }
            else {
                cout << "위로 한 칸 올라갑니다." << endl;
                displayMap(map, user_x, user_y);
            }
        }
        else if (user_input == "하") {
            // TODO: 아래로 한 칸 내려가기
            user_y += 1;
            bool inMap = checkXY(user_x, mapX, user_y, mapY);
            if (inMap == false) {
                cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
                user_y -= 1;
            }
            else {
                cout << "아래로 한 칸 내려갑니다." << endl;
                displayMap(map, user_x, user_y);
            }
        }
        else if (user_input == "좌") {
            // TODO: 왼쪽으로 이동하기
            user_x -= 1;
            bool inMap = checkXY(user_x, mapX, user_y, mapY);

            if (inMap == false) {
                cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
                user_x += 1;
            }
            else {
                cout << "왼쪽으로 이동합니다." << endl;
                displayMap(map, user_x, user_y);
            }
        }
        else if (user_input == "우") {
            // TODO: 오른쪽으로 이동하기
            user_x += 1;
            bool inMap = checkXY(user_x, mapX, user_y, mapY);
            if (inMap == false) {
                cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
                user_x -= 1;
            }
            else {
                cout << "오른쪽으로 이동합니다." << endl;
                displayMap(map, user_x, user_y);
            }
        }
        else if (user_input == "지도") {
            // TODO: 지도 보여주기 함수 호출
            displayMap(map, user_x, user_y);
        }
        else if (user_input == "종료") {
            cout << "종료합니다.";
            break;
        }
        //else if문을 반복적으로 활용하여 명령어 수행
        else {
            cout << "잘못된 입력입니다." << endl;
            continue;
        }

        if (my_user.GetHP() == 0) {
            cout << "HP가 0이 되었습니다. " << "실패하였습니다." << endl;
            cout << "게임을 종료합니다.";
            break;
        }

        // 목적지에 도달했는지 체크
        bool finish = checkGoal(map, user_x, user_y);
        if (finish == true) {
            cout << "목적지에 도착했습니다! 축하합니다!" << endl;
            cout << "게임을 종료합니다." << endl;
            break;
        }

        checkState(map, user_x, user_y);

    }
    my_user.DecreaseHP(1);
    return 0;
}


// 지도와 사용자 위치 출력하는 함수
void displayMap(int map[][mapX], int user_x, int user_y) {
    for (int i = 0; i < mapY; i++) {
        for (int j = 0; j < mapX; j++) {
            if (i == user_y && j == user_x) {
                cout << " USER |"; // 양 옆 1칸 공백
            }
            else {
                int posState = map[i][j];
                switch (posState) {
                case 0:
                    cout << "      |"; // 6칸 공백
                    break;
                case 1:
                    cout << "아이템|";
                    break;
                case 2:
                    cout << "  적  |"; // 양 옆 2칸 공백
                    break;
                case 3:
                    cout << " 포션 |"; // 양 옆 1칸 공백
                    break;
                case 4:
                    cout << "목적지|";
                    break;
                }
            }
        }
        cout << endl;
        cout << " -------------------------------- " << endl;
    }
}

// 이동하려는 곳이 유효한 좌표인지 체크하는 함수
bool checkXY(int user_x, int mapX, int user_y, int mapY) {
    bool checkFlag = false;
    if (user_x >= 0 && user_x < mapX && user_y >= 0 && user_y < mapY) {
        checkFlag = true;
    }
    return checkFlag;
}

// 유저의 위치가 목적지인지 체크하는 함수
bool checkGoal(int map[][mapX], int user_x, int user_y) {
    // 목적지 도착하면
    if (map[user_y][user_x] == 4) {
        return true;
    }
    return false;
}

// 아이템/포션/적을 만났을 때 해당 효과와 메세제 출력하는 함수
bool checkState(int map[][mapX], int user_x, int user_y) {
    User my_user;
    bool isItem = (map[user_y][user_x] == 1);
    bool isPotion = (map[user_y][user_x] == 3);
    bool isEnemy = (map[user_y][user_x] == 2);

    // 아이템, 포션, 적 여부를 출력
    if (isItem == true) {
        cout << "아이템이 있습니다." << endl;
    }
    else if (isPotion == true) {
        my_user.DecreaseHP(-2);
        cout << "포션이 있습니다. HP가 2 회복됩니다." << endl;
    }
    else if (isEnemy == true) {
        my_user.DecreaseHP(2);
        cout << "적이 있습니다. HP가 2 줄어듭니다." << endl;
    }
    else {
        return false;
    }

    // 아이템, 포션, 적 중 하나라도 있는지 여부를 반환
    return (isItem || isPotion || isEnemy);
}
