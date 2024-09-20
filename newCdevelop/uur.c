#include<stdio.h>
int main(){


	char sam[20] = "myself sam!";
	char ch;
	printf("the string is : %s\n",sam);
	printf("enter the value of ch  :: ");
	scanf("%c",&ch);
	//let's found some characters //
	int i;
	for(i=0;sam[i]!='\0';i++){
		if(ch == sam[i]){
			printf("the value %c found at index %d\n",ch,i);
		}
	}

return 0;
}

