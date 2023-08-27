#include <iostream>
using namespace std;

// QuickSort Program
void QuickSort(int* array, int low, int high)
{
    if (low >= high)
        return;
    int i = low, j = high;
    int key = array[low];
    while (i < j) {
        while (array[j] >= key && i < j)
            j--;
        array[i] = array[j];
        while (array[i] <= key && i < j)
            i++;
        array[j] = array[i];
    }
    array[i] = key;
    QuickSort(array, low, i - 1);
    QuickSort(array, i + 1, high);
}

int main()
{
    int array[] = { 49, 38, 65, 97, 76, 13, 27, 49 };
    int length = sizeof(array) / sizeof(*array);

    cout << "original sequence: ";
    for (int i = 0; i < length; i++)
        cout << array[i] << " ";
    cout << endl;

    QuickSort(array, 0, length - 1);
    cout << "sorted sequence: ";
    for (int i = 0; i < length; i++)
        cout << array[i] << " ";

    return 0;
}
