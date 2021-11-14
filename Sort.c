#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of your array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Array Elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array after sorting in Ascending order is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Array after sorting in Descending order is :\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

// #include <stdio.h>
// void quicksort(int[] arr, int low, int high)
// {
//     if (low >= high)
//         return;
//     int pivotPosition = partition(arr, low, high);
//     quicksort(arr, low, pivotPosition - 1);
//     quicksort(arr, pivotPosition + 1, high);
//     int partition(int[] arr, int low, int high)
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
//     int main()
//     {
//         int n, l;
//         printf("Enter size of your array:");
//         scanf("%d", &n);
//         int arr[n];
//         printf("Enter Array Elements:\n");
//         for (int i = 0; i < n; i++)
//         {
//             scanf("%d", &arr[i]);
//             l = i;
//         }
//         quicksort(arr, arr[l-l], arr[l]);
//         printf("Array after sorting  is :\n");
//         for (int i = 0; i < n; i++)
//         {
//             printf("%d", arr[i]);
//         }
//         return 0;
//     }

//     // // C program to sort the array in an
//     // // ascending order using selection sort
//     // #include <stdio.h>
//     // void swap(int *xp, int *yp)
//     // {
//     //     int temp = *xp;
//     //     *xp = *yp;
//     //     *yp = temp;
//     // }
//     // // Function to perform Selection Sort
//     // void selectionSort(int arr[], int n)
//     // {
//     //     int i, j, min_idx;
//     //     // One by one move boundary of unsorted subarray
//     //     for (i = 0; i < n - 1; i++)
//     //     {
//     //         // Find the minimum element in unsorted array
//     //         min_idx = i;
//     //         for (j = i + 1; j < n; j++)
//     //             if (arr[j] < arr[min_idx])
//     //                 min_idx = j;
//     //         // Swap the found minimum element
//     //         // with the first element
//     //         swap(&arr[min_idx], &arr[i]);
//     //     }
//     // }
//     // // Function to print an array
//     // void printArray(int arr[], int size)
//     // {
//     //     int i;
//     //     for (i = 0; i < size; i++)
//     //         printf("%d ", arr[i]);
//     //     printf("\n");
//     // }
//     // // Driver code
//     // int main()
//     // {
//     //     int arr[] = {0, 23, 14, 12, 9};
//     //     int n = sizeof(arr) / sizeof(arr[0]);
//     //     printf("Original array: \n");
//     //     printArray(arr, n);
//     //     selectionSort(arr, n);
//     //     printf("\nSorted array in Ascending order: \n");
//     //     printArray(arr, n);
//     //     return 0;
//     // }

//     // // C program for insertion sort
//     // #include <math.h>
//     // #include <stdio.h>
//     // /* Function to sort an array using insertion sort*/
//     // void insertionSort(int arr[], int n)
//     // {
//     //     int i, key, j;
//     //     for (i = 1; i < n; i++)
//     //     {
//     //         key = arr[i];
//     //         j = i - 1;
//     //         /* Move elements of arr[0..i-1], that are
//     //           greater than key, to one position ahead
//     //           of their current position */
//     //         while (j >= 0 && arr[j] > key)
//     //         {
//     //             arr[j + 1] = arr[j];
//     //             j = j - 1;
//     //         }
//     //         arr[j + 1] = key;
//     //     }
//     // }
//     // // arr utility function to print an array of size n
//     // void printArray(int arr[], int n)
//     // {
//     //     int i;
//     //     for (i = 0; i < n; i++)
//     //         printf("%d ", arr[i]);
//     //     printf("\n");
//     // }
//     // /* Driver program to test insertion sort */
//     // int main()
//     // {
//     //     int arr[] = {12, 11, 13, 5, 6};
//     //     int n = sizeof(arr) / sizeof(arr[0]);
//     //     insertionSort(arr, n);
//     //     printArray(arr, n);
//     //     return 0;
//     // }
