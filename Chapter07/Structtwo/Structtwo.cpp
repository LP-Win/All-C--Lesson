#include <iostream>
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
        cout << "----------[Student Info]----------" << endl;
        cout << "Student ID : " << id << endl;
        cout << "Student Name : " << name << endl;
        cout << "Student Gender : " << gender << endl;
        cout << "Student Scores : " << endl;
        for (float score : scores)
            cout << " " << score;
        cout << endl;
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
void printlabel()
{
    cout << "-------- Message --------" << endl;
}
void pressenter()
{
    cout << "-------------- Press Enter To Comtinue --------------";
    cin.ignore();
    cin.get();
}

void initstudents(student studentarray[])
{
    studentarray[0] = {10, "LP", "male", "LLQ", {13, 14, 15}};
    studentarray[1] = {10, "LP", "male", "LLQ", {13, 14, 15}};
}

void searchstudentbyID(student studentarray[], int counter)
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
            printlabel();
            studentarray[i].output();
        }
    }
    if (foundIndex == -1)
    {
        cout << "There is no record with student id = " << studentID << endl;
    }
    return foundIndex;
}
int main()
{
    system("clear");
    int option;
    int n = 50;
    student studentarray[n];
    int counter = 1;

    // init data
    // initstudents(studentarray);
    do
    {
        system("clear");
        option = printMainMenu();
        switch (option)
        {
        case 1:
        {

            system("clear");
            studentarray[counter++].input();
            cout << "====> Successfully Inserted a new records !" << endl;
        }
        break;
        case 2:{
            if(counter == 0){
                cout <<"This is no student to update "<<endl;
                break;
            }
            int fountIndex = searchstudentbyID(studentarray, counter);

        }break;
        case 4:
        {
            searchstudentbyID(studentarray, counter);
        }
        break;
        case 5:
        {
            system("clear");
            if (counter == 0)
            {
                cout << "There is no data store in the system !" << endl;
                cout << "Please Input the data first !";
                break;
            }
            for (int i = 0; i < counter; i++)
            {
                studentarray[i].output();
            }
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