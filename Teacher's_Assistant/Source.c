#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>  


int main()
{
    printf("Hello teacher! I'm you assistant.\n");

    int i, n;
    float m, sum = 0, a, avg;
    printf("\nHow many Subject runs in your Institute? >> ");
    scanf("%d",&n);
    printf("\nEnter marks obtained in %d Subjects [percentage values]: \n>> \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%f",&m);
        sum = sum + m;

    }
    a = sum / n;
    printf("\nGrade = ");
    if (a >= 90.1 && a <= 100)
        printf("A");
    else if (a >= 81.1 && a < 90)
        printf("B");
    else if (a >= 70.1 && a < 80)
        printf("C");
    else if (a >= 60.1 && a < 70)
        printf("D");
    else if (a >= 50.1 && a < 60)
        printf("E");
    else if (a >= 0 && a < 50)
        printf("F");
    else
        printf("Invalid!");

    avg = sum / n;
    printf("\nAverage = ");
    if (avg <= 100)
        printf("%.2f", avg);

    else
        printf("Invalid!");

    getch();


    return 0;

}