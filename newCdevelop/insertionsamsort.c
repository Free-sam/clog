#include<stdio.h>

void printarray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf(" %d",arr[i]);
	}
}

void insertionsort(int arr[],int size){
	int i,j;
	int key;
	
	for(i=0;i<size;i++){
		key = arr[i];
	j=i-1;
	
	while(arr[j]>key && j>=0){
		arr[j+1] = arr[j];
		j--;
	}
	arr[j+1] = key;
	}
}

int main(){
int arr[] = {23,55,42,13,4,58,100};
int size = sizeof(arr)/sizeof(int);
printf("before printing array : ");
printarray(arr,size);
printf("\n");

insertionsort(arr,size);

printf("after printing array : ");
printarray(arr,size);

return 0;
}

