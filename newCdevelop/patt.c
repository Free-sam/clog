#include<stdio.h>
int main(){

int n,i,j,k;
printf("the pattern should follow !!\n");
printf("enter the value of along x and y axis :: \n");
scanf("%d",&n);

printf("this is the kaju borfi !! ");
for(i=0;i<n;i++){

	for(j=n-1;j>=i;j--){
		printf(" ");
	}
	for(k = 1;k<=i;k++){
		printf("*");
	}
	for(j = 1;j<=i;j++){
		printf("*");
	}
	printf("\n");
}

for(i=n;i>0;i--){

	for(j=n-1;j>=i;j--){
		printf(" ");
	}
	for(k = 1;k<=i;k++){
		printf("*");
	}
	for(j = 1;j<=i;j++){
		printf("*");
	}
	printf("\n");
}


return 0;
}

