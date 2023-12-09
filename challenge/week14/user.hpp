// user.hpp
#ifndef USER_HPP
#define USER_HPP

#include <iostream>
using namespace std;

class User {
private:
    int hp;

public:
    User();
    void IncreaseHP(int incHP);
    void DecreaseHP(int decHP);
    int GetHP() const;
    virtual void doAttack();
};

class Magican : public User {
public:
    Magican();
    void doAttack() override;
};

class Warrior : public User {
public:
    Warrior();
    void doAttack() override;
};

#endif // USER_HPP

