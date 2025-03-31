#include<iostream>
using namespace std;

int main(){
    system("clear");
    int value[] = {14,44,23,65,15,25,74,54};
    int size = sizeof(value) / sizeof(value[0]);
    cout<<"Print Odd Number only"<<endl;
    for( int val : value ){
            if(val %2 == 0 )
            cout<< " " <<val;
        }
    cout<<endl;


    cout<<"Print Odd Number only"<<endl;
    for( int i=0; i<size; i++ ){
            if(value[i] %2 == 0 ) continue;
            cout<< " " <<value[i];
        }
    cout<<endl;

    
    cout<<"Print normal array order"<<endl;
    for(int i=0; i<size; i++){
        cout<<" "<<value[i];
    }
    cout<<endl;

    cout<<"Print normal array in reversed"<<endl;
    for(int i = size -1; i>=0; i--){
        cout<<" "<<value[i];
    }
    cout<<endl;


    return 0;
}