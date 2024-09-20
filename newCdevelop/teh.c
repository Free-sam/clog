#include<stdio.h>



void printarray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf(" %d",arr[i]);
	}
}
void bubblesort(int arr[],int size){
	int i,j;
	int temp;
	for(i=0;i<size;i++){
		for(j=0;j<size-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void selectionsort(int arr[], int size){
	
	int i,j,temp;
	for(i=0;i<size;i++){
		for(j=i;j<size;j++){
			if(arr[j]<arr[i]){
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

void insertionsort(int arr[],int size){
	int i,j;
	int key;
	
	for(i=0;i<size;i++){
		
		key = arr[i];
		j = i-1;
		while(arr[j]>key && j>=0){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
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
	int temp;
	int pivot;
	
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

void ms(int arr[],int low,int mid,int high){
	int i,j,k;
	int b[100];
	
	i = low;
	j = mid+1;
	
	while(i<=mid && j<=high){
		if(arr[i]<arr[j]){
			b[k] = arr[i];
			i++;
			k++;
		}
		else{
			b[k] = arr[j];
			j++;
			k++;
		}
	}
	while(i<=mid){
		b[k] = arr[i];
			i++;
			k++;
	}	
	while(j<=high){
		b[k] = arr[j];
			j++;
			k++;
	}
	for(i=0;i<high;i++){
		arr[i] = b[i];
	}
	
}

void mergesort(int arr[],int low,int high){
	
	int mid;
	if(low<high){
		mid = (low+high)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		ms(arr,low,mid,high);
	}
	
}


int main(){
//bubble sort//

int arr[] = {12,56,66,4,1,34,22};
int size = sizeof(arr)/sizeof(int);

printf("the array before sorting::");
printarray(arr,size);
printf("\n");
//bubblesort(arr,size);
//selectionsort(arr,size);
//insertionsort(arr,size);
//quicksort(arr,0,size-1);
mergesort(arr,0,size-1);
printf("the array after sorting::");
printarray(arr,size);


return 0;
}

