#include "Utils.h"
#include <iostream>

void display(int* arr, int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        if (i != 0)
            cout << ", ";
        cout << arr[i];
    }
    cout << "]" << endl;
}