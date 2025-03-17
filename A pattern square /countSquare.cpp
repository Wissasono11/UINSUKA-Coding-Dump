#include <iostream>
using namespace std;

int main()
{
    int n, x, y;

    cout << "Enter the N that you want to calculate: ";
    cin >> n;
    for (x = 0; x <= n; x++)
    {
        for (y = x; y <= x + 1; y++)
        {
            cout << "Put a Red square at " << "(" << x << "," << y << ")" << endl;
        }
    }
    if (n % 2 == 1)
    {
        cout << "Put a Blue square at " << "(" << n + 2 << "," << n << ")" << endl;
        cout << "Put a Blue square at " << "(" << n + 2 << "," << n + 2 << ")" << endl;
    }
    else
    {
        cout << "Put a Green square at " << "(" << n + 1 << "," << n + 1 << ")" << endl;
    }
    string choice;

    cout << "Do you want to count again (y/n): " << endl;
    cin >> choice;
    if (choice == "y")
    {
        main();
    }
    else
    {
        cout << "Thank you for using this program :)" << endl;
    }
    return 0;
}
