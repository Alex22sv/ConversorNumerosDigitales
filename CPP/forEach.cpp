#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    int vector[3] = {12, 52, 6};
    for (int i = 0; i < 3; i++)
    {
        cout<<vector[i];
    }

    // Uso de for each
    for(int x : vector){
        cout<<x;
    }
    
}