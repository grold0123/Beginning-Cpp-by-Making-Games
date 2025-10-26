/**************************************************
taking_damage
demonstrates function inlining
**************************************************/
#include<slow_print.h>
void radiation(int&health);

int main () {

int health = 80;
int*health_pointer = &health;
slow_print("\n\nYour health is "); cout << health ;
slow_print("\n\nYour health is "); cout << *health_pointer ;

radiation(health);
slow_print("\n\nAfter radiation exposure you health is "); cout << health;
slow_print("\n\nReading your health using a pointer: "); cout << *health_pointer;

slow_print("\n\nAnother radiation wave hits you ");
radiation(health);
slow_print("\n\nAfter radiation exposure you health is "); cout << health;
slow_print("\n\nReading your health using a pointer: "); cout << *health_pointer;

slow_print("\n\nAnother radiation wave hits you ");
radiation(health);
slow_print("\n\nAfter radiation exposure you health is "); cout << health;
slow_print("\n\nReading your health using a pointer: "); cout << *health_pointer;


}


inline void radiation(int&health){
    health /= 2;
}