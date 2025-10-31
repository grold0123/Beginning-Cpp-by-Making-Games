/**************************************************
simple_boss
run.py simple_boss

**************************************************/
#include<iostream>
using namespace std;
/*************************************************/
class Enemy{
    public:
    int damage;
    void attack()const;
    Enemy();
    private:
    
};
/*************************************************/
Enemy::Enemy():damage(10){}
void Enemy::attack()const{
    cout << "Attack infilicts " << damage << " damage points!\n";
}
/*************************************************/
class Boss:public Enemy{
    public:
    int damage_multiplier;
    Boss();
    void special_attack()const;
};
/*************************************************/
Boss::Boss():damage_multiplier(3){}
void Boss::special_attack()const{
    cout << "Special Attack inflicts " << (damage_multiplier * damage) ; 
    cout << " damage points!\n";
}
/*************************************************/
int main(){
    cout << "Creating an enemy.\n";
    Enemy enemy_1;
    enemy_1.attack();

    cout << "\nCreating a boss.\n";

    Boss boss_1;
    boss_1.attack();
    boss_1.special_attack();
}
/*************************************************/