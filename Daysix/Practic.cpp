#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int option = 0;
    do
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
        system("clear");
        cout << "The Result is : " << result << endl;

    } while (option != 4);

    return 0;
}