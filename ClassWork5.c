#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>




/*   // question 1:
int calc(int num1,int num2,char op);
void main()
{
  int num1,num2;
  char op;
  printf("enter two numbers!: ");
  scanf("%d%d",&num1,&num2);
   printf("enter one of these operators (*-/+%): ");
  scanf(" %c",&op);
  printf("\n%d",calc(num1,num2,op));
}
int calc(int num1,int num2,char op)
{
    switch(op)
    {
    case('+'):
    {
        return(num1+num2);
    }
    case('-'):
    {
        return(num1-num2);
    }
    case('/'):
    {
        if(num2!=0)
        {
          return(num1/num2);
        }
        else
        {
            printf("cant divide by zero!");
            return(0);
        }
    }
    case('*'):
    {
        return(num1*num2);
    }
    case('%'):
    {
        if(num2!=0)
        {
          return(num1%num2);
        }
        else
        {
            printf("cant divide by zero!");
            return(0);
        }
    }
    default:
    {
        printf("invalid operator!");
        return(0);
    }
    }
}
*/

/*  //question 2:
int opossite(int num);
void main()
{
    int num1;
    printf("enter a number!:");
    scanf("%d",&num1);
    printf("\n the opossite number is :%d",opossite(num1));
}
int opossite(int num)
{
    int new_num=0;
    while(num>0)
    {
        new_num*=10;
        new_num+=num%10;
        num/=10;
    }
    return(new_num);
}
*/

/* //question 3
void sum(num);
void main()
{
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    sum(num);
}
void sum(num)
{
    int i,t=num,add=1;
    for (i=2;i<=t;i++)
    {
        if(num%i==0)
        {
            if(add==1)
            {
                t=num/i;
            }
            add+=i;
        }
    }
    printf("\n%d",add);
}
*/

/* // question 4:
int prime_num(num);
void main()
{
  int num;
  printf("enter a number: ");
  scanf("%d",&num);
  printf("\n%d",prime_num(num));
}
int prime_num(num)
{
    int i;
    for (i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return(0);
        }
    }
    return(1);
}
*/

/*//question 5:
void main()
{
  int num1,num2,num3;
  printf("\nenter three numbers numbers: ");
  scanf("%d%d%d",&num1,&num2,&num3);
  small(num1,num2,num3);
}
void GCD(num1,num2,num3,smallest_num)
{
    int i,gcd_num=1;
    for (i=2;i<=smallest_num;i++)
    {
        if(num1%i==0&&num2%i==0&&num3%i==0)
        {
           gcd_num=i;
           printf("\ngcd:%d",gcd_num);
        }
    }
        printf("\nthe biggest common divider is: %d",gcd_num);
}
void small(num1,num2,num3)
{
 if(num1<=num2&&num1<=num3)
 {
     GCD(num1,num2,num3,num1);
 }
 if(num2<=num1&&num2<=num3)
 {
     GCD(num1,num2,num3,num2);
 }
 if(num3<=num2&&num3<=num1)
 {
     GCD(num1,num2,num3,num3);
 }
}
*/
