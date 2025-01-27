#ifndef ARRAYLSIB_H
#define ARRAYLSIB_H
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
__declspec(dllexport) void scanArray(int arr[], int size);

__declspec(dllexport) void printArray(int arr[], int size);

__declspec(dllexport) void initializeArray(int arr[], int size, int value);

__declspec(dllexport) int findMax(int arr[], int size);

__declspec(dllexport) int findMin(int arr[], int size);

__declspec(dllexport) void swapArray(int* n, int* b);

__declspec(dllexport) int sumArray(int arr[], int size);

__declspec(dllexport) double averageArray(int arr[], int size);

__declspec(dllexport) bool isSorted(int arr[], int size);

__declspec(dllexport) void reverseArray(int arr[], int size);

__declspec(dllexport) void countEvenOdd(int arr[], int size, int* evenCount, int* oddCount);

__declspec(dllexport) int secondLargest(int arr[], int size);

__declspec(dllexport) void elementFrequency(int arr[], int size);

__declspec(dllexport) int removeDuplicates(int arr[], int size);

__declspec(dllexport) int findMajorityElement(int arr[], int size);

__declspec(dllexport) int binarySearch(int arr[], int size, int target);

__declspec(dllexport) void selectionSort(int arr[], int size);

__declspec(dllexport) int linearSearch(int arr[], int size, int target);

__declspec(dllexport) void leftShift(int arr[], int size, int rotations);

__declspec(dllexport) void rightShift(int arr[], int size, int rotations);

__declspec(dllexport) int findMissingNumber(int arr[], int size);

__declspec(dllexport) void bubbleSort(int arr[], int size);

__declspec(dllexport) void findPairsWithSum(int arr[], int size, int sum);

__declspec(dllexport) void findSubArrayWithSum(int arr[], int size, int sum);

__declspec(dllexport) int LongestIncreasingSubSequence(int arr[], int size);

__declspec(dllexport) int findMajorityElement(int arr[], int size) ;

__declspec(dllexport) void findDuplicates(int arr[], int size);

__declspec(dllexport) void findIntersection(int arr1[], int size1, int arr2[], int size2);

__declspec(dllexport) void findUnion(int arr1[], int size1, int arr2[], int size2);
#endif
