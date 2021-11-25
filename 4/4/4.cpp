#include <iostream>
using namespace std;
int slogenie(int a[3][3], int b[3][3])
{
    int c[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return c[3][3];
}
int vichitanie(int a[3][3], int b[3][3])
{
    int c[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return c[3][3];
}
int srchislo(int a[3][3], int b[3][3])
{
    int sum, sr;
    int sum1 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum1 += a[i][j];
        }
    }
    int sum2 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum2 += b[i][j];
        }
    }
    sum = sum1 + sum2;
    sr = sum / 18;
    return sr;
}
int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = (rand() % (10 - 0 + 1) + 0);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "vvv0" << endl;
    int b[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[i][j] = (rand() % (10 - 0 + 1) + 0);
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << slogenie(a, b);
    cout << endl;
    cout << vichitanie(a, b);
    cout << endl;
    cout << srchislo(a, b);
    return 0;
}
  