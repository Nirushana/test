#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks, idNum;
    char grade;
    //getting user input of admission no and marks.
    printf("\nEnter Admission Number:");
    scanf("%d",&idNum);

    printf("\nEnter Marks:");
    scanf("%d",&marks);
     //this is to find the grade for the marks entered.
    if(marks>=75)
        grade= 'A';
    else if(marks>=65)
        grade= 'B';
    else if(marks>=55)
        grade= 'C';
    else
        grade= 'F';
        //this is the output of the admission No and grade.
    printf("\n Admission Number is %d\n",idNum);
    printf("\n Your Grades are %c\n",grade);

    return 0;
}
