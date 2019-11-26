#include <iostream>

using namespace std;

int main()
{
    int n = 0; // number of digits to print
    cout << "Type how many digits of the Fibonacci sequence you'd like to get: " << endl;
    cin >> n;

    int f_sequence[n];

    f_sequence[0] = 0;
    f_sequence[1] = 1;

    for (int i = 2; i < n; i++)
    {
        f_sequence[i] = f_sequence[i - 1] + f_sequence[i - 2];
    }

    for (int j = 0; j < n; j++)
    {
        cout << f_sequence[j] << " ";
    }
    return 0;
}