#include<iostream> 
#include<algorithm>
using namespace  std; 
void printArray(int arr[] , int size , string message){
    cout<<" [ "<<message<<" ] "<<endl; 
    for(int i = 0; i<size; i++){
        cout<<" "<<arr[i]; 
    }
    cout<<endl; 
}

bool comparator (int a, int b){
    return a > b; // deccending order
    return a < b; // accending order
}
int main(){

    //accending order (ASC) {Small -> Large}
    //Deccending order (DESC) {Large -> Small}
    system("cls"); 
    int values[]={34,11,2,33,66,788,1}; 
    int size = sizeof(values) / sizeof(*values); 

    printArray(values , size, "Array Before Sort"); 
    sort(values, values+size, comparator);
    printArray(values , size, "Array after Sort"); 
    
    return 0; 
}
