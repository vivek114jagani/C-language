#include <stdio.h>

// Function to find the largest element of an array
int find_largest(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int arr[100];
    int n;

    // Prompt the user to input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Prompt the user to input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Call the find_largest function to find the largest element of the array
    int largest = find_largest(arr, n);

    // Print the largest element of the array
    printf("The largest element of the array is %d.\n", largest);

    return 0;
}
