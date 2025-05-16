#include<iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

string add(string a, string b){
    return a + "_" +b;
}

int add(int a, int b, int c){
    return a+b+c;
}

int main(){
    system("clear");
    cout<<"add(a+d) : "<<add(12,14)<<endl;
    cout<<"string add(P1 + P2) : "<<add("P1","P2")<<endl;
    cout<<"add a+b+c : "<<add(51,33,42)<<endl;

    return 0;
}