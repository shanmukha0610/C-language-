#include<stdio.h>
int add(int,int);
void main()
{int a,b,sum;
printf("enter 2 numbers\n");
scanf("%d %d",&a,&b);
 add(a,b);

}


int add(int a,int b)
{int sum;
sum = a+b;
printf("%d\n",sum);
}