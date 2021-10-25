#include<iostream>
using namespace std;

int main() {
    int lado = 2;
    int horizontal = 0;
    int vertical = 0;
    
    while (vertical <= lado) {
        while (horizontal <= lado) {
            if (vertical != 0 && vertical != lado){
                if (horizontal != 0 && horizontal != lado){
                    cout<<' ';
                    horizontal++; 
                }else {
                    cout<<'*';
                    horizontal++;
                }
            }else {
                cout<<'*';
                horizontal++; 
            }
        } 
        horizontal = 0;
        cout<<'\n';
        vertical++; 
    }
    return 0;
}
