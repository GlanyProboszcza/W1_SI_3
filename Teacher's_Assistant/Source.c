#define _CRT_SECURE_NO_WARNINGS // with this i can use scanf, instead scanf_s
#include<stdio.h>  


int main()
{
    printf("Hello teacher! I'm you assistant.\n");

    //variables used by programm
    int i, n;
    float m, sum = 0, a, avg;

    // user input to decide how many subject will count
    printf("\nHow many Subject runs in your Institute? >> ");
    scanf("%d",&n);

    //user input the marks, and will ask untill he get all pledge before
    printf("\nEnter marks obtained in %d Subjects [percentage values]: \n>> \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%f",&m);
        sum = sum + m;

    }
    //assigning grade to give % value
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

    //calculate the average note from all students results
    avg = sum / n;
    printf("\nAverage = ");
    if (avg <= 100)
        printf("%.2f", avg);

    else
        printf("Invalid!");
    getch();


    return 0;

}