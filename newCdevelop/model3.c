#include<stdio.h>
int main(){

//let's create a range that shows a list of prime numbers of given range //

//so in this case we have to take 2 range of loops //


int i,j,n;
int flag,cn;

printf("enter the value of a number that to the range will occured : ");
scanf("%d",&n);


printf("the prime numbers are :: ");
for(i=1;i<=n;i++)
{
	cn  = i;
	flag = 0;
	for(j=2;j<=cn/2;j++)
	{
		
		if(cn%j==0)
		{
			flag = 1;	
		}
	}
	
	if(cn == 2){
		continue;
		
	}
	if(flag == 0){
			printf("\n %d",cn);
	}

}

return 0;
}

