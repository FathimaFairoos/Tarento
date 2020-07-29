/******************************************************************************

                            Online C Compiler.
                Program 1:
Write a program to print the sum of cubes of even digits in a given number.
(For example if the number is 4521. The output should be 43 + 23= 72)

*******************************************************************************/

#include<stdio.h>
#include<conio.h>
int main()
{
    int num,sum=0,m;
    printf("Enter the number:\n");
    scanf("%d",&num);
    while(num>0)
    {
        m=num%10; 
        if(m%2==0) //Check whether the digit is even or not
        {
            sum=sum+(m*m*m);
        }
            num=num/10;
        
    }
    printf("sum of even digit =%d",sum);
    return 0;
}
