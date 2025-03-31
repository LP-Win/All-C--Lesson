#include<iostream>
using namespace std;
int main(){
    system("clear");
    int scores[] = {14,44,23,65,15,100,74,54};
    int size = sizeof(scores) / sizeof(scores[0]);
    
    //1.find max
    int max = scores[0];
    for(int score : scores){
        if(max < score){
            max = score;
        }
    }
    cout<<"Max is : "<<max<<endl;

    //2. find min
    int min = scores[0];
    for(int score : scores){
        if(min > score) min = score;
    }
    cout<<"Min is : "<<min<<endl;

    //3.find sum
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += scores[i];
    }
    cout<<"Sum is : "<<sum<<endl;

    return 0;
}