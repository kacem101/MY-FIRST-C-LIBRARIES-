#ifndef CYPHERSLIB_H
#define CYPHERSLIB_H

#include<stdio.h>
#include<stdbool.h>

__declspec(dllexport) void printArray(int arr[], int size);

__declspec(dllexport) bool isCharacter(char c);

__declspec(dllexport) int stringLenght(char* str);

__declspec(dllexport) int stringLenghtconst(const char* str);

__declspec(dllexport) void caesarCipher(char text[], int shift);

__declspec(dllexport) void atbashCipher(char* text);

__declspec(dllexport) void substiutionCipher(char* text, const char* key);

__declspec(dllexport) bool isUpper(char c);

__declspec(dllexport) void readyForRailCipher(const char* text, char* temp);

__declspec(dllexport) void railFence(char* text, char* result, int depth);

__declspec(dllexport) void railFenceCipher(const char* text, char* result, int depth);

__declspec(dllexport) int numberOfDigit(int n);

__declspec(dllexport) int intpower(int b, int n);

__declspec(dllexport) void xorCipher(char* text, const char* key, char* textchi);

__declspec(dllexport) void vigenereCipher(char* text, const char* key, int encrypt);

#endif
