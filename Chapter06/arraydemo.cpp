#include<iostream>
using namespace std;

int main(){
    system("clear");
    //  int scores[5];
    //  scores[0]=40;
    //  scores[1]=30;
    //  scores[2]=50;
    //  scores[3]=70;
    //  scores[4]=140;
     
    // cout<<"Frist Scores"<<scores[0]<<endl;
    // cout<<"second Scores"<<scores[1]<<endl;
    // cout<<"third Scores"<<scores[2]<<endl;
    // cout<<"4th Scores"<<scores[3]<<endl;
    // cout<<"5th Scores"<<scores[4]<<endl;
    int n;
    cout<<"Enter the number of score : "; cin>>n;
    int score[n];
    for(int i=0; i<n; i++){
        cout<<"Enter Score : "<<i+1<<": "; cin>>score[i];
    }
    cout<<"all score are : ";
    for(int i=0; i<n; i++){
        cout<<" "<<score[i];
    }
    cout<<endl;

    return 0;
}