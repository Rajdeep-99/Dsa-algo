#include <stdio.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quick_sort(int arr[], int low, int high)
{
    if (low < high) {
        int q = partition(arr, low, high);

        quick_sort(arr, low, q - 1);
        quick_sort(arr, q + 1, high);
    }
}

int main()
{
    int arr[100],n; 
    printf("Enter the size of array...\t");
    scanf("%d",&n);
    printf("\nEnter the elements\n");
    for (int i = 0; i < n; i++) {
		scanf("%d",&arr[i]);
	}
    printf("Before performing quick sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    quick_sort(arr, 0, n - 1);

    printf("\nAfter performing quick sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
