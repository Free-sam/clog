#include <stdio.h>
int main()
{
    /*int arr[10]={3,66,79,3,2,};
    int i;
    for(i=0;arr[i]!='\0';i++){
    printf("%d\n",arr[i]);
    }
    printf("rte is best");
    */
    char sam[30] = "the boy with joy";
    puts(sam);
    int i;
    for (i = 0; sam[i] != '\0'; i++)
    {
        printf("%c", sam[i]); // both has same operation//
    }
    printf("we can generate another loop with using one line!\n");
    for (i = 0; sam[i] != '\0'; i++)
    {
        printf("%c\n", sam[i]); // both has same operation//
    }

    return 0;
}