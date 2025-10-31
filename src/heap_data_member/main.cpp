/**************************************************
heap_data_member
run.py heap_data_member
demonstrates an object with a dynamically allocated data member
**************************************************/
#include<iostream>
#include<string>
using namespace std;
/*************************************************/
class Critter{
    public:
    Critter(const string&name="",int age=0);
    ~Critter();
    Critter(const Critter&critter_object);
    Critter&operator=(const Critter&critter_object);
    void greet()const;
    private:
    string*pointer_to_critter_name;
    int critter_age;    
};
/*************************************************/
Critter::Critter(const string&name, int age){
    cout << "Constructor called\n";
    this->pointer_to_critter_name = new string(name);
    this->critter_age = age;
}
Critter::~Critter(){
    cout << "\n\nDestructor called\n";
    delete this->pointer_to_critter_name;
}
Critter::Critter(const Critter&critter_object){
    cout << "Copy constructor called\n";
    this->pointer_to_critter_name = new string(*(critter_object.pointer_to_critter_name));
    this->critter_age = critter_object.critter_age;
}
Critter&Critter::operator=(const Critter&critter_object){
    cout << "Overloaded assignment operator called\n";
    if (this != &critter_object){
        delete this->pointer_to_critter_name;
        this->pointer_to_critter_name = new string(*(critter_object.pointer_to_critter_name));
    }
    return *this;
}
void Critter::greet()const{
    cout << "\nI'm " << *this->pointer_to_critter_name << " and I'm " << this->critter_age << " years old.\n";
    cout << "\n&this->pointer_to_critter_name: " <<  &this->pointer_to_critter_name;
    cout << "\nthis->pointer_to_critter_name: " <<  this->pointer_to_critter_name;
}
/*************************************************/
void test_destructor(){
    Critter to_destroy("to_destroy",3);
    to_destroy.greet();
}
void test_copy(Critter copy_critter){
    copy_critter.greet();
}
void test_assignment_op(){
    Critter dog_1("dog_1",7);
    Critter dog_2("dog_2",9);
    dog_1 = dog_2;

    dog_1.greet();
    dog_2.greet();
    cout << endl;
    
    Critter dog_3("dog",11);
    dog_3 = dog_3;
    dog_3.greet();
}
/*************************************************/
int main(){
    

    test_destructor();
    cout << endl;

    Critter dog("poochie",5);
    dog.greet();

    test_copy(dog);
    dog.greet();
    cout << endl;

    test_assignment_op();

}
/*************************************************/