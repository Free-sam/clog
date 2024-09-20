#include<stdio.h>
int main(){

											//sophidticated drilling practice//

int n;
int i,flag = 0;
printf("enter a number to cheak that if it is prime or not ? => ");
scanf("%d",&n);

//let's create a loop that can iterate some numbers  from that range the prime number will be founded//

for(i=2;i<n/2;i++){
	if(n%i==0){
		flag = 1;
		break;
	}
}

if(flag==0){
	printf("%d is prime !!",n);
}
else{
	printf("%d is not prime !!",n);
}




return 0;
}

