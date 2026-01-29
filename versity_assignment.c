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


// ------------#problem no:15 ==> Check whether a number is a palindrome---------------

#include <stdio.h>
int main() {
    int num, temp, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if(num == rev)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");
    return 0;
}


// ------------#problem no:16 ==> Check whether a number is an Armstrong number---------------
#include <stdio.h>
int main() {
    int num, temp, sum = 0, r;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0) {
        r = temp % 10;
        sum += r * r * r;
        temp /= 10;
    }
    if(sum == num)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");
    return 0;
}


// ------------#problem no:17 ==> Find the sum of digits of a number---------------

#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0) {
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}


// ------------#problem no:18 ==> Find the product of digits of a number---------------

#include <stdio.h>
int main() {
    int num, product = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0) {
        product *= num % 10;
        num /= 10;
    }
    printf("Product of digits = %d\n", product);
    return 0;
}


// ------------#problem no:19 ==> Print Fibonacci series up to N terms---------------

#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}

// ------------#problem no:20 ==> Find the GCD of two numbers---------------

#include <stdio.h>
int main() {
    int a, b, i, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for(i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }
    printf("GCD = %d\n", gcd);
    return 0;
}


// ------------#problem no:21 ==> Find the LCM of two numbers---------------

#include <stdio.h>
int main() {
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;
    while(1) {
        if(max % a == 0 && max % b == 0) {
            printf("LCM = %d\n", max);
            break;
        }
        max++;
    }
    return 0;
}


// ------------#problem no:22 ==> Count how many even and odd digits in a number---------------

#include <stdio.h>
int main() {
    int num, even = 0, odd = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0) {
        if((num % 10) % 2 == 0)
            even++;
        else
            odd++;
        num /= 10;
    }
    printf("Even digits = %d\nOdd digits = %d\n", even, odd);
    return 0;
}


// ------------#problem no:23 ==> Print all even numbers between 1 and N---------------

#include <stdio.h>
int main() {
    int n, i;
    printf("Enter N: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i += 2)
        printf("%d ", i);
    return 0;
}


// ------------#problem no:24 ==> Print all odd numbers between 1 and N---------------

#include <stdio.h>
int main() {
    int n, i;
    printf("Enter N: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i += 2)
        printf("%d ", i);
    return 0;
}


// ------------#problem no:25 ==>Find the smallest digit in a number---------------

#include <stdio.h>
int main() {
    int num, min = 9;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0) {
        if(num % 10 < min)
            min = num % 10;
        num /= 10;
    }
    printf("Smallest digit = %d\n", min);
    return 0;
}


// ------------#problem no:26 ==> Find the largest digit in a number---------------

#include <stdio.h>
int main() {
    int num, max = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0) {
        if(num % 10 > max)
            max = num % 10;
        num /= 10;
    }
    printf("Largest digit = %d\n", max);
    return 0;
}


// ------------#problem no:27 ==> Check if a number is a strong number---------------

#include <stdio.h>
int fact(int n) {
    int i, f = 1;
    for(i = 1; i <= n; i++)
        f *= i;
    return f;
}
int main() {
    int num, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0) {
        sum += fact(temp % 10);
        temp /= 10;
    }
    if(sum == num)
        printf("Strong number\n");
    else
        printf("Not a strong number\n");
    return 0;
}


// ------------#problem no:28 ==> Print the sum of all even numbers between 1 and N---------------

#include <stdio.h>
int main() {
    int n, sum = 0, i;
    printf("Enter N: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i += 2)
        sum += i;
    printf("Sum of even numbers = %d\n", sum);
    return 0;
}


// ------------#problem no:29 ==> Print the sum of all odd numbers between 1 and N---------------

#include <stdio.h>
int main() {
    int n, sum = 0, i;
    printf("Enter N: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i += 2)
        sum += i;
    printf("Sum of odd numbers = %d\n", sum);
    return 0;
}


// ------------#problem no:30 ==>Generate a star pattern using nested loops---------------

#include <stdio.h>
int main() {
    int i, j;
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}

// ------------#problem no:31 ==>Check whether a number is perfect or not---------------

#include <stdio.h>
int main() {
    int num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 1; i <= num/2; i++) {
        if(num % i == 0)
            sum += i;
    }
    if(sum == num)
        printf("Perfect number\n");
    else
        printf("Not a perfect number\n");
    return 0;
}


// ------------#problem no:32 ==>Print all factors of a number using a loop---------------

#include <stdio.h>
int main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factors: ");
    for(i = 1; i <= num; i++) {
        if(num % i == 0)
            printf("%d ", i);
    }
    return 0;
}

// ------------#problem no:33 ==>Find the sum of all factors of a number---------------

#include <stdio.h>
int main() {
    int num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++) {
        if(num % i == 0)
            sum += i;
    }
    printf("Sum of factors = %d\n", sum);
    return 0;
}


// ------------#problem no:34 ==>Check whether a number is a strong prime or not---------------

#include <stdio.h>
int isPrime(int n) {
    int i;
    if(n <= 1) return 0;
    for(i = 2; i*i <= n; i++)
        if(n % i == 0)
            return 0;
    return 1;
}
int main() {
    int num, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    if(isPrime(num) && isPrime(sum))
        printf("Strong prime number\n");
    else
        printf("Not a strong prime number\n");
    return 0;
}


// ------------#problem no:35 ==>Count vowels and consonants in a string---------------

#include <stdio.h>
int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;
    printf("Enter a string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++) {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')) {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
               str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels = %d\nConsonants = %d\n", vowels, consonants);
    return 0;
}


// ------------#problem no:36 ==>Convert lowercase string to uppercase without library functions---------------

#include <stdio.h>
int main() {
    char str[100];
    int i;
    printf("Enter lowercase string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    printf("Uppercase string: %s\n", str);
    return 0;
}


// ------------#problem no:37 ==>Print the reverse of a string using a loop---------------

#include <stdio.h>
int main() {
    char str[100];
    int i, len = 0;
    printf("Enter a string: ");
    gets(str);
    while(str[len] != '\0')
        len++;
    printf("Reversed string: ");
    for(i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
    return 0;
}


// ------------#problem no:38 ==>Find the second largest number among three numbers---------------

#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if((a > b && a < c) || (a > c && a < b))
        printf("Second largest = %d\n", a);
    else if((b > a && b < c) || (b > c && b < a))
        printf("Second largest = %d\n", b);
    else
        printf("Second largest = %d\n", c);
    return 0;
}


// ------------#problem no:39 ==>Check if a character is alphabet, digit, or special character---------------

#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("Alphabet\n");
    else if(ch >= '0' && ch <= '9')
        printf("Digit\n");
    else
        printf("Special character\n");
    return 0;
}
