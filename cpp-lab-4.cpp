#include <iostream>
using namespace std;

void InitializeMassive(long* mas, int n)
{
    for (int i = 0; i <= n; i++) {
        mas[i] = i + 1;
    }
}

void CanDivideEvenly(long* massiv, int n)
{
    int sum_prog = ((n + 1) * n) / 2;
    if (sum_prog % 2 != 0)
        cout << "NO" << endl;
    else {
        if (n % 4 == 0) {
            cout << "YES" << endl;
            cout << "Count of slots: " << n / 2 << endl;

            for (int i = 0; i < (n / 2); i = i + 2)
                cout << massiv[i] << "(" << i << "), " << massiv[n - i - 1] << "(" << n - i - 1 << "), ";

            cout << endl;
            cout << "Count of slots: " << n / 2 << endl;

            for (int i = 1; i < (n / 2); i = i + 2)
                cout << massiv[i] << ", " << massiv[n - i - 1] << ", ";

        }
        else if ((n + 1) % 4 == 0) {
            cout << "YES" << endl;
            cout << "Count of slots: " << n / 2 + 1 << endl;

            for (int i = 0; i < (n / 2); i = i + 2)
                cout << massiv[i] << "(" << i << "), " << massiv[n - i - 2] << "(" << n - i - 2 << "), ";

            cout << endl;
            cout << "Count of slots: " << n / 2 << endl;

            for (int i = 1; i < (n / 2); i = i + 2)
                cout << massiv[i] << ", " << massiv[n - i - 2] << ", ";

            cout << massiv[n - 1];
        }
    }
}

int main() {
    int n;
    cin >> n;
    long* massiv = new long[n];
    InitializeMassive(massiv, n);
    CanDivideEvenly(massiv, n);

    return 0;
}