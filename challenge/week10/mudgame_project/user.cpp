//
//  user.cpp
//  CPP202311-08
//
//  Created by 김지웅 on 11/11/23.
//

#include "user.hpp"
#include <iostream>
using namespace std;

// HP를 감소시키는 멤버 함수
void User::DecreaseHP(int decHP) {
    hp -= decHP;
    if (hp < 0) {
        hp = 0;
    }
}

// 현재 HP를 반환하는 멤버 함수
int User::GetHP() const {
    return hp;
}
