#include"CYPHERSLIB.h"
#include<stdio.h>
#include<stdbool.h>
int main(){
	    // Pre-declared string
    char text[] = "HELLO";
    const char texti[] = "HELLO";
    char key[] = "KEY";
    char substitutionKey[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    char result[100];
	char text2[100];
    int choice, shift;

    do {
        // Display the menu
        printf("\nMenu:");
        printf("\n1. Caesar Cipher");
        printf("\n2. Substitution Cipher");
        printf("\n3. XOR Cipher");
        printf("\n4. Vigenere Cipher");
        printf("\n5. Atbash Cipher");
        printf("\n6. Rail Fence Cipher");
        printf("\n7. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter shift value: ");
                scanf("%d", &shift);
                caesarCipher(text, shift);
                printf("\nCaesar Cipher Result: %s\n", text);
                break;

            case 2:
            	
                substiutionCipher(text, substitutionKey);
                printf("\nSubstitution Cipher Result: %s\n", texti);
                break;

            case 3:
                printf("\nEnter XOR key (single character): ");
                const char xorKey[100]="#";
                scanf(" %c", &xorKey);
                xorCipher(text, xorKey,text2);
                printf("\nXOR Cipher Result: %s\n", text);
                break;

            case 4:
                vigenereCipher(text, key, 1); // Encrypt
                printf("\nVigenere Cipher (Encrypted): %s\n", text);
                break;

            case 5:
                atbashCipher(text);
                printf("\nAtbash Cipher Result: %s\n", text);
                break;

            case 6:
                printf("\nEnter Rail Fence depth: ");
                int depth;
                scanf("%d", &depth);
                railFenceCipher(text, result, depth);
                printf("\nRail Fence Cipher Result: %s\n", result);
                break;

            case 7:
                printf("\nExiting the program. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice. Try again.\n");
        }
    } while (choice != 7);

    return 0;
}
