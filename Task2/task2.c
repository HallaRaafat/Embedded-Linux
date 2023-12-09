
#include <stdio.h>

int binarySearch(int * arr, int size , int key) {

int low =0,high =size-1;
int mid =low+high/2;

    while (low <= high) {
        int mid = (low+high)/ 2;
        
        if (arr[mid] == key)
            return mid;
        
        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; // key not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter key element from 1 to 10 :");
    scanf("%d",&key);
           
    int result = binarySearch(arr, 10, key);
    
    if (result != -1)
        printf("Element found at index %d.\n", result);
    else
        printf("Element not found in the array.\n");

    return 0;
}

