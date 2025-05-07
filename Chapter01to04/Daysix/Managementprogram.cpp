#include<iostream>
using namespace std;

int main(){
    // score ( math , physic , eng ) -> 90%
    // attendant score = 10%
    // grade , A , B , C .... F (fail)
    // 90 - 100 = A
    // 80 - 90 = B
    // 70 - 80 = C
    // 60 - 70 = D
    // 50 - 60 = E
    // Under 50 = F

    
    system("clear");
    string name, classroom;
    char gender, grade;
    float math, physic, eng, attendant, totalscore;

    cout<<"Enter your name : "; cin>>name;
    cout<<"Enter your gender : "; cin>>gender;
    cout<<"Enter your classroom : "; cin>>classroom;
    cout<<"Enter the academic score (MaxScore = 100)"<<endl;
    cout<<"\t Enter your math score : "; cin>>math;
    cout<<"\t Enter your physic score : "; cin>>physic;
    cout<<"\t Enter your engilsh score : "; cin>>eng;
    cout<<"Enter the attendant score (0-10) : "; cin>>attendant;
    
    float academicscore = ((math+physic+eng)/3)*90/100;
    totalscore = academicscore + attendant;
    if(totalscore>=90) grade='A';
    else if (totalscore>=80) grade='B'; 
    else if (totalscore>=70) grade='C'; 
    else if (totalscore>=60) grade ='D'; 
    else if (totalscore>=50) grade='E'; 
    else grade='F';

    //system("clear");
    cout<<"Name : "<<name<<endl;
    cout<<"Gender : "<<gender<<endl;
    cout<<"Classroom : "<<classroom<<endl;
    cout<<"Math score : "<<math<<endl;
    cout<<"Physic score : "<<physic<<endl;
    cout<<"English Score : "<<eng<<endl;
    cout<<"Total score : "<<totalscore<<endl;
    cout<<"Your grade is : "<<grade<<endl;



    return 0;
}