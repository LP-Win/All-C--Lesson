#include<iostream> 
using namespace std; 
void printArray(int arr[], int size, string message){
    cout<<message<<endl; 
    for(int i = 0; i<size; i++){
        cout<<" "<<arr[i]; 
    }
    cout<<endl; 
}

int dedletearray(int arr[], int size, int item){
    int counter = 0;
    for(int i = 0; i<size; i++){
        if(item==arr[i]) continue;
        arr[counter] = arr[i];
        counter++;
    }
    return counter;
}
int main(){
    system("cls"); 

    int values[]={34,56,78,90,45,66}; 
    int size = sizeof(values) / sizeof(*values); 

    printArray(values, size , "[+] Array before delete:"); 
    int itemIndex = 3; //90
    for (int i = itemIndex; i<size -1; i++){
        values[i] = values[i-1];
    }
    printArray(values, size, "Array after delete :");
    
    size=dedletearray(values, size, 90);
        printArray(values, size, "array after");
    return 0; 
}
