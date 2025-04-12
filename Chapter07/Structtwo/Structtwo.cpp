#include <iostream>
#include <algorithm>
using namespace std;

struct student
{
    int id;
    string name;
    string gender;
    string classroom;
    float scores[3];
    // function members
    void input()
    {
        cout << "----------[Input Student Info]----------" << endl;
        cout << "Enter Student ID : ";
        cin >> id;
        cout << "Enter Student Name : ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Student Gender : ";
        cin >> gender;
        cout << "Enter Student Classroom : ";
        cin.ignore();
        getline(cin, classroom);

        for (int i = 0; i < 3; i++)
        {
            cout << "\tEnter Score : " << (i + 1) << ": ";
            cin >> scores[i];
        }
    }
    void update()
    {
        cout << "----------[Input Student Info]----------" << endl;
        cout << "Enter Student Name : ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Student Gender : ";
        cin >> gender;
        cout << "Enter Student Classroom : ";
        cin.ignore();
        getline(cin, classroom);

        for (int i = 0; i < 3; i++)
        {
            cout << "\tEnter Score : " << (i + 1) << ": ";
            cin >> scores[i];
        }
    }
    void output()
    {
        cout << "\t----------[Student Info]----------" << endl;
        cout << "\tStudent ID : " << id << endl;
        cout << "\tStudent Name : " << name << endl;
        cout << "\tStudent Gender : " << gender << endl;
        cout << "\tStudent Scores : " << endl;
        for (int i = 0; i<3; i++){
            if (i == 0 ) cout << "/t " << scores[i];
            else cout << " " << scores[i];
        }
        cout << endl;
        cout << "\tStudent Average is : " << findAverage()<<"%"<<endl;
    }
    float findAverage(){
        return (scores[0] + scores[1] + scores[2])/3;
    }

};
void printLogo()
{
    cout << " ____  __  __ ____         ____                      _      " << endl;
    cout << " / ___||  \\/  / ___|       / ___|___  _ __  ___  ___ | | ___ " << endl;
    cout << " \\___ \\| |\\/| \\___ \\ _____| |   / _ \\| '_ \\/ __|/ _ \\| |/ _ \\" << endl;
    cout << "  ___) | |  | |___) |_____| |__| (_) | | | \\__ \\ (_) | |  __/" << endl;
    cout << " |____/|_|  |_|____/       \\____\\___/|_| |_|___/\\___/|_|\\___|" << endl;
}
int printMainMenu()
{
    printLogo();
    cout << "\t1.Insert New Student " << endl;
    cout << "\t2.Edit Student Info " << endl;
    cout << "\t3.Delete student " << endl;
    cout << "\t4.Search Student " << endl;
    cout << "\t5.Show Student " << endl;
    cout << "\t6.Exit Program " << endl;
    cout << "==> Choose Option From 1->6 : ";
    int option;
    cin >> option;
    return option;
}
void printlabel(string messages)
{
    cout << "--------[" << messages << "]--------" << endl;
}
void pressenter()
{
    cout << "-------------- Press Enter To Comtinue --------------";
    cin.ignore();
    cin.get();
}
void initstudents(student studentarray[])
{
    studentarray[0] = {101, "LP", "male", "LLQ", {13, 14, 15}};
    studentarray[1] = {102, "LP", "male", "LLQ", {13, 14, 15}};
    studentarray[2] = {103, "LP", "male", "LLQ", {13, 14, 15}};
}
int searchstudentbyID(student studentarray[], int counter)
{
    int studentID;
    cout << "Enter Student ID to search : ";
    cin >> studentID;

    int foundIndex = -1;
    for (int i = 0; i < counter; i++)
    {
        if (studentID == studentarray[i].id)
        {
            foundIndex = i;
            printlabel("Search Student");
            studentarray[i].output();
        }
    }
    if (foundIndex == -1)
    {
        cout << "There is no record with student id = " << studentID << endl;
    }
    return foundIndex;
}
int printShowMenu(){
    printlabel("Show Student Info");
    cout<<"1. Print Student in ASC ( by ID )"<<endl;
    cout<<"2. Print Student in DES ( by average )"<<endl;
    cout<<"3. Print Student in ASC ( by Name )"<<endl;
    cout<<"4. Exit"<<endl;
    int option;
    cout<<"Choose your option (1-4): "; cin>>option;
    return option;
}
void printstudent(student studentarray[], int counter){
    for (int i = 0; i < counter; i++)
    {
        studentarray[i].output();
        cout<<"\t___________________________"<<endl;
    }
}
bool averComparator(student stu1, student stu2){
    return stu1.findAverage() > stu2.findAverage();
}
bool nameComparator(student stu1, student stu2){
    return stu1.name <stu2.name;
}
bool idComparator(student stu1, student stu2){
    return stu1.id < stu2.id;
}


int main()
{
    system("cls");
    int option;
    int n = 50;
    student studentarray[n];
    int counter = 1;
    // init data
    // initstudents(studentarray);
    do
    {
        system("cls");
        option = printMainMenu();
        switch (option)
        {
        case 1:
        {

            system("cls");
            studentarray[counter++].input();
            cout << "====> Successfully Inserted a new records !" << endl;
        }
        break;
        case 2:{
            system("cls");
            if(counter == 0){
                cout <<"This is no student to update "<<endl;
                break;
            }
            int fountIndex = searchstudentbyID(studentarray, counter);

        }break;
        case 3:{
            system("cls");
            printlabel("Delete Student By ID");
            if (counter == 0){
                cout<<"There is no student to delete! " <<endl;
                break;
            }
            //foundindex = -1 (not found)
            int foundIndex = searchstudentbyID(studentarray, counter);
            if (foundIndex >= 0)
            {
                //ask for the user confirmation Y/N
                char confirmLetter;
                cout << " Are you sure ? Y/n : ";
                cin >> confirmLetter;
                if (confirmLetter == 'Y' || confirmLetter == 'y'){
                    //perform the delete poeration
                    for (int i = foundIndex; i < counter - 1; i++){
                        studentarray[i] = studentarray[i+1];
                    }
                    counter--;
                    cout<<"Delete student succesfully...!!"<<endl;
                }
                else if (confirmLetter == 'n')
                {
                    cout<<"Delete operation isaborted successfully!"<<endl;
                }
                else
                {
                    cout << "Invalid option!! , Try again!!"<<endl;
                }
            }
        }
        break;
        case 4:
        system("cls");
        {
            searchstudentbyID(studentarray, counter);
        }
        pressenter();
        break;
        case 5:
        {
            if (counter == 0)
            {
                cout << "There is no data store in the system !" << endl;
                cout << "Please Input the data first !";
                break;
            }
            int showOption;
            
            do{
                showOption = printShowMenu();
                switch(showOption){
                    case 1: 
                    system("cls");
                    printlabel("Show Student ASC by ID");
                    sort(studentarray, studentarray+counter, idComparator);
                    printstudent(studentarray, counter);
                    break;
                    case 2:
                    system("cls");
                    printlabel("Show Student DESC (by average)");
                    sort(studentarray, studentarray+counter, averComparator);
                    printstudent(studentarray, counter);
                    break;
                    case 3:
                    system("cls");
                    printlabel("Show Student (ASC) by Name");
                    sort(studentarray, studentarray+counter, nameComparator);
                    printstudent(studentarray, counter);
                    break;
                    case 4: 
                        cout<<"Exit from show option!!"<<endl;
                    break;
                    default:
                    cout<<"Invalid option!! Choose again from 1 - 4 "<<endl;
                    break;
                }
            }while(showOption!=4);
        }
        break;
            pressenter();
        default:
            cout << "Exit From The Program! " << endl;
            break;
        }
    } while (option != 6);

    return 0;
}