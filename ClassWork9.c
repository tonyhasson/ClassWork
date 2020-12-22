#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

/*
//question 1:
char * combine(  char * str);
void main()
{
    char str[30];
    printf("enter a string: ");
    gets(str);
    printf("\nthe new string is: %s",combine(str));
}
char * combine(  char * str)
{
    char * new_str=(char *)calloc((strlen(str)*2)+1,sizeof(char));
    if(new_str==NULL)
    {
        printf("error!");
        exit(1);
    }
    strcpy(new_str,str);
    strcat(new_str,str);
    return(new_str);
}
*/

/*
//question 2:
char  check_amount(char * str);
void main()
{
 char str[30],ch;
    printf("enter a string: ");
    gets(str);
    ch=check_amount(str);
    printf("\nthe most appearing letter is: %c and the amount of times is: %d",ch,str[0]);
}
char  check_amount(char * str)
{
   char * amount=(char *)calloc(27,sizeof(char));
   char max_ch;
   int i,max=0;
   for(i=0;i<strlen(str);i++)
   {
       amount[str[i]-97]++;
       if(amount[str[i]-97]>max&&str[i]!=32)
       {
           max=amount[str[i]-97];
           max_ch=str[i];
       }
   }
   str[0]=max;
   return(max_ch);
}
*/


/*
//question 3:
int new_func(char * s);
void main()
{
    char str[30];
    printf("enter a string: ");
    gets(str);
    printf("\nreturn : %d",new_func(str));
}
int new_func(char * s)
{
    int big=0,small=0,i,tf=1,only=0,temp=0;
    for(i=0;i<strlen(s);i++)
    {
        if(tf==1&&s[i]!='\0')
        {
             if(i==0)
                {
                    if(s[i]>=65&&s[i]<=90)//if uppercase
                    {
                        big=1;
                    }
                    else if(s[i]>=97&&s[i]<=122)//if lowercase
                    {
                        small=1;
                    }
                    else
                    {
                        tf=0;
                    }
                }
             else if(i>0)
             {
                 if(s[i]>=65&&s[i]<=90)//if uppercase
                    {
                        big=1;
                        only=1;
                    }
                 else if(s[i]>=97&&s[i]<=122)//if lowercase
                    {
                        big=0;
                        small=1;
                        only=0;
                    }
                 if(i==1)
                    {
                        temp=only;
                    }
                 if(small==big||temp!=only)
                   {
                     tf=0;
                   }
              }
           }
        }
    return(tf);
}
*/



/*
//question 4:
char * without(char * s); //couldnt change strings size after the function
void main()
{
    char  str[30];
    printf("enter a string: ");
    gets(str);
    printf("\nreturn : %s",without(str));
}
char * without(char * s)
{
    int i,j,temp,count=0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==32)
        {
            j=i;
            while(j<strlen(s)&&s[j]!='\0')
            {
                if(s[j]!=32)
                {
                    count++;
                    temp=j;
                    j=strlen(s);
                }
                j++;
            }
            s[i]=s[temp];
            s[temp]=32;
        }
    }
    return(s);
}
*/


/*
//question 5:
int polindrom(char * s);
void main()
{
 char  str[30];
    printf("enter a string: ");
    gets(str);
    printf("\nlen : %d",strlen(str));
    printf("\npolindrom : %d",polindrom(str));
}
int polindrom(char * s)
{
    int i,len=strlen(s);
    for(i=0;i<len/2;i++)
    {
      if(s[i]!=s[len-1-i])
      {
          return(0);
      }
    }
    return(1);
}
*/
