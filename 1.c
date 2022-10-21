#include <stdio.h>
#include <stdlib.h>

#define GroupName "RS-21"
#define Faculty "RTF"
#define University "KPI"
#define FirstName "Fedyr"
#define LastName "Ivanov"


        unsigned int semestr;
        unsigned int age=18;
        float admissionScore;
        int grade1;
        int grade2;
        int grade3;
        double averageGrade;

int main(){

    printf("%s%sfollow these steps:\n", FirstName, LastName);
    printf("Enter the number of semester:");
    scanf("%u",&semestr);

    printf("Enter your admission score: ");
    scanf("%f", &admissionScore);

    printf("Enter the grade for subject #1: ");
    scanf("%d", &grade1);

    printf("Enter the grade for subject #2: ");
    scanf("%d", &grade2);

    printf("Enter the grade for subject #3: ");
    scanf("%d", &grade3);

    printf("Enter your age: ");
    scanf("%u", &age);

    averageGrade = (double)(grade1+grade2+grade3)/3;
    printf("\n\t average grade = %.3lf", averageGrade);

    system("cls");

    printf("%s", University);
    printf("\n%s", Faculty);
    printf("\n%s", GroupName);
    printf("\n ----------------");

    printf("\n student: %s%s", FirstName, LastName);
    printf("\n age: %u", age);
    printf("\n semestr: %u", semestr);
    printf("\n ----------------");

    printf("\n admission score: %.2f", admissionScore);
    printf("\n average grage: %.3lf", averageGrade);
    printf("\n ");
    return 0;
}

