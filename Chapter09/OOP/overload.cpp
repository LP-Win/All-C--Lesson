#include<iostream>
using namespace std;

class addition{
    public:
        int add(int a, int b);
        string add(string a, string b);
        int add(int a, int b, int c);
};

int addition::add(int a , int b){return a+b;}
int addition::add(int a , int b ,int c){return a+b+c;}
string addition::add(string a , string b){return a+b;}


int main(){
    system("clear");
    addition obj;
    cout<<"String , string : "<<obj.add("Hello" , "shinigami")<<endl;
    cout<<"int , int :"<<obj.add(31,41)<<endl;
    cout<<"int , int , int :"<<obj.add(51,61,71)<<endl;

    return 0;
}