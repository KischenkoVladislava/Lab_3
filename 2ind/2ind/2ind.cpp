#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n, sum, sum1 = 0, sum2 = 0;
    cout << "Введите размер массива" << endl;
    cin >> n;
    while (n % 2 != 0)
    {
        cout << "Нельзя поделить" << endl;
        cin >> n;
    }
    int* a = new int [n];
    cout << "Введите элементы массива" << endl;
    for (int i = 0; i < n; i++)
    {
            cin >> a[i];
    }
    cout << "Массив" << endl;
    for (int i = 0; i < n; i++)
    {
            cout << a[i] << " ";
    }
    for (int i = 0; i < n/2; i++)
    {
        sum1 += a[i];   
    }
    for (int i = n / 2; i < n ; i++)
    {
        sum2 += a[i];
    }
    sum = sum1 - sum2;
    cout << endl << "Разность: " << sum;
    return 0;
}

