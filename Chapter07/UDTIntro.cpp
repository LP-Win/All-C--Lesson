#include<iostream>
using namespace std;
struct student{ // Struct can input many info end re-use multiple time
    int ID;
    char Gender;
    string name;
    float average;

    //No-Args Constructor
    student(){
        cout<<"No-Args Constructor is call"<<endl;
        ID=0;
        name="<Unknown>";
        Gender='m';
        average=0;
    }

    //parameterized Constructor
    student(int idNumber, string fullname, char sex, float avg){
        cout<<"Parameterized is call"<<endl;
        ID = idNumber;
        name = fullname;
        Gender = sex;
        average = avg;
    }

    void input(){
        cout<<"-------{ Student Info }-------"<<endl;
        cout<<"Enter ID : "; cin>>ID;
        cout<<"Enter Name : "; cin.ignore(); getline(cin, name);
        cout<<"Enter Gender : "; cin>>Gender;
        cout<<"Enter Average : "; cin>>average;
    }
    void output(){
        cout<<"Student ID : "<<ID<<endl;
        cout<<"Student Name : "<<name<<endl;
        cout<<"Student Gender : "<<Gender<<endl;
        cout<<"Average Student : "<<average<<endl;
    }
};

int main(){
    system("clear");
    student student1;
    //student1.input();
    student1.output();

    student student2(121, "no", 'M', 89.8);
    student2.output();
    
    return 0;
}