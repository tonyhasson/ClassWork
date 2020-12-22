#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>




/*
//etgar question!  you need to run on n;
int min(int *a,int n);
void input(int *a,int n);
void main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int a[n];
    input(a, n);
    printf("the lowest missing number is: %d",min(a,n));
}
void input(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nenter a number: ");
        scanf("%d",a+i);
    }
}
int min(int *a,int n)
{
    int *t=(int *)calloc(n+1,sizeof(int)),minimum=0;
    int i;
    for(i=0;i<n;i++)
    {
        t[*(a+i)]++;
    }
    for(i=1;i<=n;i++)
    {
        if(t[i]>0&&i-minimum==1)
        {
            minimum=i;
        }
    }
    free(t);
    return(minimum+1);
}
*/
/*
//question 1:
void output(double * a,int size);//not necessery,just to show that it works
double * input(int size);
void main()
{
    int size;
    double * array;
    printf("\nenter a size:");
    scanf("%d",&size);
    array=input(size);
    output(array,size);
    free(array);
}
double * input(int size)
{
    int i;
    double * array=(double *)calloc(size,sizeof(int));
    if(array==NULL)
    {
        printf("error!");
        exit(1);
    }
    for(i=0;i<size;i++)
    {
        printf("\nenter a number: ");
        scanf("%lf",array+i);
    }
    return(array);
}
void output(double * a,int size) //just to show that it works
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("\n%lf ",a[i]);
    }
}
*/

/*
//question 2:
void output(int * a,int size);
int * fibo(int n);
void main()
{
 int n;
    int * array;
    printf("\nenter a n:");
    scanf("%d",&n);
    array=fibo(n);
    output(array,n+1);
    free(array);
}
int * fibo(int n)
{
 int *a=(int *)calloc(n+1,sizeof(int));
 if(a==NULL)
 {
     printf("error!");
     exit(1);
 }
 int i;
 for(i=0;i<n+1;i++)
 {
     if(i==0)
     {
         a[i]=0;
     }
     else if(i==1)
     {
         a[i]=1;
     }
     else
     {
         a[i]=a[i-1]+a[i-2];
     }
 }
 return(a);
}
void output(int * a,int size) //just to show that it works
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("\n%d ",a[i]);
    }
}
*/




/*
//question 3:
int amount(int *a,int n);
void input_arry(int *a,int n);
void main()
{
    int n,x;
    printf("enter n:");
    scanf("%d",&n);
    int a[n];
    input_arry(a,n);
    x=amount(a,n);
    printf("\nthe number that shows the most is:%d \nand the amount of times is %d  ",x,a[0]);
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
int amount(int *a,int n)
{
    int *t=(int *)calloc(10,sizeof(int));
    int i,max=0,pos;
    if(t==NULL)
    {
     printf("error!");
     exit(1);
    }
    for(i=0;i<n;i++)
    {
        t[a[i]]++;
    }
    for(i=0;i<10;i++)
    {
        if(t[i]>max)
        {
            max=t[i];
            pos=i;
        }
    }
    free(t);
    a[0]=max;
    return(pos);
}
*/


/*
//question 4:
int check(int *arr,int n,int k);
void input_arry(int *a,int n,int k);
void main()
{
    int n,k;
    printf("enter n and k:");
    scanf("%d%d",&n,&k);
    int a[n];
    input_arry(a,n,k);
    printf("\nreturn is: %d ",check(a,n,k));
}
void input_arry(int *a,int n,int k)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("\nenter a number between 0 and %d, a[%d]: ",k,i);
        scanf("%d",&a[i]);
    }
}
int check(int *arr,int n,int k)
{
    int *t=(int *)calloc(k+1,sizeof(int));
    int i;
    if(t==NULL)
     {
     printf("error!");
     exit(1);
     }
    for(i=0;i<n;i++)
    {
        t[arr[i]]++;
    }
    for(i=0;i<k+1;i++)
    {
        if(i!=t[i])
        {
            free(t);
            return(0);
        }
    }
    free(t);
    return(1);
}
*/


/*
//question 5:
int sub(int *arr,int n,int a,int b);
void input_arry(int *a,int n);
void main()
{
    int n,a,b;
    printf("enter n,a and b:");
    scanf("%d%d%d",&n,&a,&b);
    int arr[n];
    input_arry(arr,n);
    printf("\n max pos- min pos is: %d  ",sub(arr,n,a,b));
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
int sub(int *arr,int n,int a,int b)
{
    int *t=(int *)calloc(b-a+1,sizeof(int));
    int i,max=-1,min=b,max_pos=0,min_pos=0;
    if(t==NULL)
    {
     printf("error!");
     exit(1);
    }
    for(i=0;i<n;i++)
    {
        t[arr[i]-a]++;
    }
    for(i=0;i<b-a+1;i++)
    {
         if(t[i]>max)
         {
             max=t[i];
             max_pos=i;
         }
         else if(t[i]==max)
         {
             if(i>max_pos)
             {
                 max_pos=i;
             }
         }
         if(t[i]<min&&t[i]>=1)
         {
             min=t[i];
             min_pos=i;
         }
         else if(t[i]==min)
         {
             if(i<min_pos)
             {
                 min_pos=i;
             }
         }
    }
    free(t);
    printf("\nmax pos: %d",max_pos);
    printf("\nmin pos: %d",min_pos);
    return(max_pos-min_pos);
}
*/

