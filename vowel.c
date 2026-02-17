#include<stdio.h>
int main ()
{
   int x;
   scanf("%d" ,&x);
if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
    printf("It is a vowel\n");
} else {
    printf("It is not a vowel\n");
}
return 0;
}