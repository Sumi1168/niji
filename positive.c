#include<stdio.h>
int main()
{
int stdin;
scanf("%d",&stdin);
if(stdin==0)
printf("zero");
else if(stdin>0)
printf("positive");
else
printf("negative");
  return 0;
}
