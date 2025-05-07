#include<iostream>
using namespace std;

class Person{
    protected:
        string name;
        string gender;
        int age;

    public:
        Person(){age = 0;}
        Person(string name, string gender, int age){
            this->name = name;
            this->gender = gender;
            this->age = age;
        }
        void output(){
            cout<<"Name is : "<<name<<endl;
            cout<<"Gender is : "<<gender<<endl;
            cout<<"Age is : "<<age<<endl;
        }

};
class Worker : public Person{
    public:
        float salary;
        float bonus;

    public:
        Worker(){}
        Worker(string name, string gender, int age, float salary, float bonus):Person(name,gender,age){
            this->salary=salary;
            this->bonus=bonus;
        }

        void output(){
            Person::output();
            cout<<"Salary is : "<<salary<<endl;
            cout<<"Bonus is : "<<bonus<<endl;
        }
};
class Student : protected Person{
    public:
        float GPA;
        string classroom;
    
    public:
        Student(){}
        Student(string name, string gender, int age, float GPA, string classroom):Person(name,gender,age){
            this->GPA=GPA;
            this->classroom=classroom;
        }
        void output(){
            Person::output();
            cout<<"GPA is : "<<GPA<<endl;
            cout<<"Classroom is : "<<classroom<<endl;
        }
};

int main(){
    system("clear");
    Person Person1("LP1","male",22);
    Person1.output();
    cout<<endl;
    Worker Worker1("LP2","Male",23,500,50);
    Worker1.output();
    cout<<endl;
    Student Student1("LP3","male",24,69.5,"Tech");
    Student1.output();

    return 0;
}