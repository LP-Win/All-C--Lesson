#include<iostream>
using namespace std;

int main(){
    system("clear");

    int n;
    while(n)
    {
        system("clear");
    cout<<"Multiplication Program"<<endl;
    cout<<"Enter n : "; cin>>n;
    cout<<"Table of : "<< n << endl;
    for(int i =1; i<=10; i++)
    {
        cout<< n << " x " << i << " = " << ( i*n )<<endl; 
    }
    
    cout<<"Pless Enter to cntinue , Enter 'q' to exit "<<endl;

    cin.ignore();
    if(cin.get()== 'q')
    {
        system("clear");
        cout<<"The program is exit...."<<endl;
        break;
    }

    }

    return 0;
}