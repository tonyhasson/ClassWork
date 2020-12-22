#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>




/*
//question 1:
int EvenDigit(num1);
void main()
{
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    printf("\n %d",EvenDigit(num));
}
int EvenDigit(num1)
{
    if(num1%2==0&&num1>0)
    {
        return(1);
    }
    if(num1==0)
    {
        return(0);
    }
    return(EvenDigit(num1/10));
}
*/
/*
//question 2:
int fibonachi(n);
int fibonachi_b(n);
void main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    printf("\n the number is position %d is: %d (not recursive)",n,fibonachi_b(n));
    printf("\n the number is position %d is: %d (recursive)",n,fibonachi(n));
}
int fibonachi(n) //recursive
{
    if(n<=1)
    {
        return(n);
    }
    return(fibonachi(n-2)+fibonachi(n-1));
}
int fibonachi_b(n)   //not recursive
{
    int i=0,sum=0,temp1=1;
    while(i<=n-3)
    {
        if(sum>0)
        {
            sum+=temp1;
            temp1=sum-temp1;
        }
        else
        {
            sum=temp1*2;
        }
       i++;
    }
    return(sum);
}
*/
/*
//question 3:
int amount(num);
int sum(num);
int IsUp(num);
void main()
{
    int num;
    printf("enter num: ");
    scanf("%d",&num);
    printf("\n the amount of digits is: %d",amount(num));
    printf("\n the sum of the digits is: %d",sum(num));
    printf("\n the digits are going up/down : %d",IsUp(num));
}
int amount(num)
{
    if(num/10==0)
    {
        return(1);
    }
    return(1+amount(num/10));
}
int sum(num)
{
    if(num/10==0)
    {
        return(num);
    }
    return(num%10+sum(num/10));
}
int IsUp(num)
{
    if(num/10==0)
    {
        return(1);
    }
    if(num%10>=num/10%10)
    {
        return(0);
    }
    else
    {
        return(IsUp(num/10));
    }
}
*/
/*
//question 4:
int check_big(num);
void main()
{
    int num,result;
    printf("enter num: ");
    scanf("%d",&num);
    result=check_big(num);
    printf("\n the amount of numbers that our number is bigger than is: %d",result);
}
int check_big(num)
{
    int a,count=0;
    printf("enter a number,finish when send -1: ");
    scanf("%d",&a);
    if(a==-1)
    {
        return(0);
    }
    if(num>a)
    {
        return(1+check_big(num));
    }
    if(num<=a)
    {
        check_big(num);
    }
}
*/
/*
//question 5:
void print_until_one(num);
void print_from_one(num);
void print_until_one_to_num(num);
void main()
{
    int num;
    printf("enter num: ");
    scanf("%d",&num);
    print_until_one(num);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    print_from_one(num);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    print_until_one_to_num(num);
}
void print_until_one(num)
{
    printf("\n%d",num);
    if(num>1)
    {
      print_until_one(num-1);
    }
}
void print_from_one(num)
{
    if(num>1)
    {
        print_from_one(num-1);
    }
    printf("\n%d",num);
}
void print_until_one_to_num(num)
{
     printf("\n%d",num);
    if(num>1)
    {
      print_until_one_to_num(num-1);
    }
    if(num!=1)
    {
      printf("\n%d",num);
    }
}
*/
