#include<iostream>
using namespace std;

// void greeting(){
//     cout<<"Hello World"<<endl;
//     cout<<"I love C++ Programming"<<endl;

//     greeting();
// }

long sum1ton(int n){
    long result = 0;
    for (int i=1; i<=n; i++)
    {
        result = result + i;
    }
    return result;
}

long sum(int n){

}
int main(){
    system("clear");
    // greeting();
    int n;
    cout<<"Enter N : "; cin>>n;
    cout<<"Calling Sum V1 : "<<sum1ton(n)<<endl;

    return 0; 
}