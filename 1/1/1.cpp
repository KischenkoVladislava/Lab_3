#include <iostream>
using namespace std;
int main()
{
    setlocale (LC_ALL, "Russian");
    int n;
    cout << "Введите число элементов массива" << endl;
    cin >> n;
    while (n <= 0)
    {
        cout << "Число элементов массива не может быть раным нулю или меньше" << endl;
        cout << "Введите число элементов массива еще раз" << endl;
        cin >> n;
    }
    cout << "Массив:" << endl;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        if ((i % 10 == 0) && (i > 0))
        { 
            cout << endl;
        }
        a[i] = (rand() % (45 + 30 + 1) - 30);
            cout << a[i] << " ";
    } 
    cout << endl << "Массив в обратном направлении, игнорируя отрицательные элементы:" << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] >= 0)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}
