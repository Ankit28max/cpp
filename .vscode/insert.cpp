#include <iostream>
using namespace std;

void insert_at_index(int arr[], int *size, int val, int index)
{
    for (int i = *size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[index] = val;
    (*size)++;
}

int main()
{

    int arr[100];
    int size = 0;

    insert_at_index(arr, &size, 100, 2);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}