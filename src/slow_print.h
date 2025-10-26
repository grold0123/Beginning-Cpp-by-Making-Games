#include<chrono>
#include<thread>
#include<string>
#include<iostream>
#include<vector>
#include<ranges>
#include<random>
#include<algorithm>
#include<ctime>
#include<cstdlib>


using namespace std;

void slow_print(const string&text,int delay_ms = 20,bool spaced = false){
    for (char c: text){
        if (spaced){          
            cout << c << " | ";            
        }                                            
        else{
            cout << c;
        }
        cout << flush;                
        this_thread :: sleep_for (chrono::milliseconds(delay_ms));
    }    
};
