#define _CRT_SECURE_NO_WARNINGS // with this i can use scanf, instead scanf_s
#include<stdio.h>  

int main()
{
    printf("Hello teacher! I'm you assistant.\n");

    //variables used by program
    int n, student_i = 0, ocena_i = 0 ;
    float user_input, sum = 0, sum2 = 0, student_degree, average_degree ;
    const char* student_names[5]; // list of students names (tablica znakowa)
    student_names[0] = "Harper Eland";
    student_names[1] = "Celement Hayes";
    student_names[2] = "Belinsa Jacobs";
    student_names[3] = "Cedric Santos";
    student_names[4] = "Fiona Wilcher";

    float all_grades[5][30] = { 0 }; // two dimensional array - all grades of all (five) students - maximum 30 grades!
    char final_grades[5] = { 0 }; // array to store 5 characters (char: A, B, C etc...)
    int scholarship[5] = { 0 }; // information about scholarship, default 0 - NO, if average grades is over 95% 1-YES

    // user input to decide how many subject will count
    printf("\nHow many Subject's grades you will input? >> ");

    //user input the marks, and will ask untill he get all pledge before
    scanf("%d",&n);
        
    //for (int student_i = 0; student_i < 5; student_i++) 

    do {
       //printf("teraz oceny steudent %s\n", student_names[student_i]);
        printf("\n\nWhich student you will choose? From 1 to 5:\n1. Harper Eland\n2. Celement Hayes\n3. Belinsa Jacobs\n4. Cedric Santos\n5. Fiona Wilcher\n0. EXIT\n\n>> ");
        scanf("%d", &student_i);
        student_i = student_i - 1;

        printf("Student %s", student_names[student_i]);
        sum = 0; // sum of all grades
        sum2 = 0; //sum first three subcjects (for scholarship)
        //ask user to enter grades of student number "student_i + 1"
        printf("\n\nEnter marks obtained in %d Subjects [percentage values]: \n>> \n", n);
        for (ocena_i = 0; ocena_i < n; ocena_i++)
        {
            //user input            
            scanf("%f", &user_input);
            sum = sum + user_input; // sumujemy wszystkie oceny do ogólnej średniej
            all_grades[student_i][ocena_i] = user_input; // zapisujemy wszystkie oceny do tablicy na później
            if (ocena_i < 3) // warunek żeby sumować tylko 3 pierwsze oceny
            {
                sum2 = sum2 + user_input;
            }


        }
        if (sum2 / 3 > (float)95) // jeżeli dla tego konkretnego student (student_i) średnia z pierwsych trzech prrzedmiotów
                                    // jest wyższa niż 95% to dostanie stypendium
        {
            scholarship[student_i] = 1; // tutaj przechowujemy informcje o tym który student dostanie stypendium
        }
        student_degree = sum / n;
        printf("\nFinal grade = ");
        if (student_degree > 90.1 && student_degree <= 100)
        {
            printf("A\n");
            final_grades[student_i] = "A";
        }
        else if (student_degree >= 80.1 && student_degree <= 90)
        {
            printf("B\n");
            final_grades[student_i] = "B";
        }
        else if (student_degree >= 70.1 && student_degree <= 80)
        {
            printf("C\n");
            final_grades[student_i] = "C";
        }
        else if (student_degree >= 60.1 && student_degree <= 70)
        {
            printf("D\n");
            final_grades[student_i] = "D";
        }
        else if (student_degree >= 50.1 && student_degree <= 60)
        {
            printf("E\n");
            final_grades[student_i] = "E";
        }
        else if (student_degree >= 0 && student_degree <= 50)
        {
            printf("F\n");
            final_grades[student_i] = "F";
        }
        else
        {
            printf("Invalid!");
            final_grades[student_i] = "X";
        }
        printf("\nScholarship %d \n>>1 - YES\n>>0 - NO\n", scholarship[student_i]);

        //calculate the average note from all students results
        /*average_degree = sum / n;
        printf("\nAverage = ");
        if (average_degree <= 100)
            printf("%.2f %", average_degree);

        else
            printf("Invalid!");
            */

        printf("\nSelect next student, and fill his grades.");
    } while (student_i);
    /*
    //assigning grade to give % value
    

    */

    return 0;

}
