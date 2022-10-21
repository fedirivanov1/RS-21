#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>


// оголошення
double xmin,xmax,y, change, delta;
int var;
unsigned int N;
int main(){

    printf("Choose a data entry option: ");
    scanf("%u", &var);
    while(var != 1 && var!= 2){
        printf("Please choose 1 or 2");
        scanf("%d", &var);

    }
// method 1.
    if(var == 1){
        printf("Enter the X1: ");
            for(; scanf("%lf", &xmin) != 1;){
                printf("You entered incorrect type of data");
                return 0;
            }
        printf("Enter the X2: ");
            for(; scanf("%lf", &xmax) != 1;){
                printf("You entered incorrect type of data");
                return 0;
            }
        printf("Enter the amount of points: ");
            for(; scanf("%u", &N) !=1;){
                printf("You entered incorrect type of data");
                return 0;
            }

        printf("*****************************************************************");
        printf("\n*      N   *            X           *            F(X)           *");
        printf("\n*****************************************************************");
        change =(xmax-xmin)/(N);
            for(int i=1; i<=N; i++){
                y=10-0.5*pow(xmin-64,3)-(3*(xmin*xmin));
                printf("\n+----------+------------------------+---------------------------+");
                printf("\n|%10.0d|%24.2lf|%27.2lf|",i, xmin, y);
                printf("\n+----------+------------------------+---------------------------+");
                xmin+=change;
                if(i==10){
                    printf("\nPress any key to continue: ");
                    getch();
                }
            }
        }
// method 2.
        if(var == 2)
        {
            printf("Enter the X1: ");
            for(; scanf("%lf", &xmin) != 1;){
                printf("You entered incorrect type of data");
                return 0;
            }
            printf("Enter the X2: ");
            for(; scanf("%lf", &xmax) != 1;){
                printf("You entered incorrect type of data");
                return 0;
            }
            printf("Enter the step: ");
            for(; scanf("%lf", &delta) !=1;){
                printf("You entered incorrect type of data");
                return 0;
            }


            printf("*****************************************************************");
            printf("\n*   STEP   *            X           *            F(X)           *");
            printf("\n*****************************************************************");


            for(int i=1; xmin<=xmax;  i++){
                    y=10-0.5*pow(xmin-64,3)-(3*(xmin*xmin));
                    printf("\n+----------+------------------------+---------------------------+");
                    printf("\n|%10.0d|%24.2lf|%27.2lf|",i, xmin, y);
                    printf("\n+----------+------------------------+---------------------------+");
                    xmin+=delta;
                    if(i==10){
                        printf("\nPress any key to continue: ");
                        getch();
                    }
            }
        }



return 0;
}

