#include<iostream>
using namespace std;

void addValues(int& val){
    val = val + 100;
}

int main(){
    system("clear");
    int values = 10;
    addValues(values);
    cout<<"Values : "<<values<<endl;
   
    return 0;
}