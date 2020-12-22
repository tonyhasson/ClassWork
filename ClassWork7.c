#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>




/*
void swap(a,b);
void main()
{
    int a,b;
    printf("enter a and b: ");
    scanf("%d%d",&a,&b);
    printf("\na:%d  b:%d ",a,b);
    swap(&a,&b);
    printf("\na:%d  b:%d",a,b);
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
*/



/*
//question 1:
void input_arry(int *,int);
void print_arry(int *,int);
void main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int a[n];
    input_arry(a,n);
    print_arry(a,n);
}
void input_arry(int *a,int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
void print_arry(int *a,int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf(" a[%d]: %d ",i,a[i]);
    }
}
*/


/*
//question 2:
void input_arry(int *a,int n);
void arrCalc(int *a, int n, int *max, int *min, int *sum, double *avg, int *isEven);
void main()
{
    int n,max=0,min=0,sum=0,isEven=0;
    double avg=0;
    printf("enter n:");
    scanf("%d",&n);
    int a[n];
    input_arry(a,n);
    arrCalc(a,n,&max,&min,&sum,&avg,&isEven);
    printf("\n max:%d  , min:%d  ,sum:%d  ,avg:%f  ,isEven:%d",max,min,sum,avg,isEven);
}
void input_arry(int *a,int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("\nenter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
void arrCalc(int *a, int n, int *max, int *min, int *sum, double *avg, int *isEven)
{
    int i;
    *min=a[0];
    *max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>*max)
        {
            *max=a[i];
        }
        if(a[i]<=*min)
        {
            *min=a[i];
        }
        *sum+=a[i];
        if(a[i]%2==0)
        {
            *isEven=1;
        }
    }
    *avg=(double)*sum/n;
}
*/


/*
//question 3:
int recursive(int *a,int n);
int itiretive(int *a,int *n);
void input_arry(int *a,int n);
int global=1,*location;//global veriables
void main()
{
    int n,temp_n;
    printf("enter n:");
    scanf("%d",&n);
    int a[n];
    input_arry(a,n);
    temp_n=n;
    location=&temp_n;
    printf("\nthe list is  return:%d",itiretive(a,&n));
    printf("\n passed:%d",n);
    printf("\nthe list is  return:%d",recursive(a,temp_n));
    printf("\n passed:%d",temp_n);
}
void input_arry(int *a,int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
int recursive(int *a,int n)
{
    if(n==0)
    {
        *location=global;
        return(1);
    }
    else
    {
        if(a[n-1]<a[n-2])
        {
            *location=0;
            return(0);
        }
        else if(a[n-1]==a[n-2])
        {
            global=0;
            recursive(a,n-1);
        }
        else
        {
            recursive(a,n-1);
        }
    }
}
int itiretive(int *a,int *n)
{
    int *p_n=n,i,x=1,*len=*n;
    for(i=0;i<len;i++)
    {
        if(a[i] > a[i+1])
        {
            *p_n=0;
            return(0);
        }
        else if(a[i]==a[i+1])
        {
            x=0;
        }
    }
    *p_n=x;
    return(1);
}
*/

/*
//question 4:
int sum_in_arry(int *a,int n);
void input_arry(int *a,int n);
void main()
{
int n,temp_n;
    printf("enter n:");
    scanf("%d",&n);
    int a[n];
    input_arry(a,n);
    printf("\nthe answer is: %d",sum_in_arry(a,n));
}
void input_arry(int *a,int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
int sum_in_arry(int *a,int n)
{
    n=n-2;
    if(n==0)
    {
        return(0);
    }
    if(a[n]==a[n-1]+a[n+1])
    {
        return(1);
    }
    else
    {
        sum_in_arry(a,n+1);
    }
}
*/

/*
//question 5:
void recursive(int *a,int n);
void itiretive(int *a,int n);
void input_arry(int *a,int n);
void print_arry(int *a,int n);
int global=0,length;//global variable
void main()
{
 int n,temp_n;
    printf("enter n:");
    scanf("%d",&n);
    length=n;
    int a[n];
    input_arry(a,n);
    recursive(a, n);
    printf("\n\n");
    itiretive(a, n);
}
void input_arry(int *a,int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
void recursive(int *a,int n)
{
    if(n-1-global==-1||n-1==global)
    {
        print_arry( a, length);
    }
    else
    {
        int temp;
        temp=a[n-1];
        a[n-1]=a[global];
        a[global]=temp;
        global++;
        recursive(a,n-1);
    }
}
void itiretive(int *a,int n)
{
    int i,temp;
    for(i=0;i<n;i++)
    {
        temp=a[n-1];
        a[n-1]=a[i];
        a[i]=temp;
        n-=1;
    }
    print_arry(a,length);
}
void print_arry(int *a,int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf(" a[%d]: %d ",i,a[i]);
    }
}
*/
