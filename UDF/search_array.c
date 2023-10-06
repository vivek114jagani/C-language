#include <stdio.h>

// Function to search for an element in an array
int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[100];
    int n, x;

    // Prompt the user to input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Prompt the user to input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Prompt the user to input the element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &x);

    // Call the search function to search for the element in the array
    int index = search(arr, n, x);

    // Print the result of the search
    if (index == -1)
    {
        printf("The element %d is not found in the array.\n", x);
    }
    else
    {
        printf("The element %d is found at index %d in the array.\n", x, index);
    }

    return 0;
}
