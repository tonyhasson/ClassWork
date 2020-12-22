#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>




/*
//question 1:
int check_pos_n(int* a, int n);
int check_pos_logn(int* a, int n);
void input_arr(int* a, int n);
void main()
{
    int n;
    printf("enter n: ");
    scanf_s("%d", &n);
    int* a = (int*)calloc(n, sizeof(int));
    if(a==NULL)
    {
        printf("\nerror!");
        exit(1);
    }
    input_arr(a, n);
    printf("\n the result for n returns is: %d", check_pos_n(a, n));
    printf("\n the result for log n returns is: %d", check_pos_logn(a, n));
    free(a);
}
void input_arr(int* a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nenter a number to the array: ");
        scanf_s("%d", &a[i]);
    }
}
int check_pos_n(int* a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == i)
        {
            return(i);
        }
    }
    return(-1);
}
int check_pos_logn(int* a, int n)
{
    int high=n-1,low=0,mid;
    while(high>=low)
    {
        mid=(high+low)/2;
        if(a[mid]==mid)
        {
            return(mid);
        }
        else if(a[mid]>mid)
        {
          high=mid-1;
        }
        else
        {
          low=mid+1;
        }
    }
    return(-1);
}
*/


/*
//question 2:
int pos_recursive(int *a,int n,int key);
int pos_itiretive(int *a,int n,int key);
void input_arr(int* a, int n);
void main()
{
    int n,key;
    printf("enter n: ");
    scanf_s("%d", &n);
    printf("enter key: ");
    scanf_s("%d", &key);
    int* a = (int*)calloc(n, sizeof(int));
    if(a==NULL)
    {
        printf("\nerror!");
        exit(1);
    }
    input_arr(a, n);
    printf("\n the position of key for itiretive is: %d", pos_itiretive(a, n,key));
    int res=pos_recursive(a, n,key);
    printf("\n the result for log n returns is: %d", res);
    free(a);
}
void input_arr(int* a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nenter a number to the array: ");
        scanf_s("%d", &a[i]);
    }
}
int pos_itiretive(int *a,int n,int key)
{
    int mid,high=n-1,low=0;
    while(high>=low)
    {
        mid=(high+low)/2;
        if(a[mid]==key)
        {
            return(mid);
        }
        else if(a[mid]>key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return(-1);
}
int pos_recursive(int *a,int n,int key)
{
    if(high<low)
    {
        return(-1);
    }
    else
    {
        int i=high/2;
        if(a[i]==key)
        {
            printf("\ni:%d",i);
            return(i);
        }
        if(a[i]<key)
        {
            int t=pos_recursive(a,i,key);
            if(t!=-1&&n%2==0)
            {
                return(t+n/2);
            }
            if(t!=-1&&n%2!=0)
            {
                return(t+1+n/2);
            }
            if(t==-1)
            {
                return(t);
            }
        }
        else
        {
            int t=pos_recursive(a+i+1,n-(i+1),key);
           if(t!=-1&&n%2==0)
            {
                return(t+n/2);
            }
            if(t!=-1&&n%2!=0)
            {
                return(t+1+n/2);
            }
            if(t==-1)
            {
                return(t);
            }
        }
    }
}
*/

/*
//question 3:
int check_first_pos(int *a,int n,int key);
void input_arr(int* a, int n);
void main()
{
    int n,key;
    printf("enter n: ");
    scanf_s("%d", &n);
    printf("enter key: ");
    scanf_s("%d", &key);
    int* a = (int*)calloc(n, sizeof(int));
    if(a==NULL)
    {
        printf("\nerror!");
        exit(1);
    }
    input_arr(a, n);
    printf("\n the lowest position of key is: %d", check_first_pos(a, n,key));
    free(a);
}
void input_arr(int* a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nenter a number to the array: ");
        scanf_s("%d", &a[i]);
    }
}
int check_first_pos(int *a,int n,int key)
{
    int high,low,mid,temp_pos=-1;
    high=n-1;
    low=0;
    while(high>=low)
    {
        mid=(high+low)/2;
        if(a[mid]>=key)
        {
            if(a[mid]==key)
            {
              temp_pos=mid;
            }
            high=mid-1;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
    }
    return(temp_pos);
}
*/



/*
//question 4:
int check_sum_pos(int *a,int * n,int * x);
void input_arr(int* a, int n);
void main()
{
    int n,x;
    printf("enter n: ");
    scanf_s("%d", &n);
    printf("enter x: ");
    scanf_s("%d", &x);
    int* a = (int*)calloc(n, sizeof(int));
    if(a==NULL)
    {
        printf("\nerror!");
        exit(1);
    }
    input_arr(a, n);
    int res=check_sum_pos(a, &n,&x);
    printf("\n sum exists or not: %d,the positions of the pair: %d , %d", res,n,x);
    free(a);
}
void input_arr(int* a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nenter a number to the array: ");
        scanf_s("%d", &a[i]);
    }
}
int check_sum_pos(int *a,int * n,int * x)
{
    int temp_n=*n,sum=*x,i=0,j=temp_n-1;
    while(temp_n>0)
    {
        if(a[i]+a[j]>sum)
        {
            j--;
        }
        else if(a[i]+a[j]<sum)
        {
            i++;
        }
        else
        {
            *n=i;
            *x=j;
            return(1);
        }
        temp_n--;
    }
    return(0);
}
*/

/*
//question 5:
int check_for_m(int *a,int n,int x);
void input_arr(int* a, int n);
void main()
{
    int n,x;
    printf("enter n: ");
    scanf_s("%d", &n);
    printf("enter x: ");
    scanf_s("%d", &x);
    int* a = (int*)calloc(n, sizeof(int));
    if(a==NULL)
    {
        printf("\nerror!");
        exit(1);
    }
    input_arr(a, n);
    int res=check_for_m(a, n,x);
    printf("\n m = %d", res);
    free(a);
}
void input_arr(int* a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nenter a number to the array: ");
        scanf_s("%d", &a[i]);
    }
}
int check_for_m(int *a,int n,int x)
{
    int high=n-1,low=0,mid;
    while(high>=low)
    {
        mid=(high+low)/2;
        if(a[mid]+a[mid+1]==x)
        {
            return(mid);
        }
        else if(a[mid]+a[mid+1]>x)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return(-1);
}
*/
