#include <iostream>
using namespace std;

void k(int *arr, int size, int *s, int *d)
{
    *s = 0;
    *d = 1;
    for (size_t i = 0; i < size; i++)
    {
        *s += arr[i];
        *d *= arr[i];
    }
}




int main()
{
    srand(time(0));
    const int full_row = 100;
    int size;
    do
    {
        cout << "Enter the number of rows: ";
        cin >> size;
    } while (size < 1 || size > 100);
    cout << endl;
    int arr[full_row];
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 20 - 10;
    }
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    int s,d;
    cout << endl;

    k(arr, size, &s, &d);

    cout << "Amount: " << s << endl;
    cout << "Product: " << d << endl;

	return 0;
}