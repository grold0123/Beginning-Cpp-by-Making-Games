/**************************************************
heap
run.py heap
demonstrates dynamically allocating memory
**************************************************/
#include<iostream>
using namespace std;
using int_type_pointer = int*;
/*************************************************/
int_type_pointer integer_on_heap();
void leak_1();
void leak_2();
/*************************************************/
int main(){
    int_type_pointer heap = new int;
    *heap = 10;
    cout << "\n\ndereferencing the int type pointer heap: " << *heap;

    int_type_pointer heap_2 = integer_on_heap();
    cout << "\n\ndereferencing the int type pointer heap_2: " << *heap_2;

    cout << "\n\nFreeing memory pointed to by heap."; delete heap;

    cout << "\n\nFreeing memory pointed to by heap_2."; delete heap_2;

    cout << "\n\nTrying to dereference the pointers";
    cout << "\n\ndereferencing the int type pointer heap: " << *heap;
    cout << "\n\ndereferencing the int type pointer heap_2: " << *heap_2;

    cout << "\n\nInitializing pointers:"; heap = 0; heap_2 = 0;
    cout << "\n\nTrying to dereference the initialized pointers";
    cout << "\n\ndereferencing the int type pointer heap: " << *heap;
    cout << "\n\ndereferencing the int type pointer heap_2: " << *heap_2;

    cout << "\n\n";
}
/*************************************************/
int_type_pointer integer_on_heap(){
    int_type_pointer temp = new int(20);
    return temp;
}
void leak_1(){
    int_type_pointer drip_1 = new int(30);
}
void leak_2(){
    int_type_pointer drip_2 = new int(50);
    drip_2 = new int(100);
    delete drip_2;
}
/*************************************************/