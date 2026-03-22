#include <iostream>
using namespace std;

template <class T>
class SortArray
{
private:
    T arr[100];
    int size;

public:
    SortArray(int s)
    {
        size = s;
    }

    void Input()
    {
        cout << "Enter " << size << " elements:" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "arr[" << i << "] = ";
            cin >> arr[i];
        }
    }

    void Sort()
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

    void Show()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int n = 5;

    cout << "Integer array:" << endl;
    SortArray<int> intArray(n);
    intArray.Input();
    intArray.Sort();
    cout << "Sorted integer array: ";
    intArray.Show();

    cout << endl;

    cout << "Double array:" << endl;
    SortArray<double> doubleArray(n);
    doubleArray.Input();
    doubleArray.Sort();
    cout << "Sorted double array: ";
    doubleArray.Show();

    cout << endl;

    cout << "Char array:" << endl;
    SortArray<char> charArray(n);
    charArray.Input();
    charArray.Sort();
    cout << "Sorted char array: ";
    charArray.Show();

    return 0;
}