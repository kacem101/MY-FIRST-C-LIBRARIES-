#include"ARRAYSLIB.h"
#include<stdio.h>
#include<stdbool.h>
int main(){
	  printf("=== Testing Array Functions ===\n");

    // Test scanArray and printArray
    int arr1[5];
    printf("Enter 5 elements for the array:\n");
    scanArray(arr1, 5);
    printf("Array elements: ");
    printArray(arr1, 5);

    // Test initializeArray
    int arr2[5];
    initializeArray(arr2, 5, 3);
    printf("\nInitialized Array: ");
    printArray(arr2, 5);

    // Test findMax and findMin
    printf("\nMax value in arr1: %d\n", findMax(arr1, 5));
    printf("Min value in arr1: %d\n", findMin(arr1, 5));

    // Test sumArray and averageArray
    printf("Sum of arr1: %d\n", sumArray(arr1, 5));
    printf("Average of arr1: %.2f\n", averageArray(arr1, 5));

    // Test isSorted
    printf("Array is sorted: %s\n", isSorted(arr1, 5) ? "Yes" : "No");

    // Test reverseArray
    reverseArray(arr1, 5);
    printf("Reversed Array: ");
    printArray(arr1, 5);

    // Test countEvenOdd
    int evenCount = 0, oddCount = 0;
    countEvenOdd(arr1, 5, &evenCount, &oddCount);
    printf("Even Count: %d, Odd Count: %d\n", evenCount, oddCount);

    // Test secondLargest
    printf("Second Largest in arr1: %d\n", secondLargest(arr1, 5));

    // Test elementFrequency
    printf("\nElement Frequencies in arr1:\n");
    elementFrequency(arr1, 5);

    // Test removeDuplicates
    int newSize = removeDuplicates(arr1, 5);
    printf("\nArray after removing duplicates: ");
    printArray(arr1, newSize);

    // Test findMajorityElement
    int majority = findMajorityElement(arr1, newSize);
    if (majority != -1)
        printf("\nMajority Element: %d\n", majority);
    else
        printf("\nNo Majority Element found\n");

    // Test binarySearch
    int target = 3;
    int index = binarySearch(arr1, newSize, target);
    printf("Binary Search for %d: %s\n", target, (index != -1) ? "Found" : "Not Found");

    // Test selectionSort
    selectionSort(arr1, newSize);
    printf("\nArray after Selection Sort: ");
    printArray(arr1, newSize);

    // Test linearSearch
    target = 3;
    index = linearSearch(arr1, newSize, target);
    printf("\nLinear Search for %d: %s\n", target, (index != -1) ? "Found" : "Not Found");

    // Test leftShift
    leftShift(arr1, newSize, 2);
    printf("\nArray after 2 left shifts: ");
    printArray(arr1, newSize);

    // Test rightShift
    rightShift(arr1, newSize, 2);
    printf("\nArray after 2 right shifts: ");
    printArray(arr1, newSize);

    // Test findMissingNumber
    int arr3[] = {1, 2, 4, 5, 6};
    int missing = findMissingNumber(arr3, 5);
    printf("\nMissing Number in arr3: %d\n", missing);

    // Test bubbleSort
    bubbleSort(arr3, 5);
    printf("Array after Bubble Sort: ");
    printArray(arr3, 5);

    // Test findPairsWithSum
    printf("\nPairs with sum 6 in arr3:\n");
    findPairsWithSum(arr3, 5, 6);

    // Test findSubArrayWithSum
    printf("\nSubarray with sum 6 in arr3:\n");
    findSubArrayWithSum(arr3, 5, 6);

    // Test LongestIncreasingSubSequence
    int lis = LongestIncreasingSubSequence(arr3, 5);
    printf("\nLongest Increasing Subsequence Length: %d\n", lis);

    // Test findDuplicates
    printf("\nDuplicate elements in arr3:\n");
    findDuplicates(arr3, 5);

    // Test findIntersection and findUnion
    int arr4[] = {3, 4, 5, 6, 7};
    printf("\nIntersection of arr3 and arr4:\n");
    findIntersection(arr3, 5, arr4, 5);

    printf("Union of arr3 and arr4:\n");
    findUnion(arr3, 5, arr4, 5);

    return 0;
    return 0;
}
