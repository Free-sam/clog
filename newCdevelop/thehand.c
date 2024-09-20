#include<stdio.h>
#include<string.h>
int main(){
	//we say that a string act as an array of characters//
	
char pol[20] = "hello sam!!";
int i;


printf("%s\n",pol);

printf("\t\tdestructuring of pol !\n");

for(i= 0 ; pol[i]!='\0' ; i++){
	printf(" %c",pol[i]);
	
}
printf("\n  the numbers are :: ");
for(i= 0 ; pol[i]!='\0' ; i++){
	
	printf(" %d",pol[i]);
}

return 0;
}

