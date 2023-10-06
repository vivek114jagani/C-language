#include <stdio.h>

// Function to sort an array in ascending or descending order
void sort_array(int arr[], int n, char order)
{
    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // Sort in ascending order
            if (order == 'a')
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
            // Sort in descending order
            else if (order == 'd')
            {
                if (arr[i] < arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}

int main()
{
    int arr[100];
    int n;
    char order;

    // Prompt the user to input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Prompt the user to input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Prompt the user to input the sorting order
    printf("Enter the sorting order (a for ascending, d for descending): ");
    scanf(" %c", &order);

    // Call the sort_array function to sort the array in the specified order
    sort_array(arr, n, order);

    // Print the sorted array
    printf("The sorted array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
