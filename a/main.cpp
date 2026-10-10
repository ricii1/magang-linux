#include <iostream>

using namespace std;

int main(){
    int i = 0;
    int a = 0;
    while(1){
        if(a == 10000){
            i++;
            cout << "Hello, World: " << i << endl;
            a = 0;
        }
        a++;
    }
}