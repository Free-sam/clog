#include<stdio.h>
void knapsack(int n,int weight,int profit,int capacity){
double x[20],tp = 0;                                   //for victor array & total profit//
int i,j,u;
u = capacity;
for(i=0;i<n;i++){
    x[i] = 0;
}

for(i=0;i<n;i++){
   if(weight[i]>0){
    break;
   }
   else{
    x[i]= 1;
    tp = tp + profit[i];
    u = u - weight[i];
   }
}

if(i<n){
    x[i] = u / weight[i];
    tp = tp + (profit[i] * x[i]);
}


printf("\n the resultant vector will be :: ");
for(i=0;i<n;i++){
printf("%f",x[i]);
}

printf("the max profit will be :: %d",tp);

}

int main(){
int weight[30];
int profit[30];
int capacity,objects;
int i,j,n;
int ratio[30],swap;

printf("enter the numer of objects :: ");
scanf(" %d",&n);

for(i=0;i<n;i++)
{
printf("\nenter the weight as object[%d] well as profits :: ",i+1);
scanf("%d %d",&weight[i],&profit[i]);
}
printf("\n enter the capacity of knapsack :: ");
scanf("%d",&knapsack);

for(i=0;i<n;i++)
{
    ratio[i] = profit[i]/weight[i];
}

for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(ratio[i]<ratio[j]){
            swap = ratio[j];
            ratio[j] = ratio[i];
            ratio[i] = swap;

            swap = weight[j];
            weight[j] = weight[i];
            weight[i] = swap;

            swap = profit[j];
            profit[j] = profit[i];
            profit[i] = swap;
        }
    }
}
knapsack(n,weight,profit,capacity);
    return 0;
}