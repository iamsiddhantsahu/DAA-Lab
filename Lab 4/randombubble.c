#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;}
    
void bubbleSort(int arr[], int n){
   int i, j;
   for (i = 0; i < n-1; i++)      
 
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);}
              
int main(){
	int i,n;
	clock_t start,end;
	double total_cputime;
	printf("Enter size");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elemwnts:");
	
	start=clock();
	
	for(int i=0;i<n;i++){
		arr[i]=(rand()%50000);}
		
		for(int i=0;i<n;i++){
			printf("\t%d",arr[i]);}
			
		bubbleSort(arr,n);
		
	
		printf("\nSorted Array:\n");
		
		for(i=0;i<n;i++)
			printf("%d",arr[i]);
		printf("\n Cpu time calculation:\n");
		
	end=clock();
	total_cputime=((double)(end-start));
	printf("\n total cpu time=%f",total_cputime);
	total_cputime=((double)(end-start)/CLOCKS_PER_SEC);
	printf("\ntotal cpu time is SECONDS =%f",total_cputime);
	
	return 0;
	}
