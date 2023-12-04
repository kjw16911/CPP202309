// main.cpp
#include <iostream>
#include <string>
#include "user.hpp"
using namespace std;

void displayMap(const int map[][5], int magican_x, int magican_y, int warrior_x, int warrior_y);

bool checkXY(int user_x, int mapX, int user_y, int mapY);

bool checkGoal(int map[][5], int user_x, int user_y);

bool checkState(int map[][5], User &user, int magician_x, int magician_y, int warrior_x, int warrior_y);

bool CheckUser(User &user);

int main() {
    Magican magican;
    Warrior warrior;

    User *currentPlayer = &magican;
    User *otherPlayer = &warrior;

    int k = 0;

    int map[5][5] = {{0, 1, 2, 0, 4},
                     {1, 0, 0, 2, 0},
                     {0, 0, 0, 0, 0},
                     {0, 2, 3, 2, 0},
                     {3, 0, 0, 0, 0}};

    int magican_x = 0;
    int magican_y = 0;
    int warrior_x = 4;
    int warrior_y = 4;

    while (true) {
        char currentUser = (k % 2 == 0) ? 'M' : 'W';
        cout << k%2 + 1 << "번 유저(" << currentUser << ")의 차례입니다." << endl;

        displayMap(map, magican_x, magican_y, warrior_x, warrior_y);
        cout << "현재 HP(Magican): " << magican.GetHP() << endl;
        cout << "현재 HP(Warrior): " << warrior.GetHP() << endl;

        string user_input = "";
        cout << "명령어를 입력하세요 (up, down, left, right, map, exit): ";
        cin >> user_input;

        if (currentUser == 'M') {
            currentPlayer = &magican;
            otherPlayer = &warrior;
        } else {
            currentPlayer = &warrior;
            otherPlayer = &magican;
        }

        if (user_input == "up" || user_input == "down" || user_input == "left" || user_input == "right") {
            int &user_x = (currentUser == 'M') ? magican_x : warrior_x;
            int &user_y = (currentUser == 'M') ? magican_y : warrior_y;

            if (user_input == "up") {
                user_y -= 1;
            } else if (user_input == "down") {
                user_y += 1;
            } else if (user_input == "left") {
                user_x -= 1;
            } else if (user_input == "right") {
                user_x += 1;
            }

            if (!checkXY(user_x, 5, user_y, 5)) {
                cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
                user_x = (currentUser == 'M') ? magican_x : warrior_x;
                user_y = (currentUser == 'M') ? magican_y : warrior_y;
            } else {
                currentPlayer->DecreaseHP(1);
                cout << user_input << " 방향으로 이동합니다." << endl;
            }
        } else if (user_input == "map") {
            displayMap(map, magican_x, magican_y, warrior_x, warrior_y);
        } else if (user_input == "exit") {
            cout << "종료합니다.";
            break;
        } else {
            cout << "잘못된 입력입니다." << endl;
            continue;
        }

        if (!CheckUser(*currentPlayer)) {
            cout << "HP가 0이 되었습니다. 실패하였습니다." << endl;
            cout << "게임을 종료합니다." << endl;
            break;
        }

        bool finish = checkGoal(map, magican_x, magican_y);
        if (finish) {
            cout << "목적지에 도착했습니다! 축하합니다!" << endl;
            cout << "게임을 종료합니다." << endl;
            break;
        }

        checkState(map, *currentPlayer, magican_x, magican_y, warrior_x, warrior_y);
        k++;
    }

    return 0;
}


// 지도와 사용자 위치 출력하는 함수
void displayMap(const int map[][5], int magican_x, int magican_y, int warrior_x, int warrior_y) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == magican_y && j == magican_x) {
                cout << "   M  |"; // 양 옆 1칸 공백
            } else if (i == warrior_y && j == warrior_x) {
                cout << "   W  |";
            } else {
                int posState = map[i][j];
                switch (posState) {
                    case 0:
                        cout << "      |"; // 6칸 공백
                        break;
                    case 1:
                        cout << " 아이템 |";
                        break;
                    case 2:
                        cout << "  적  |"; // 양 옆 2칸 공백
                        break;
                    case 3:
                        cout << " 포션  |"; // 왼쪽 1칸 오른쪽 2칸 공백
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
    return (user_x >= 0 && user_x < mapX && user_y >= 0 && user_y < mapY);
}


// 유저의 위치가 목적지인지 체크하는 함수
bool checkGoal(int map[][5], int user_x, int user_y) {
    // 목적지 도착하면
    return (map[user_y][user_x] == 4);
}


// 아이템/포션/적을 만났을 때 해당 효과와 메시지 출력하는 함수
bool checkState(int map[][5], User &user, int magician_x, int magician_y, int warrior_x, int warrior_y) {
    bool isItem = (map[magician_y][magician_x] == 1 || map[warrior_y][warrior_x] ==1);
    bool isPotion = (map[magician_y][magician_x] == 3 || map[warrior_y][warrior_x] == 3) ;
    bool isEnemy = (map[magician_y][magician_x] == 2 || map[warrior_y][warrior_x] == 2);

    // 아이템, 포션, 적 여부를 출력
    if (isItem) {
        cout << "아이템이 있습니다." << endl;
    } else if (isPotion) {
        user.IncreaseHP(2);
        cout << "포션이 있습니다. HP가 2 회복됩니다." << endl;
    } else if (isEnemy) {
        user.DecreaseHP(2);
        cout << "적이 있습니다. HP가 2 줄어듭니다." << endl;
        user.doAttack();
    } else {
        return false;
    }

    // 아이템, 포션, 적 중 하나라도 있는지 여부를 반환
    return (isItem || isPotion || isEnemy);
}


bool CheckUser(User &user) {
    return user.GetHP() > 0;
}

