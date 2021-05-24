#include <iostream>
using namespace std;
int main(){
    int *ptr;
    int dato=30;

    ptr = &dato;
    *ptr=50;
    cout<<"dato "<<dato;
    return 0;
}