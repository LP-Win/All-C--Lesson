#include<iostream>
using namespace std;

int main(){
    system("clear");
    int valuesA = 10;
    int &valuesB = valuesA;
    valuesB = 99;

    cout<<"ValuesA : "<<valuesA<<endl;
    cout<<"ValuesB : "<<valuesB<<endl;


    return 0;
}