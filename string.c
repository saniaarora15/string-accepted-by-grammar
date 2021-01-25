//C program to prove if given string is accepted by the Grammar
#include<stdio.h> 
#include<conio.h>
#include<string.h>
int count(char a,char str[],int n);
void main()
{
       char str[100];
       int i,n;
       printf("Grammar: S-> aSa|bSb|c");
       printf("\nEnter the string:");
       gets(str);
       n=strlen(str);

       if(n==1)
       {
           if(str[0]== 'c')
          {  printf(" String is accepted");}
       }
       else if(n%2!=0)
      {
       if(str[0]=='a' && str[n-1]=='a' || str[0]=='b' && str[n-1]=='b')
        {
             if(count('a',str,n)%2==0 && count('b',str,n)%2==0)
              { if(str[(n-1)/2]=='c')
                 printf("String accepted");}
        }
      }
        else
        {
            printf("String not accepted");
        }
}

int count(char a,char str[],int n){
     int i,count=0;
     for(i=0;i<n;i++){
      if(str[i]==a)
      count=count+1;}
       return count;
}
