#include <iostream>
using namespace std;

int binocoef(int n, int k)
{
    int res = 1;

    if (k > n - k)
        k = n - k;

    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

void printTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int m = 0; m <= i; m++)
        {
            cout << "\t" << binocoef(i, m);
        }
        cout << endl;  
    }
}

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    printTriangle(n);

    return 0;
}
