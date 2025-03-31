#include<iostream>
using namespace std;

void printArray(int arr[], int size, string message){
    cout<<message<<endl;
    for(int i = 0; i < size; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}

int main(){
    int values[] = {14,515,56,7,9,6};
    int size = sizeof(values) / sizeof(values[0]);

    printArray(values, size, "Our Array : ");

    //1.ask user to input value to search
    int searchItem;
    cout<<"Enter Value to search: ";
    cin>>searchItem;

    bool isFound = false;
    for(int i=0; i<size; i++){
        if(searchItem == values[i]){
            isFound = true;
            cout<<"Item Found -- at index :"<<searchItem<<endl;
            cout<<"Enter Update values : "; cin>>values[i];
            cout<<"Update Succesfully"<<endl;
        }
    }
    if(isFound == false){
        cout<<"Item not found"<<searchItem<<endl;
    }
    printArray(values, size, "Array after Update :");

    return 0;
}