#include<iostream>
using namespace std;

int main(){
    system("clear");
    int counter = 5;
    int values[] = {45,76,88,11,22};
    int* ptr = values; // memory address of the first element
    cout<<"ptr = "<< ptr<<endl;
    cout<<"Values = "<<values<<endl;

    cout<<"All element : ";
    for(int i = 0; i < 5; i++){
        cout<<" "<<*(ptr+i);
    }
    cout<<endl;

    cout<<"All element : ";
    for(int i = 0; i < 5; i++){
        cout<<" "<<ptr+i;
    }
    cout<<endl;



    return 0;
}