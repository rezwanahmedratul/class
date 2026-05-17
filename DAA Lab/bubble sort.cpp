#include <iostream>
#include <vector>
using namespace std;

// Bubble Sort Function
void bubbleSort(vector<int>& arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function to print the vector
void printArray(const vector<int>& arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    cout << "Before Sorting: ";
    printArray(arr);

    bubbleSort(arr);

    cout << "After Sorting: ";
    printArray(arr);

    return 0;
}
