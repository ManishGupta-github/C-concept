#include<stdio.h>
// Switch Case
// 1.Two or more than 2 case constants can not be same.
// 2.case constants can be integers and characters but not real constants.
// 3.You can write all cases and default in any order.
// 4.When break keyword encounter,control move outside the switch body.
// 5.You cannot write variable in front of case.
// 6.you cannot write an expression containing variable.
int main()
{
    //write program which take the month number as an input and display number
    //of days in that month.
    int a,b=31,c=29,d=30;
    printf("Enter the Month Number:\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            printf("%d Days",b);
            break;
        case 2:
            printf("%d Days",c);
            break;
        case 3:
            printf("%d Days",b);
            break;
        case 4:
            printf("%d Days",d);
            break;
        case 5:
            printf("%d Days",b);
            break;
        case 6:
            printf("%d Days",d);
            break;
        case 7:
            printf("%d Days",b);
            break;
        case 8:
            printf("%d Days",b);
            break;
        case 9:
            printf("%d Days",d);
            break;
        case 10:
            printf("%d Days",b);
            break;
        case 11:
            printf("%d Days",d);
            break;
        case 12:
            printf("%d Days",b);
            break;
        default:
            printf("No such Months Exists");
    }
    return 0;
}