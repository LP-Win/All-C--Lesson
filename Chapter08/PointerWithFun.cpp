#include<iostream>
using namespace std;

void addValue(int* val){
    *val = *val + 10;
}


int main(){
    system("clear");
    int *valuesA;
    int values = 10;
    addValue(&values); // pass by pointer
    // &values -> give address of value varuable
    cout<<"Values is : "<<values<<endl;
    cout<<"Values is : "<<&valuesA<<endl;

    return 0;
}