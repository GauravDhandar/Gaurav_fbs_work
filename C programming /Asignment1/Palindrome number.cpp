#include <stdio.h>

int main() {
    int num, originalNum;
    int firstDigit, middleDigit, lastDigit;
    int reversedNum;

    
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    
    if (num >= 100 && num <= 999) {
        originalNum = num;

        
        firstDigit = num / 100;
        middleDigit = (num / 10) % 10;
        lastDigit = num % 10;

        
        reversedNum = lastDigit * 100 + middleDigit * 10 + firstDigit;

        
        if (originalNum == reversedNum) {
            printf("%d is a Palindrome.\n", originalNum);
        } else {
            printf("%d is Not a Palindrome.\n", originalNum);
        }
    } else {
        printf("The number is not a 3-digit number.\n");
    }

    return 0;
}