// user.cpp
#include "user.hpp"

// User 클래스 멤버 함수 구현
User::User() : hp(20) {}

void User::IncreaseHP(int incHP) {
    hp += incHP;
}

void User::DecreaseHP(int decHP) {
    hp -= decHP;
    if (hp < 0) {
        hp = 0;
    }
}

int User::GetHP() const {
    return hp;
}

void User::doAttack() {
    cout << "공격합니다. ";
}

// Magican 클래스 멤버 함수 구현
Magican::Magican() : User() {}

void Magican::doAttack() {
    User::doAttack();
    cout << "'마법 사용'" << endl;
}

// Warrior 클래스 멤버 함수 구현
Warrior::Warrior() : User() {}

void Warrior::doAttack() {
    User::doAttack();
    cout << "'베기 사용'" << endl;
}
