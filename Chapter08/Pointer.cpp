#include<iostream>
using namespace std;

int main(){
    system("clear");
    int value = 10;
    int valueB = 40;
    int* ptr = &value;

    cout<<"Value = "<<value<<endl;  // 10
    cout<<"Value  address = "<<&valueB<<endl;
    cout<<"ptr = "<<ptr<<endl;     // 0xHEX
    cout<<"*ptr (value we point to) : "<<*ptr<<endl;


    return 0;
}