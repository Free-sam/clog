#include<stdio.h>

void printarray(int arr[], int size){
	int i;
	for(i=0;i<size;i++){
		printf(" %d",arr[i]);
	}
}

void quicksort(int arr[],int low,int high){
	int partitionindex;
	if(low<high){
		partitionindex = quick(arr,low,high);
		quicksort(arr,low,partitionindex-1);
		quicksort(arr,partitionindex+1,high);
	}
}

int quick(int arr[],int low,int high){
	int i,j;
	int pivot;
	int temp; 
	
	pivot = arr[low];
	i = low+1;
	j = high;
	
	do{
	while(arr[i]<=pivot){
		i++;
	}
	while(arr[j]>pivot){
		j--;
	}
	if(i<j){
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}	
	}while(i<j);
	
	temp = arr[low];
	arr[low] = arr[j];
	arr[j] = temp;
	return j;

}

int main(){
	int arr[] = {23,55,42,13,4,58,100};
	int size = sizeof(arr)/sizeof(int);
	
printf("before printing array : ");
printarray(arr,size);
printf("\n");

quicksort(arr,0,size-1);

printf("after printing array : ");
printarray(arr,size);

return 0;
}

