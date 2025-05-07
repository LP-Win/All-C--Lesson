#include <iostream>
using namespace std;

int main()
{
    system("clear");
    // char, int, enum
    int option = 0;
    cout << "[+] Food menu : " << endl;
    cout << "1. Fried rice : 2.5$" << endl;
    cout << "2. Chicken Rice : 3.5$" << endl;
    cout << "3. Ramen : 4$" << endl;
    cout << "4. Water : 1$" << endl;
    cout << "5. Tea : 1.5$" << endl;
    cout << "6. Coffee : 5$" << endl;
    cout << "[+] Choose your menu : ";
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "You have choose Fried Rice. Thank you!" << endl;
        break;
    case 2:
        cout << "You have choose Chicken Rice. Thank you!" << endl;
        break;
    case 3:
        cout << "You have choose Ramen. Thank you!" << endl;
        break;
    case 4:
        cout << "You have choose Water. Thank you!" << endl;
        break;
    case 5:
        cout << "You have choose Tea. Thank you!" << endl;
        break;
    case 6:
        cout << "You have choose Coffee. Thank you!" << endl;
        break;

    default:
        cout << "This option isn't avilable. Please try again!";
        break;
    }

    return 0;
}