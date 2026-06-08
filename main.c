#include <stdio.h>

int main()
{
    int math,science,english;
    int total,highest;
    float average;
    char grade;
    char status[10];

    printf("===================================\n");
    printf("       STUDENT MARK ANALYZER\n");
    printf("===================================\n");

    printf("Enter Mathematics mark: ");
    scanf("%d",&math);

    printf("Enter Science mark:");
    scanf("%d",&science);

    printf("Enter English mark:");
    scanf("%d",&english);

    total=math+science+english;
    average=total/3.0;

    highest=math;
    if(science>highest)
        highest=science;
    if(english>highest)
        highest=english;

    if(average>=80)
        grade='A';
    else if (average>=70)
        grade='B';
    else if (average>=60)
        grade='C';
    else if (average>=50)
        grade='D';
    else
        grade='F';


    printf("===================================\n");
    printf("             RESULTS\n");
    printf("===================================\n");
    printf("\nTotal:%d\n",total);
    printf("Average:%.2f\n",average);
    printf("Grade:%c\n",grade);
    printf("Highest Mark:%d\n",highest);


    if (math>=40&&science>=40&&english>=40)
        printf("Result:PASS\n");
    else
        printf("Result:FAIL\n");


    printf("===================================\n");

    return 0;

}
