#ifndef STRINGSLIB_H
#define STRINGSLIB_H
#include<stdio.h>
#include<stdbool.h>
__declspec(dllexport) int stringLenght(char* str);

__declspec(dllexport) int stringLenghtconst(const char* str);

__declspec(dllexport) void stringCopy(char* dest, const char* src);

__declspec(dllexport) void stringCopyGeneral(char* dest, char* src);

__declspec(dllexport) int stringCompare(const char* str1, const char* str2);

__declspec(dllexport) int stringCompareGenral(char* str1, char* str2);

__declspec(dllexport) bool isEmpty(char* str);

__declspec(dllexport) void stringConcat(char* dest, const char* src);

__declspec(dllexport) void stringConcatGeneral(char* dest, char* src);

__declspec(dllexport) void swapChar(char* n, char* b);

__declspec(dllexport) void reverseString(char* str);

__declspec(dllexport) bool isCharacter(char c);

__declspec(dllexport) bool isUpper(char c);

__declspec(dllexport) void toUpperCase(char* str);

__declspec(dllexport) void toLowerCase(char* str);

__declspec(dllexport) bool isPalindrome(char* str);

__declspec(dllexport) void countVowelsConsonants(char* str, int* vowels, int* consonants);

__declspec(dllexport) int findSubstring(const char* str, const char* sub);

__declspec(dllexport) void removeWhitespaces(char* str);

__declspec(dllexport) void printArray(int arr[], int size);

__declspec(dllexport) void initializeArray(int arr[], int size, int value);

__declspec(dllexport) void charFrequency(char* str, int* freq);

__declspec(dllexport) bool isAnagram(char* str1, char* str2);

__declspec(dllexport) int countWords(char* str);

__declspec(dllexport) void removeDuplicates(char* str);

__declspec(dllexport) void compressString(char* str, char* result);

__declspec(dllexport) void longestWord(char* str, char* result);

__declspec(dllexport) void rightShiftString(char* str, int rotations);

__declspec(dllexport) bool isRotation(char* str1, char* str2);

__declspec(dllexport) int countChar(char* str, char ch);

__declspec(dllexport) int findSubstringGeneral(char* str, char* sub, int start);

__declspec(dllexport) void removeHashtag(char* str);

__declspec(dllexport) void findAndReplace(char* str, char* find, char* replace);
#endif
