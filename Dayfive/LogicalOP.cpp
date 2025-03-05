#include<iostream> 
using namespace std; 

int main(){
    // Logical operators 
    // AND && 
    system("clear"); 
    // requirement -> gender = f , grade = 12 
    char gender = 'f'; 
    int grade = 12;
    int age = 18; 
    // 1 AND 1 = 1 
    // 1 AND 0 = 0 
    // 0 AND 1 = 0 
    // 0 AND 0 = 0 
    if( gender == 'f' && grade == 12 && age == 18){
        cout<<"You are able to apply !! "<<endl; 
    }else {
        cout<<"You are NOT able to apply!! "<<endl; 
    }

    // logiccal OR ||
    // 1 AND 1 = 1 
    // 1 AND 0 = 1
    // 0 AND 1 = 1 
    // 0 AND 0 = 0 
    grade = 6;
    gender = 'f';
    cout<<"[+] sholarship program : " <<endl;
    if (grade == 6 || gender == 'f')
    {
        cout<<"You are able to apply!"<<endl;
    }
    else{
        cout<<"you are not able to apply"<<endl;
    }
    
    // logical not
    // true become fale
    // fale become true
    grade = 11;
    gender = 'm';
    cout<<"[+] joining event"<<endl;
    if (!(grade == 11 && gender == 'm' ))
    {
        cout<<"you can not join"<<endl;
    }
    else{
        cout<<"you can join"<<endl;
    }

    // simple version
    bool isValid = true;
    cout<<"The volid is : "<< (!isValid)<<endl;

    // ternary Operators
    // ? :
    int value1, value2, max = 0;
    cout<<"Enter value1 here : "; cin>>value1;
    cout<<"Enter value2 here : "; cin>>value2;

    if(value1>value2) cout<<value1;
    else cout<<"the value"<<value2;
    max = (value1>value2)?value1 : value2;
    cout<<"Max value is : "<<max<<endl;
    cout<<"Max value is : "<<(value1>value2?value1:value2)<<endl;
    

    return 0 ; 
}
