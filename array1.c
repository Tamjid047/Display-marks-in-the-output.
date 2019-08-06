#include<stdio.h>
main()
{
    //Write a program in C which will take a number of inputs using array and display them in the output.
    int i,j,value;

    printf("enter total subject no ");
    scanf("%d",&j);
    int x[j];

    printf("\nenter marks");
    for(i=0;i<j;i++)
    {
        scanf("%d",&value);
        x[i]=value;
    }
    printf("\nOBTAINED MARKS");
    for(i=0;i<j;i++)
    {
        printf("\nsubject[%d]=%d",i+1,x[i]);
    }
}
