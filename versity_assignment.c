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
