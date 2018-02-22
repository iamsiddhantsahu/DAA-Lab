#include<stdio.h>
#include<time.h>

//insertion sort
void insertionSort(int arr[], int n){
   int i, key, j;
   for (i = 1; i < n; i++){
       key = arr[i];
       j = i-1;
 
       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && arr[j] > key){
           arr[j+1] = arr[j];
           j = j-1;}
           arr[j+1] = key;}}

//print array           
void printArray(int arr[], int n){
    for (int i=0; i<n; ++i)
        printf("%d, ",arr[i]);
        printf("\n");}
           
//driver function
int main(){
	 int arr1[] = {5, 6, 7, 11, 12, 13}; //worst case
	 int arr2[] = {5, 6, 7, 11, 12, 13}; //best case (already sorted)
    int n = sizeof(arr1)/sizeof(arr1[0]); //size of the array
    
    clock_t start,end;
    double total_cputime;
    
     //worst case
        start=clock();
        insertionSort(arr1, n); //worst case
    	  printf("Sorted array: \n");
        printArray(arr1, n);
        end=clock();
        printf("**Worst Case Time**");
        printf("\nstartting time=%ld",start);
        printf("\nendtime=%ld",end);
        total_cputime=((double)(end-start));dom
        printf("\ntotal_cputime=%f",total_cputime);
        total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
        printf("\ntotal_cputime in second=%f \n",total_cputime);
        
      //best case
        start=clock();
        insertionSort(arr2, n);
        printf("Sorted array: \n");
        printArray(arr2, n);
        end=clock();
        printf("**Best Case Time**");
        printf("\nstartting time=%ld",start);
        printf("\nendtime=%ld",end);
        total_cputime=((double)(end-start));
        printf("\ntotal_cputime=%f",total_cputime);
        total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
        printf("\ntotal_cputime in second=%f \n",total_cputime); 
        
        return 0;}
    
