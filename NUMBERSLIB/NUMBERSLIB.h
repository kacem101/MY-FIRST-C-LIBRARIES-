#ifndef NUMBERSLIB_H
#define NUMBERSLIB_H
#include<stdbool.h>
#include<math.h>
__declspec(dllexport) unsigned long long factlonglong(int n);
__declspec(dllexport) long long powerlonglong(int b, int n);
__declspec(dllexport) long long choselonglong(int n, int k);
__declspec(dllexport) long long stirling(int n, int k);
__declspec(dllexport) int removeZero(int n);
__declspec(dllexport) int intpower(int b, int n);
__declspec(dllexport) int chose(int n, int k);
__declspec(dllexport) long choselong(int n, int k);
__declspec(dllexport) int numberOfDigit(int n);
__declspec(dllexport) int sumOfDigits(int num);
__declspec(dllexport) int reverseNumber(int num);
__declspec(dllexport) bool isPalindrome(int num);
__declspec(dllexport) bool isPrime(int num);
__declspec(dllexport) int gcd(int a, int b);
__declspec(dllexport) int lcm(int a, int b);
__declspec(dllexport) long factorial(int num);
__declspec(dllexport) bool isEven(int num);
__declspec(dllexport) void primeFactors(int num);
__declspec(dllexport) bool isArmstrong(int num);
__declspec(dllexport) void fibonacciSeries(int n);
__declspec(dllexport) int sumDivisors(int num);
__declspec(dllexport) bool isPerfect(int num);
__declspec(dllexport) bool isMagic(int num);
__declspec(dllexport) bool isAutomorphic(int num);
__declspec(dllexport) void toBinary(int num);
__declspec(dllexport) bool isNarcissistic(int num);
__declspec(dllexport) double sqrtApprox(int num);
__declspec(dllexport) double power(int base, int exp);
__declspec(dllexport) bool isHappy(int num);
__declspec(dllexport) bool isAbundant(int num);
__declspec(dllexport) bool isDeficient(int num);
__declspec(dllexport) int sumEvenFibonacci(int n);
__declspec(dllexport) bool isHarshad(int num);
__declspec(dllexport) unsigned long catalanNumber(int n);
__declspec(dllexport) void pascalTriangle(int n);
__declspec(dllexport) unsigned long bellNumber(int n);
__declspec(dllexport) bool isKaprekar(int num);
__declspec(dllexport) bool isSmith(int num);
__declspec(dllexport) int sumOfPrimes(int n);


#endif
