#include<stdio.h>

//bubble sort
void bubble_sort(int A[],int n){
  for(int i=0;i<n-1;i++){ //for loop for iterating 'n' time for n array 'A[n]'
    int flag=0; // variable to check if swaping is done
    for(int j=0;j<n-i-2;j++){ //for loop for checking adjacent elements in unsorted array 'A[n]'
      if(A[i]>A[i+1]){ //if lower index adjacent element in smaller, then swap
        int temp = A[i];
        A[i]=A[i+1];
        A[i+1]=temp;
        flag=1; //if atleast once swapping is done, then assign 'flag'=1
      }
    }
    if(flag==0){break;}
  }
}

//selection sort 
