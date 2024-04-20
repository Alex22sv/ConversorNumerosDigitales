#include <iostream>

using namespace std;

int main(){
    // Uso del incremento y del decremento
    int n = 5;
    cout<<n; //5
    cout<<n++; //5
    cout<<n; //6

    n = 5;
    cout<<n; //5
    cout<<++n; //6
    cout<<n; //6


    cout<<"/n";

    n = 5;
    cout<<n; //5
    cout<<n--; //5
    cout<<n; //4

    n = 5;
    cout<<n; //5
    cout<<--n; //4
    cout<<n; //4

    return 0;
}