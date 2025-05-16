#include<iostream>
using namespace std;

class Complex{
    private:
        float real;
        float imagine;
    public:
        Complex(float real , float imagine){
            this -> real = real;
            this -> imagine = imagine;
        }
        void display(){
            cout<<real<<" + "<<imagine<<"i"<<endl;
        }
        Complex operator + (Complex& obj){
            return Complex(real + obj.real, imagine + obj.imagine);
        }
};

int main(){
    system("clear");
    Complex c1(5,2);
    Complex c2(2,5);
    Complex c3 = c1+c2;
    cout<<"The result is : ";
    c3.display();


    return 0;
}