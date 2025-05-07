#include<iostream>
using namespace std;

int main(){
    system("cls");
    string workername;
    char gender;
    float salary, wage, tax=0, hour;

    cout<<"Enter name: "; cin>>workername;
    cout<<"Enter Gender: "; cin>>gender;
    cout<<"Enter work hour: "; cin>>hour;
    cout<<"Enter wage: "; cin>>wage;

    salary = wage * hour;
    float TaxAmount = 0;
    if(salary >= 1000)
    {
        if (gender == 'f')tax = 0.3;
        else tax = 0.5;
        TaxAmount = salary * tax;
    }

    salary -= TaxAmount;
    cout<<"Name is : "<<workername<<endl;
    cout<<"Gender is : "<<gender<<endl;
    cout<<"Tax Amount is : "<< TaxAmount<<endl;
    cout<<"Tax(%) : "<<tax<<endl;
    cout<<"Remain balance :"<<salary<<endl;






    return 0;
}