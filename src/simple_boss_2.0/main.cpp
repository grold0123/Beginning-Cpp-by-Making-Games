/**************************************************
simple_boss_2.0
run.py simple_boss_2.0

**************************************************/
#include<iostream>
using namespace std;
/**************************************************/
class Enemy{
    public:
    Enemy();
    void attack()const;
    protected:
    int damage;
};
/**************************************************/
Enemy::Enemy():damage(10){}
void Enemy::attack()const{
    cout << "Attack inflicts " << this->damage << " damage points!\n";
}
/**************************************************/
class Boss : public Enemy {
    public:
    Boss();
    void special_attack() const;
    private:
    int damage_multiplier;
};
/**************************************************/
Boss::Boss():damage_multiplier(3){}
void Boss::special_attack()const{
    cout << "Special attack inflicts " << (damage_multiplier*damage);
    cout << " damage points!\n";
}
/**************************************************/
int main(){
    cout << "Creating an enemy.\n";
    Enemy enemy_1;
    enemy_1.attack();

    cout << "\nCreating a boss.\n";
    Boss boss_1;
    boss_1.attack();
    boss_1.special_attack();    
}
/**************************************************/