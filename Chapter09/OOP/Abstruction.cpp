#include<iostream>
using namespace std;

class Login{
    public:
        virtual void login()=0;
        void signUp(){
            cout<<"You have created an account successfully!"<<endl;
        }
};

class LoginImpl: public Login{
    public:
        void login() override{
            cout<<"You have succesfully login!!"<<endl;
        }
};

class LoginPage2: public Login{
    public:
        void login() override{
            cout<<"You have login into the next page!!"<<endl;
        }
};

int main(){
    system("clear");

    Login* loginobj = new LoginImpl();
    loginobj -> login();

    delete loginobj; //deallocate memory

    return 0;
}