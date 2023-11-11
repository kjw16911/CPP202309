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

class user{
public:
    int hp;
    
public:
    void DecreaseHP(int dec_hp);
    int GetHP();
};
