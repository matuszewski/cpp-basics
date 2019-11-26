#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout << "Type how many odd and even digits you'd like to get: " << endl;
    cin >> n;

    cout << "Odds:" << endl;
    for (int i = 0; i <= n; i++) // prints odd numbers
    {
        cout << 2 * i + 1 << " ";
    }
    cout << endl;

    cout << "Evens:" << endl;
    for (int i = 0; i <= n; i++) // prints even numbers
    {
        cout << 2 * i << " ";
    }
    cout << endl;

    return 0;
}