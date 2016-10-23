#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s1[50],s2[50];
int op;
printf("\nenter the strings");
scanf("%s%s",&s1,&s2);
do
{
printf("\nenter the choices");
printf("\n1.length \n2.copy \n3.reverse \n4.compair \n5.append\n");
scanf("%d",&op);
switch(op)
{
case 1:
       printf("\nthe length of s1=%d",strlen(s1));
       printf("\nthe length of s2=%d",strlen(s2));
       break;
case 2:
       printf("\nbefore copy string is %s %s",s1,s2);
       strcpy(s2,s1);
       printf("\nafter copy string is %s%s",s1,s2);
       break;
case 3:
       printf("\nthe reverse string is=%s",strrev(s1));
       printf("\nthe reverse string is=%s",strrev(s2));
       break;
case 4:
      if(strcmp(s1,s2)==0)
      {
      printf("the string is equal");
      }
      else
      {
      printf("the string is not equal");
      }
      break;
case 5:
      printf("concatinated string is %s",strcat(s1,s2));
      break;
}
}while(op!=6);
getch();
}