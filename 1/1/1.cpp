#include <iostream>
using namespace std;
int main()
{
    setlocale (LC_ALL, "Russian");
    int n, m, b, c, i, j;
    cout << "Введите число элементов массива" << endl;
    cin >> n;
    cout << "Массив:" << endl;
    int* a = new int[n];
    for (i = 0; i < n; i++)
    {
        if ((i % 10 == 0) && (i > 0))
        { 
            cout << endl;
        }
        a[i] = (rand() % (45 + 30 + 1) - 30);
            cout << a[i] << " ";
    } 
    cout << endl << "Массив в обратном направлении:" << endl;
    for (i = 0; i < n/2; i++)
    {
            b = a[i];
            a[i] = a[n - i - 1];
            a[n - i - 1] = b;
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}
