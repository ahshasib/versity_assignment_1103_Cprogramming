// ------------#problem no:1 ==> Check whether a number is even or odd---------------

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is even\n", num);
    else
        printf("%d is odd\n", num);
    return 0;
}
// ------------#problem no:2 ==> Find the largest of two numbers---------------

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a > b)
        printf("%d is largest\n", a);
    else
        printf("%d is largest\n", b);
    return 0;
}

// ------------#problem no:3 ==> Find the largest of three numbers---------------

#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c)
        printf("%d is largest\n", a);
    else if(b > c)
        printf("%d is largest\n", b);
    else
        printf("%d is largest\n", c);
    return 0;
}

// ------------#problem no:4 ==> Check whether a number is positive, negative, or zero---------------

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num > 0)
        printf("Positive\n");
    else if(num < 0)
        printf("Negative\n");
    else
        printf("Zero\n");
    return 0;
}

// ------------#problem no:5 ==> Check whether a number is divisible by 5 and 11---------------

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 5 == 0 && num % 11 == 0)
        printf("%d is divisible by 5 and 11\n", num);
    else
        printf("%d is not divisible by 5 and 11\n", num);
    return 0;
}

// ------------#problem no:6 ==> Check whether a year is a leap year or not---------------

#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
    return 0;
}

// ------------#problem no:7 ==> Check whether a year is a leap year or not---------------