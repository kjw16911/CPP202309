//
//  user.hpp
//  CPP202311-08
//
//  Created by 김지웅 on 11/11/23.
//

#ifndef user_hpp
#define user_hpp

#include <iostream>
using namespace std;
#endif /* user_hpp */

#pragma once

class User {
private:
    int hp;

public:
    // 생성자
    User();

    // HP를 증가시키는 멤버 함수
    void IncreaseHP(int incHP);

    // HP를 감소시키는 멤버 함수
    void DecreaseHP(int decHP);

    // 현재 HP를 반환하는 멤버 함수
    int GetHP() const;
};
