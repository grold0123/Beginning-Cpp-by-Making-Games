/**************************************************
overriding_boss
run.py overriding_boss

**************************************************/
#include<iostream>
using namespace std;
/*************************************************/
class Enemy{
    public:
    Enemy(int damage=10);
    void virtual taunt()const;
    void virtual attack()const;
    private:
    int damage;
};
/*************************************************/
Enemy::Enemy(int damage):damage(damage){}
void Enemy::taunt()const{
    cout << "The enemy says he will fight you.\1";
}
void Enemy::attack()const{
    cout << "Attack! inflicts " << damage << " damage points.";
}
/*************************************************/
class Boss:public Enemy{
    public:
    Boss(int damage=30);
    void virtual taunt()const;
    void virtual attack()const;
};
/*************************************************/
Boss::Boss(int damage):Enemy(damage){}
void Boss::taunt()const{
    cout << "The boss says he will ebd your pitiful existence.\n";
}
void Boss::attack()const{
    Enemy::attack();
    cout << " And laugs heartily at you.\n";
}
/*************************************************/
int main(){
    cout << "Enemy object:\n";
    Enemy an_enemy;
    an_enemy.taunt();
    an_enemy.attack();

    cout << "\n\nBoss object:\n";
    Boss a_boss;
    a_boss.taunt();
    a_boss.attack();
}
/*************************************************/