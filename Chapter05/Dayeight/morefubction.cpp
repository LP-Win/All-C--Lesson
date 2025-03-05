#include <iostream>
using namespace std;

void userGreeting(string username, string subject){
    cout<<"===================================================="<<endl;
    cout<<"Hello ! "<<username<<endl;
    cout<<"welcome to "<<subject<<" Programming class"<<endl;
    cout<<"===================================================="<<endl;

}

// funtion that have returntype
int sum(){
    int value1, value2;
    cout<<"Enter Value 1 "<<endl; cin>>value1;
    cout<<"Enter Valve 2 "<<endl; cin>>value2;
    int result = value1 + value2;
    //cout<<result<<endl;
    return result;
}

float exchangeUSTToRiels(float usd){
    return usd * 4000;
}


int main(){
    system("clear");
    // userGreeting("Bona lisa", "C++");
    // userGreeting("KoKo","Python");
    //userGreeting();

    /*int result = sum();
    cout<<"Add 100 to value for total"<<endl;
    result+=100;
    cout<<"Total Value : "<<result<<endl;

    cout<<sum()<<endl;*/
    int usd;
    cout<<"enter usd : "; cin>>usd;
    float riels = exchangeUSTToRiels(usd);
    riels+=100000;
    cout<<"Riels : "<<riels<<"Riels"<<endl;
    
    return 0;
}