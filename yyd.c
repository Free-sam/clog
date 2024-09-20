#include<stdio.h>
int main()
{
//char ui[20] = "hello lady";
//puts(ui);
/*int arr[10];
int i;
for(i=0;i<10;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<10;i++){
printf(" %d",arr[i]);
}*/
int arr[3][3],arr1[3][3],arrC[3][3],i,j;
printf("enter the values of 1st matrix elements :: \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
printf("enter the values of 2nd matrix elements :: \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&arr1[i][j]);
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        arrC[i][j] = arr[i][j] + arr1[i][j];
    }
    printf("\n");
}
printf("the elements are :: \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf(" %d",arrC[i][j]);
    }
    printf("\n");
}
    return 0;
}