#include <stdio.h>

int main()
{
    int num, count, fact;
    fact = 1;

    printf("Введите число для нахождения факториала\n");
    scanf("%d", &num);

    for (count = 1; count <= num; count++)
    {
        fact = fact * count;
    }
    printf("факториал введенного вами числа = , %d\n", num, fact);
    return 0;
}