/**************************************************
scoping
demonstrates scopes
**************************************************/
#include<slow_print.h>

void func();

int main () {
    int var = 5;    //local variable in main()
    cout << "\n\nIn main() var is: " << var << "\n\n";
    func();
    cout << "\n\nBack in main() var is: " << var << "\n\n";

    {
        cout << "\n\nIn main() in a new scope var is: " << var << "\n\n";
        cout << "\n\nCreating new var in new scope.";

        int var = 10; 

        cout << "\n\nIn main() in a new scope var is: " << var << "\n\n";
    }
}

void func(){
    int var = -5;
    cout << "\n\nIn func() var is: " << var << "\n\n";
}