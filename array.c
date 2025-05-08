// largerst number in the array

#include <stdio.h>

int main()
{
    int arr[] = {3, 9, 4, 6, 2};
    int big = arr[0];            
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > big)
        {
            big = arr[i];
        }
    }

    printf("Largest element is: %d\n", big);
    return 0;
}

// second largerst number in the array using bubble sort

#include <stdio.h>

int main()
{
    int arr[] = {3, 9, 4, 6, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    int temp;

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    printf("Sorted array: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Largest Element in this array %d \n", arr[len - 1]);
    printf("Second Largest Element in this array %d ", arr[len - 2]);

    return 0;
}


//  reverse array 
#include <stdio.h>

int main()
{
    int arr[] = {3, 9, 4, 6, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    int temp;

    for (int i = 0; i < len / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }

    printf("Reversed array: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// palidrome number 
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int real_number = n;
    int res = 0;

    while (n != 0)
    {
        int remainder = n % 10;
        res = res * 10 + remainder;
        n = n / 10;
    }

    if (real_number == res)
    {
        printf("Palindrome number: %d\n", res);
    }
    else
    {
        printf("Not a palindrome number: %d\n", res);
    }

    return 0;
}

// Linear Search
#include <stdio.h>

    int
    main()
{
    int arr[] = {12, 3, 4, 2, 55};
    int target = 12; 
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        if (target == arr[i])
        {
            printf("Target found at index: %d\n", i);
            return 0;
        }
    }

    printf("Target not found.\n");
    return 0;
}


// Binary search ---> work only in the sorted array
#include <stdio.h>
int find_number(int arr[], int target, int size)
{
    int min = 0;
    int max = size;
    while (min <= max)
    {
        int mid = (min + max) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 23, 55, 77, 86};
    int target = 8;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = find_number(arr, target, size);
    if (result != -1)
    {
        printf("%d at index %d", target, result);
    }
    else
    {
        printf("%d is not found", target);
    }
    return 0;
}


// bubble sort
#include <stdio.h>
void peint_arr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {2, 4, 2, 55, 3, 27, 8};
    int len = sizeof(arr) / sizeof(arr[0]);
    peint_arr(arr, len);
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    peint_arr(arr, len);
}

// selection sort
#include <stdio.h>
void peint_arr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {2, 4, 2, 55, 3, 27, 8};
    int len = sizeof(arr) / sizeof(arr[0]);
    peint_arr(arr, len);
    int min;
    for (int i = 0; i < len - 1; i++)
    {
        min = i;
        for (int j = i+1; j < len; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    peint_arr(arr, len);
}