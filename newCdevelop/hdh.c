#include<stdio.h>
int main(){

char string[100];
printf("enter the value of sting : ");
fgets(string,99,stdin);

fputs(string,stdout);



return 0;
}

