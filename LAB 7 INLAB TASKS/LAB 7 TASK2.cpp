
#include <stdio.h>
int main()
{
    float mark[10];
    float sum=0,average;
    int aboveAvg=0;
    for (int i=0; i<10;i++)
    {
        do
        {
            printf("Enter marks for student %d: ",i+1);
            if (scanf("%f",&mark[i])!=1)
            {
                printf("Invalid input! Enter a number\n");
                int ch;
                while ((ch=getchar())!='\n')
                {
                ;
                }
                mark[i]=-1;
            }
            if (mark[i]<0||mark[i]>20)
            {
                printf("Marks must be between 0 and 20 Try again\n");
            }
        } while (mark[i]<0||mark[i]>20);
        sum+=mark[i];
    }
    average=sum/10;
    printf("\nOriginal Student Report\n");
    for (int i=0;i<10;i++)
    {
        printf("Student %d: %.2f ",i+1,mark[i]);
        if (mark[i]>=18)
            printf("Excellent\n");
        else if (mark[i]>=14)
            printf("Good\n");
        else if (mark[i]>=10)
            printf("Average\n");
        else
            printf("Needs Improvement\n");
    }
    printf("\nOriginal class average: %.2f\n", average);
    for (int i=0;i<10;i++)
    {
        if(mark[i]>average)
        {
        aboveAvg++;
        }
    }
    printf("Students above average: %d\n",aboveAvg);
    for (int i=0;i<10;i++)
    {
        mark[i] += 1.5;
        if (mark[i] > 20)
        {
            mark[i] = 20;
        }
    }
    sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += mark[i];
    }
    average = sum / 10;
    printf("\nRevised Student Report (After Bonus):\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Student %d: %.2f ", i + 1, mark[i]);
        if (mark[i] >= 18)
            printf("Excellent\n");
        else if (mark[i] >= 14)
            printf("Good\n");
        else if (mark[i] >= 10)
            printf("Average\n");
        else
            printf("Needs Improvement\n");
    }
    printf("\nRevised class average: %.2f\n", average);
    return 0;
}

