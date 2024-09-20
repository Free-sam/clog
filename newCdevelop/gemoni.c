#include<stdio.h>
int main(){


int i,j,k;
int sp,n;
printf("enter the number :: ");
scanf("%d",&n);
for(i=0;i<n;i++){
	
	for(j=0;j<i;j++){
		printf("*");
	}
	sp = 2*n - 2*i ;
	for(k = sp ; k>0 ; k--){
		printf(" ");
	}
	for(j=0;j<i;j++){
		printf("*");
	}
	printf("\n");	
}
for(i=n;i>0;i--){
	
	for(j=0;j<i;j++){
		printf("*");
	}
	sp = 2*n - 2*i ;
	for(k = sp ; k>0 ; k--){
		printf(" ");
	}
	for(j=0;j<i;j++){
		printf("*");
	}
	printf("\n");	
}



return 0;
}

