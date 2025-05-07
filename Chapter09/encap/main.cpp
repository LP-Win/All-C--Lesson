#include<iostream>
using namespace std;

class worker{
    private:
        //Data members
        int ID;
        string name;
        int age;
        string gender;
        float salary;

    public:
        //constructor
        worker(){}
        worker(int ID, string name, int age, string gender, float salary){
            this->ID=ID;
            this->name=name;
            this->age=age;
            this->gender=gender;
            this->salary=salary;
        }

        //function members ( methods )
        void output(){
            cout<<"Worker ID : "<<ID<<endl;
            cout<<"Worker Name : "<<name<<endl;
            cout<<"Worker Gender : "<<gender<<endl;
            cout<<"Worker salary : "<<salary<<" $"<<endl;
        }

        // getter + setter functions
        // getter -> read
        // setter -> write

        // setter write value to name
        void setName(string name){
            this->name = name;
        }
        void setWorkerid(int ID){
            this->ID=ID;
        }
        void setAge(int age){
            this->age=age;
        }
        void setGender(string gender){
            this->gender=gender;
        }
        void setSalary(float){
            this->salary=salary;
        }

        //  getter
        string getName(){return name;}
        string getGender(){return gender;}
        int getID(){return ID;}
        int getAge(){return age;}
        float getSalary(){return salary;}
};

int main(){
    system("clear");
    worker worker1(1001,"LP",15,"male",450);
    worker1.setName("lp2");

    cout<<"New Worker name is : "<<worker1.getName()<<endl;

    worker1.output();

    return 0;
}