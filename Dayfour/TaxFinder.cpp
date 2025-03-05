#include<iostream>
using namespace std;

int main(){
    system("cls");

    float salary, tax;
    cout<<"[+] Enter ur slary: "; cin>>salary;
    cout<<"[+] Enter the tax (%): "; cin>>tax;

    //tax /= 100;
    //salary *= tax;
    salary *= (tax /= 100);


    cout<<"Tax Amout is; "<<salary<<"$"<<endl;

    return 0;
}