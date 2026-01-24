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

// ------------#problem no:7 ==> Input a character and check if it's a vowel or consonant---------------

#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("%c is a vowel\n", ch);
    else
        printf("%c is a consonant\n", ch);
    return 0;
}


// ------------#problem no:8 ==> Check whether a number is a prime number or not---------------

#include <stdio.h>
int main() {
    int num, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num <= 1) flag = 1;
    for(i=2; i*i <= num; i++) {
        if(num % i == 0) {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("%d is prime\n", num);
    else
        printf("%d is not prime\n", num);
    return 0;
}


// ------------#problem no:9 ==> Print the first N natural numbers using a loop---------------

#include <stdio.h>
int main() {
    int n, i;
    printf("Enter N: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        printf("%d ", i);
    return 0;
}


// ------------#problem no:10 ==> Print the sum of the first N natural numbers---------------

#include <stdio.h>
int main() {
    int n, sum = 0, i;
    printf("Enter N: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        sum += i;
    printf("Sum = %d\n", sum);
    return 0;
}
 
// ------------#problem no:11 ==> Print multiplication table of any number---------------
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n*i);
    return 0;
}


// ------------#problem no:12 ==> Reverse a number using a loop---------------

#include <stdio.h>
int main() {
    int num, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed number = %d\n", rev);
    return 0;
}


// ------------#problem no:13 ==> Count the digits in a number---------------

#include <stdio.h>
int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0) {
        count++;
        num /= 10;
    }
    printf("Total digits = %d\n", count);
    return 0;
}


// ------------#problem no:14 ==> Calculate the factorial of a number---------------


#include <stdio.h>
int main() {
    int n, i;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        fact *= i;
    printf("Factorial = %lld\n", fact);
    return 0;
}
