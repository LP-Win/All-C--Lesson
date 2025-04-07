#include <iostream>
using namespace std;

void printlogo(){
    cout<<" ____        ___  _ "<<endl;
    cout<<"|  _ \\      / _ \\/ |"<<endl;
    cout<<"| |_) |____| | | | |"<<endl;
    cout<<"|  __/_____| |_| | |"<<endl;
    cout<<"|_|         \\___/|_|"<<endl;
}

void printmenu(){
    
    cout<<"1.Money Exchange Program"<<endl;
    cout<<"2.Worker Salary Calculate"<<endl;
    cout<<"3.Sum/Mul of 1...n"<<endl;
    cout<<"4.Exit"<<endl;
    
}

float exchangeUSDKHR(bool isUSDToKHR){
    float amount;
    string currency = (isUSDToKHR)? "($)": "(Riels)";
    cout<<"Enter Amount : "; cin>>amount;
    cout<<"Amount : "<<amount<<currency<<endl;
    if(isUSDToKHR==true){
        return amount * 4000;
    }else {
        return amount / 4000;
    }
}

void pressentertocontinue(){
    cout<<"\n ------------<< Press Enter To Continue >>------------"<<endl;
    cin.ignore();
    cin.get();
}

void moneyexchangeprogram(){
    while(true){
        system("cls");
        int op;
        cout<<"<<  Money Exchange Program  >>"<<endl;
        cout<<"1.Exchange From USD --> KHR"<<endl;
        cout<<"2.Enchange From KHR --> USE"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Choose Exchange Option (1-3) : "; cin>>op;
        if(op==1){
            cout<<"USD -->> KHR"<<endl;
            float usd = exchangeUSDKHR(true);
            cout<<"Result ; "<<usd<<" Riel"<<endl;
        }else if(op==2){
            cout<<"KHR -->> USD"<<endl;
            float khr = exchangeUSDKHR(false);
            cout<<"Result : "<<khr<<" $"<<endl;
        }else if(op==3){
            cout<<"Exit"<<endl;
            break;
        }else {
            cout<<"Please try again !!"<<endl;
        }
        pressentertocontinue();
    }
}

double workertax(float hour, float wage, char gender){
    float salary = hour * wage;
        if(salary >= 1000){
            if(gender == 'm' || gender == 'M'){
                salary = salary * 0.5;
            }else{
                salary = salary * 0.7;
            }
        }
    return salary;

}

long mulsumofn(bool isSum){
    int n;
    cout<<"Enter the number : "; cin>>n;
    double result = (isSum) ?0:1;
    for (int i=1; i<=n; i++)
        result = (isSum) ? result + i : result * i;
    return result;
}

void calculateworkersalary(){
    string name, position;
    char gender;
    int age, salary, tax, hour, wage;
    while(true){
        system("cls");
        cout<<"<< Calculate Worker Salary >>"<<endl;
        cout<<"Enter Worker Name : "; cin>>name;
        cout<<"Enter Worker Age : "; cin>>age;
        cout<<"Enter Worker Gender : "; cin>>gender;
        cout<<"Enter Worker Position : "; cin>>position;
        cout<<"Enter worker Hour : "; cin>>hour;
        cout<<"Enter Worker Wage : "; cin>>wage;

        
        system("cls");
        cout<<"Worker Name : "<<name<<endl;
        cout<<"Worker Age : "<<age<<" Year old "<<endl;
        cout<<"Worker Gender : "<<gender<<endl;
        cout<<"Worker Position : "<<position<<endl;
        cout<<"Worker Hour : "<<hour<<" H"<<endl;
        cout<<"Worker Wage : "<<wage<<" $"<<endl;
        cout<<"Worker salary : "<<workertax(hour, wage, salary)<<" $"<<endl;
        
        cout<<"Press Enter To Continue or 'q'||'Q' To Exit"<<endl;
        cin.ignore();
        char quitOption = cin.get();
        if(quitOption == 'q' || quitOption == 'Q'){
            break;
        }

    }
}

long SumOfN(){
    // 1-> sum , 2 -> mul
    // input -> 
    // sum  : n=5 -> 1+2+3+4+5
    // mul  : n=5 -> 1*2*3*4*5

    int sum = 0, n, i;
    //cout<<"Enter Min Number : "; cin>>min;
    cout<<"Enter Max Number : "; cin>>n;
    for (int i=1; i<=n; i++){
        sum = sum + i;
    }
    return sum;
}

long MulOfN(){
    int mul = 1, n, i;
    cout<<"Enter Number : "; cin>>n;
    for (i = 2; i <= n; i++)
        mul *= i;
    return mul;
}

void SumMulOfN(){
    int option;
    do{
        system("cls");
        int op;
        cout<<"<<------ SumMulOfN Program ------>>"<<endl;
        cout<<"1.Sum Program."<<endl;
        cout<<"2.Mul Program."<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Choose Option : "; cin>>op;
        if(op==1){
            cout<<"<<------ Sun Program ------>>"<<endl;
            int sum = SumOfN();
            cout<<"The Number is : "<<sum<<endl;
        }else if(op==2){
            cout<<"<<------ Mun Program ------>>"<<endl;
            int Mul = MulOfN();
            cout<<"The number is : "<<Mul<<endl;
        } else if(op==3){
            cout<<"Exit"<<endl;
            break;
        }else{
            cout<<"Please try again !!"<<endl;
        }
        pressentertocontinue();
    }while (option !=3);
    
}

int main()
    
    system("cls");
    int option;
    do{
        system("cls");
        printlogo();
        printmenu();
        cout<<"Choose Option : "; cin>>option;
        switch (option)
        {
        case 1:
            moneyexchangeprogram();
        break;
        case 2:
            calculateworkersalary();
        break;
        case 3:{}
            SumMulOfN();
        break;
        case 4:{}
        break;
        
        default:
        break;
        }

    }while (option !=4);
    
    return 0;
}