/**************************************************
test_virtual
run.py test_virtual

**************************************************/
#include<iostream>
using namespace std;
class test{
    public:
    void virtual something();
    void another();
    test(int any_arg);    
    int any;
};

test::test(int any_arg):any(any_arg){}
void test::something(){
    cout << "\nI did something " << this->any << " times\n";
}
void test::another(){
    cout << "\nI did another " << this->any << " times\n";
}

class test_plus:public test{
    public:
    void virtual something();
    void another();            
    
};

void test_plus::something(){
    test::something();
    cout << "muda muda muda";
}
void test_plus::another(){ 

    cout << "muda muda muda";
}



int main(){
    test test_1(5);
    test_plus test_plus(8);

}