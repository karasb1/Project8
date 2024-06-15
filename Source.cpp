#include <iostream>
#include <ctime>
using namespace std;


void k(int* arr, int size, int& pos, int& neg, int& zero)
{
    pos = 0;
    neg = 0;
    zero = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            pos++;
        }
        else if (arr[i] < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
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
        arr[i] = rand() % 20-10;
    }
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    int pos, neg, zero;
    cout << endl;

    k(arr, size, pos, neg, zero);

    cout << "Positive numbers:" << pos << endl;
    cout << "Negative numbers:" << neg << endl;
    cout << "Zero numbers:" << zero << endl;

	return 0;
}