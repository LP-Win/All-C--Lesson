#include<iostream>
using namespace std;

void printarray(int arr[], int size){
    cout<< "All element are : ";
    for (int i=0; i<size; i++){
        cout << " " << arr[i];
    }
    cout<<endl;
}

int main(){
    system("clear");

    int values[]={14,234,415,61,34,66,611,67,8,0};
    int lenght = sizeof(values) / sizeof(values[0]);
    cout<<"Number of array : "<<lenght<<endl;

    printarray(values, lenght);

    return 0;
}