#include<iostream>
using namespace std;

class Base{
    public:
        virtual void greeting(){
            cout<<"Hello D01"<<endl;
        }

};

class Child: public Base{
    public:
        void greeting() override{
            cout<<"Hello Hallo"<<endl;
        }

};

int main(){
    system("clear");
    Child obj;
    obj.greeting();

    return 0;
}