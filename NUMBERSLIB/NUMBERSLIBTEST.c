#include"NUMBERSLIB.h"
#include <stdio.h>
#include <stdbool.h>
int main() {
    int choice, num, n, k, b, sum, size;
    
    while (1) {
        // Display menu
        printf("\n--- Interactive Test Menu ---\n");
        printf("1. Test factlonglong\n");
        printf("2. Test powerlonglong\n");
        printf("3. Test choselonglong\n");
        printf("4. Test stirling\n");
        printf("5. Test removeZero\n");
        printf("6. Test intpower\n");
        printf("7. Test chose\n");
        printf("8. Test choselong\n");
        printf("9. Test numberOfDigit\n");
        printf("10. Test sumOfDigits\n");
        printf("11. Test reverseNumber\n");
        printf("12. Test isPalindrome\n");
        printf("13. Test isPrime\n");
        printf("14. Test gcd\n");
        printf("15. Test lcm\n");
        printf("16. Test factorial\n");
        printf("17. Test isEven\n");
        printf("18. Test primeFactors\n");
        printf("19. Test isArmstrong\n");
        printf("20. Test fibonacciSeries\n");
        printf("21. Test sumDivisors\n");
        printf("22. Test isPerfect\n");
        printf("23. Test isMagic\n");
        printf("24. Test isAutomorphic\n");
        printf("25. Test toBinary\n");
        printf("26. Test isNarcissistic\n");
        printf("27. Test sqrtApprox\n");
        printf("28. Test power\n");
        printf("29. Test isHappy\n");
        printf("30. Test isAbundant\n");
        printf("31. Test isDeficient\n");
        printf("32. Test sumEvenFibonacci\n");
        printf("33. Test isHarshad\n");
        printf("34. Test catalanNumber\n");
        printf("35. Test pascalTriangle\n");
        printf("36. Test bellNumber\n");
        printf("37. Test isKaprekar\n");
        printf("38. Test isSmith\n");
        printf("39. Test sumOfPrimes\n");
        printf("0. Exit\n");

        // Get user choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &n);
                printf("factlonglong(%d) = %llu\n", n, factlonglong(n));
                break;
            case 2:
                printf("Enter base: ");
                scanf("%d", &b);
                printf("Enter exponent: ");
                scanf("%d", &n);
                printf("powerlonglong(%d, %d) = %lld\n", b, n, powerlonglong(b, n));
                break;
            case 3:
                printf("Enter n: ");
                scanf("%d", &n);
                printf("Enter k: ");
                scanf("%d", &k);
                printf("choselonglong(%d, %d) = %lld\n", n, k, choselonglong(n, k));
                break;
            case 4:
                printf("Enter n: ");
                scanf("%d", &n);
                printf("Enter k: ");
                scanf("%d", &k);
                printf("stirling(%d, %d) = %lld\n", n, k, stirling(n, k));
                break;
            case 5:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("removeZero(%d) = %d\n", num, removeZero(num));
                break;
            case 6:
                printf("Enter base: ");
                scanf("%d", &b);
                printf("Enter exponent: ");
                scanf("%d", &n);
                printf("intpower(%d, %d) = %d\n", b, n, intpower(b, n));
                break;
            case 7:
                printf("Enter n: ");
                scanf("%d", &n);
                printf("Enter k: ");
                scanf("%d", &k);
                printf("chose(%d, %d) = %d\n", n, k, chose(n, k));
                break;
            case 8:
                printf("Enter n: ");
                scanf("%d", &n);
                printf("Enter k: ");
                scanf("%d", &k);
                printf("choselong(%d, %d) = %ld\n", n, k, choselong(n, k));
                break;
            case 9:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("numberOfDigit(%d) = %d\n", num, numberOfDigit(num));
                break;
            case 10:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("sumOfDigits(%d) = %d\n", num, sumOfDigits(num));
                break;
            case 11:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("reverseNumber(%d) = %d\n", num, reverseNumber(num));
                break;
            case 12:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("isPalindrome(%d) = %d\n", num, isPalindrome(num));
                break;
            case 13:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("isPrime(%d) = %d\n", num, isPrime(num));
                break;
            case 14:
                printf("Enter two numbers: ");
                scanf("%d %d", &num, &n);
                printf("gcd(%d, %d) = %d\n", num, n, gcd(num, n));
                break;
            case 15:
                printf("Enter two numbers: ");
                scanf("%d %d", &num, &n);
                printf("lcm(%d, %d) = %d\n", num, n, lcm(num, n));
                break;
            case 16:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("factorial(%d) = %ld\n", num, factorial(num));
                break;
            case 17:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("isEven(%d) = %d\n", num, isEven(num));
                break;
            case 18:
                printf("Enter a number: ");
                scanf("%d", &num);
                primeFactors(num);
                break;
            case 19:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("isArmstrong(%d) = %d\n", num, isArmstrong(num));
                break;
            case 20:
                printf("Enter the number of terms: ");
                scanf("%d", &n);
                printf("fibonacciSeries(%d): ", n);
                fibonacciSeries(n);
                printf("\n");
                break;
            case 21:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("sumDivisors(%d) = %d\n", num, sumDivisors(num));
                break;
            case 22:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("isPerfect(%d) = %d\n", num, isPerfect(num));
                break;
            case 23:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("isMagic(%d) = %d\n", num, isMagic(num));
                break;
            case 24:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("isAutomorphic(%d) = %d\n", num, isAutomorphic(num));
                break;
            case 25:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("toBinary(%d) = ", num);
                toBinary(num);
                printf("\n");
                break;
            case 26:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("isNarcissistic(%d) = %d\n", num, isNarcissistic(num));
                break;
            case 27:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("sqrtApprox(%d) = %.2f\n", num, sqrtApprox(num));
                break;
            case 28:
                printf("Enter base: ");
                scanf("%d", &num);
                printf("Enter exponent: ");
                scanf("%d", &n);
                printf("power(%d, %d) = %.2f\n", num, n, power(num, n));
                break;
            case 29:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("isHappy(%d) = %d\n", num, isHappy(num));
                break;
            case 30:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("isAbundant(%d) = %d\n", num, isAbundant(num));
                break;
            case 31:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("isDeficient(%d) = %d\n", num, isDeficient(num));
                break;
            case 32:
                printf("Enter the number of terms: ");
                scanf("%d", &n);
                printf("sumEvenFibonacci(%d) = %d\n", n, sumEvenFibonacci(n));
                break;
            case 33:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("isHarshad(%d) = %d\n", num, isHarshad(num));
                break;
            case 34:
                printf("Enter n: ");
                scanf("%d", &n);
                printf("catalanNumber(%d) = %lu\n", n, catalanNumber(n));
                break;
            case 35:
                printf("Enter the number of rows: ");
                scanf("%d", &n);
                pascalTriangle(n);
                break;
            case 36:
                printf("Enter n: ");
                scanf("%d", &n);
                printf("bellNumber(%d) = %lu\n", n, bellNumber(n));
                break;
            case 37:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("isKaprekar(%d) = %d\n", num, isKaprekar(num));
                break;
            case 38:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("isSmith(%d) = %d\n", num, isSmith(num));
                break;
            case 39:
                printf("Enter n: ");
                scanf("%d", &n);
                printf("sumOfPrimes(%d) = %d\n", n, sumOfPrimes(n));
                break;
            case 0:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

