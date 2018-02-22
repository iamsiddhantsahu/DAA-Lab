#include<stdlib.h>
#include<stdio.h>
#include<time.h>
 
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    int L[n1], R[n2];
 
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];    
    i = 0;
    j = 0; 
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }   
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
 
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}




int main()
{
    
    clock_t start,end;
    double total_cputime;
    int n,i ;
    start=clock();
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter Array to be Sorted");
    for(i=0;i<n;i++)
      {
         scanf("%d",&a[i]);
      }
    printf("The entered Array is:\n");
    for (i=0; i < n; i++){
        printf("%d ", a[i]);
        printf("\n"); 
     }
     mergeSort(a,0,n-1);
   printf("The Sorted Array is:\n");
    for (i=0; i < n; i++){
        printf("%d ", a[i]); 
        printf("\n");
     }  
   end=clock();
    total_cputime=((double)(end-start));
        printf("\ntotal_cputime=%f",total_cputime);
        total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
        printf("\ntotal_cputime in second=%f \n",total_cputime); 
    return 0;
}
