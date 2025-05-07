#include<iostream> 
using namespace std; 
void printArray(int array[]){ 
    int size = sizeof(array) / sizeof(*array);
    for(int i =0; i<size; i++){
        cout<<" "<<array[i]; 
    }
    cout<<endl; 
}

int main(){
    system("cls"); 
    int values[]={34,5,6,77,89}; 
    printArray(values); 
    return 0 ; 
}
