#include<stdio.h>
void main()
{
int r,m1,m2,m3,s,p;
printf("Enter the roll number");
scanf("%d",&r);
printf("Enter the marks of three subjects");
scanf("%d%d%d",&m1,&m2,&m3);
s=m1+m2+m3;
p=s/3;
if(p>90)
{
printf("Grade is A+");
}
else if(p>80&&p<=90)
{
printf("Grade is A");
}
else if(p>70&&p<=80)
{
printf("Grade is B+");
}
else if(p>60&&p<=70)
{
printf("Grade is B");
}
else if(p>50&&p<=60)
{
printf("Grade is C+");
}
else if(p>40&&p<=50)
{
printf("Grade is C");
}
else
{
printf("Failed")
}
}