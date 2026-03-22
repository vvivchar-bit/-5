#include <iostream>
using namespace std;

template <class T>
void BubbleSort(T arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <class T>
void ShowArray(T arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[5] = { 5, 2, 8, 1, 3 };
    double b[5] = { 4.4, 1.1, 3.3, 0.5, 2.2 };
    char c[5] = { 'd', 'a', 'e', 'b', 'c' };

    cout << "Before sorting integers: ";
    ShowArray(a, 5);
    BubbleSort(a, 5);
    cout << "After sorting integers: ";
    ShowArray(a, 5);

    cout << endl;

    cout << "Before sorting doubles: ";
    ShowArray(b, 5);
    BubbleSort(b, 5);
    cout << "After sorting doubles: ";
    ShowArray(b, 5);

    cout << endl;

    cout << "Before sorting chars: ";
    ShowArray(c, 5);
    BubbleSort(c, 5);
    cout << "After sorting chars: ";
    ShowArray(c, 5);

    return 0;
}
