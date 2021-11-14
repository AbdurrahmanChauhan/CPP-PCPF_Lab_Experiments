/* C++ implementation of QuickSort */
#include <bits/stdc++.h>
using namespace std;

// arr utility function to swap two elements
void swap(int *arr, int *b)
{
    int t = *arr;
    *arr = *b;
    *b = t;
}

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1);     // Index of smaller element 
    //and indicates the right position of pivot found so far

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

/* Function to print an array */
void printArrayAscending(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void printArrayDescending(int arr[], int size)
{
    int i;
    for (i = size - 1; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver Code
int main()
{
    int size;
    cout << ("Enter size of your array:");
    cin >> size;
    int arr[size];
    cout << ("Enter Array Elements:\n");
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "Sorted array in Ascending order is: \n";
    printArrayAscending(arr, n);
    cout << "Sorted array in Descending order is: \n";
    printArrayDescending(arr, n);
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << ("Enter size of your array:");
//     cin >> n;
//     int arr[n];
//     cout << ("Enter Array Elements:\n");
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int temp;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     cout << ("Array after sorting in Ascending order is :\n");
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n";
//     cout<<("Array after sorting in Descending order is :\n");
//     for (int i = n - 1; i >= 0; i--)
//     {
//        cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;
// class Sort
// {
// public:
//     static void quicksort(int[] arr, int low, int high)
//     {
//         if (low >= high)
//             return;
//         int pivotPosition = partition(arr, low, high);
//         quicksort(arr, low, pivotPosition - 1);
//         quicksort(arr, pivotPosition + 1, high);
//     }

// public:
//     static int partition(int[] arr, int low, int high)
//     {
//         int pivot = arr[high];
//         int left = low, right = high - 1;
//         while (left < right)
//         {
//             while (arr[left] < pivot)
//             {
//                 left++;
//             }
//             while (arr[right] > pivot)
//             {
//                 right--;
//             }
//             if (left >= right)
//             {
//                 break;
//             }
//             int temp = arr[left];
//             arr[left] = arr[right];
//             arr[right] = temp;
//         }
//         int temp = arr[left];
//         arr[left] = arr[high];
//         arr[high] = temp;
//         return left;
//     }
// };
// int main()
// {
//     int n, l;
//     cout << ("Enter size of your array:");
//     cin >> n;
//     int arr[n];
//     cout << ("Enter Array Elements:\n");
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         l = i;
//     }
//     quicksort(arr[], arr[0], arr[l]);
//     cout << ("Array after sorting  is :\n");
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
//     }
//     return 0;
// }
