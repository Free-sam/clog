
//it's a merge sort programme by user EX-8 optimised// 
#include<stdio.h>
void printarray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf(" %d",arr[i]);
	}
}
void ms(int arr[],int low,int mid,int high){
	
	int i,j,k;
	int b[100];
	int temp;
	
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
	while(k<=high){
		b[k] = arr[j];
		j++;
		k++;
	}
	
	for(i=0;i<=high;i++){		//<= must//
		arr[i] = b[i];
	}
	
}

void mergesort(int arr[],int low,int high){
	int mid;
	if(low<high){
		mid = (high+low)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		ms(arr,low,mid,high);
	}
}


int main(){
	
int arr[] = {23,55,42,13,4,58,100};
int size = sizeof(arr)/sizeof(int);
printf("before printing array : ");
printarray(arr,size);
printf("\n");

mergesort(arr,0,size-1);

printf("after printing array : ");
printarray(arr,size);
return 0;
}

