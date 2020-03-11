// C++ program to implement Bubble sort algorithm

#include <iostream>
using namespace std;

void swap(int *d, int *p)
{
    int temp = *d;
    *d = *p;
    *p = temp;
}


void bSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)


    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
}


void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main()
{
    int arr[] = {10, 2, 8, 20, 22, 1, 100, 3, 6, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    bSort(arr, n);
    cout<<"Sorted array: \n";
    printArray(arr, n);
    return 0;
}
