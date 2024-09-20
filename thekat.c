#include <stdio.h>
struct student
{
    char name[10];
    int class;
};

int main()
{
    struct student s1;
    struct student s2;
    printf("enter the s1 name :: \n");
    gets(s1.name);
    printf("\n enter the s2 name :: \n");
    gets(s2.name);
    printf("enter the s1 & s2 class :: \n ");
    scanf("%d",&s1.class);
    scanf("%d",&s2.class);
    printf("the names are :: \n");
    printf("%s\t%s",s1.name,s2.name);
    printf("class are :: \n");
    printf("%d\t%d",s1.class,s2.class);
    return 0;
}