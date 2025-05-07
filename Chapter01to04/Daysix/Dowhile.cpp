#include <iostream>
using namespace std;
int main()
{
    system("clear");
    int option = 0;
    do
    {
        cout << "[+] Welcome to Program One [+]" << endl;
        cout << "1. Open Calculator" << endl;
        cout << "2. Odd/Even Printers " << endl;
        cout << "3. Days Finder (Month(1-12))" << endl;
        cout << "4. Exit " << endl;
        cout << "-> Choose your option(1-4): ";
        cin >> option;
        system("clear");
        switch (option)
        {
            
            case 1:
            {
                float value1, value2, result = 0;
                char op;
                cout << "[+] Calculate Program [+]";
                cout << "-> Choose option ( +, -, *, /, ) : ";
                cin >> op;
                switch (op)
                {
                    case '+':
                    system("clear");
                    cout << "Input value1 : ";
                    cin >> value1;
                    cout << "Input value2 : ";
                    cin >> value2;
                    result = value1 + value2;
                    break;
                    case '-':
                    system("clear");
                    cout << "Input value1 : ";
                    cin >> value1;
                    cout << "Input value2 : ";
                    cin >> value2;
                    result = value1 - value2;
                    break;
                    case '*':
                    system("clear");
                    cout << "Input Value1 : ";
                    cin >> value1;
                    cout << "input Value2 : ";
                    cin >> value2;
                    result = value1 * value2;
                    break;
                    case '/':
                    system("clear");
                    cout << "Input value1 : ";
                    cin >> value1;
                    cout << "Input value2 : ";
                    cin >> value2;
                    result = value1 / value2;
                    break;
                    default:
                    system("clear");
                    cout << "Invalid Option !! Please try again !!"
                    << endl;
                    break;
                }
                cout << "The Result is : " << result << endl;
            }
            break;
            case 2:
            {
                int op, n;
                cout << "[+] Odd/Even Printer [+]" << endl;
                cout << "1.Print Odd number" << endl;
                cout << "2.Print Even number" << endl;
                cout << "Choose Option : ";
                cin >> op;
                switch (op)
                {
                    case 1:
                    cout << "-> Enter Number : ";
                    cin >> n;
                    for (int i = 1; i <= n; i++)
                    {
                        if (i % 2 == 0)
                        continue;
                        cout << " " << i;
                    }
                    cout << " " << endl;
                    break;
                    case 2:
                    cout << "-> Enter Number : ";
                    cin >> n;
                    for (int i = 1; i <= n; i++)
                    {
                        if (i % 2 != 0)
                        continue;
                        cout << " " << i;
                    }
                    cout << " " << endl;
                    break;
                    default:
                    cout<<"Please Try again!!"<<endl;
                    break;
                }
            }
            break;
            case 3:
            int day, month;
            cout << "[<] Days Finder Program [>]";
            cout << "Please inter the month (1-12) to find day : ";
            cin  >> month;
            switch (month)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                day = 31;
                break;
                
                case 4:
                case 6:
                case 9:
                case 11:
                day = 30;
                break;
                
                case 2:
                day = 28;
                break;
                
                default:
                cout<<"This month isn't avillable"<<endl;
                break;
            }
            if(month >= 1 && month <=12)
            {
                cout<<"Month : "<<month<<" have : "<<day<<" Days"<<endl;
            }
            break;
            case 4:
            cout << "[<] Exit from the Program! [>]"<<endl;
            break;
            default:
            cout<<"Please Try again!!"<<endl;
            break;
        }
    } while (option != 4);
    return 0;
}