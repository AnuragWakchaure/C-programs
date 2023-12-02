#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int i,j,x,y,k;
void floyd1()
{
    for(i=1;i<-5;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
void floyd2()
{
     for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
         printf("\n");
    }
}

void floyd3()
{
     for(i=1;i<=5;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
         printf("\n");
    }
}

void floyd4()
{
     for(i=5;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }    
}

void floyd5()
{
     for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}

void floyd6()
{
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}

void floyd7()
{
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
               printf("%d",0);
            }
            else
            {
                printf("%d",1);
            }
        }
         printf("\n");
    }
     printf("\n\n");


     for(i=1;i<=5;i++)
    {
        for(j=i;j>=1;j--)
        {
            if(j%2==0)
            {
               printf("%d",0);
            }
            else
            {
                printf("%d",1);
            }
        }
         printf("\n");
    }
}

void floyd8()
{
     x=1;
    while(x<10)
    {
    for(i=1;i<=4;i++)
    {   
     
        for(j=1;j<=i;j++)
        {
         printf("%d ",x);
          x++;
        }
       
         printf("\n");
    }
   
    }
}

void floyd9()
{
    for(i=0;i<=5;i++)
     {
        for(j=5;j>=i;j--)
        {
            printf(" ");
        }
        for(x=i;x>=0;x--)
        {
            printf("%d",x);
        }
        for(y=1;y<=i;y++)
        {
            printf("%d",y);
        }
        printf("\n");
     }
    
     for(i=65;i<=69;i++)
     {
        for(j=69;j>=i;j--)
        {
            printf("%c",j);
        }
        for(x=i;x>65;x--)
        {
            printf("  ");
        }
        for(y=i;y<=69;y++)
        {
            printf("%c",y);
        }
        printf("\n");
     }
}

void floyd10()
{
    for (i = 0; i < x; i++) {
      for (y = 1; y <= x - i; y++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            k = 1;
         else
            k = k * (i - j + 1) / j;
         printf("%4d", k);
      }
      printf("\n");
   }
}
void main()
{
    int ch;
    while(1)
    {
        printf("1.Pattern\n2.Pattern\n3.Pattern\n4.Pattern\n5.Pattern\n6.Pattern\n7.Pattern\n8.Pattern\n9.Pattern\n10.Pattern\n11.Exit\n");
        printf("Enter your choice :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    printf("Floyd pattern-1\n");
                    floyd1();
                    getch();
                    break;
            case 2:
                     printf("Floyd pattern-2\n");
                    floyd2();
                    getch();
                    break;
            case 3:
                     printf("Floyd pattern-3\n");
                    floyd3();
                    getch();
                    break;
            case 4:
                     printf("Floyd pattern-4\n");
                    floyd4();
                    getch();
                    break;
            case 5:
                     printf("Floyd pattern-5\n");
                    floyd5();
                    getch();
                    break;
            case 6:
                     printf("Floyd pattern-6\n");
                    floyd6();
                    getch();
                    break;
            case 7:
                     printf("Floyd pattern-7\n");
                    floyd7();
                    getch();
                    break;
            case 8:
                     printf("Floyd pattern-8\n");
                    floyd8();
                    getch();
                    break;
            case 9:
                     printf("Floyd pattern-9\n");
                    floyd9();
                    getch();
                    break;
            case 10:
                     printf("Floyd pattern-10\n");
                    floyd10();
                    getch();
                    break;
            case 11:
                    exit(0);
        }
    }
    
}
