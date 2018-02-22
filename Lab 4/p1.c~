#include<stdio.h>
#include<time.h>

//swapping function
void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;}
 
//bubble sort
void bubbleSort(int arr[], int n){
   int i, j;
   for (i = 0; i < n-1; i++)      
 
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);}
              
//quick sort
int partition (int arr[], int low, int high){
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element
 
    for (int j = low; j <= high- 1; j++){
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot){
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);}}
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);}
 
void quickSort(int arr[], int low, int high){
    if (low < high){
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);}}
        
//selection sort
void selectionSort(int arr[], int n){
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++){
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);}}
        
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
       
//heapify
void heapify(int arr[], int n, int i){
    int largest = i;  // Initialize largest as root
    int l = 2*i + 1;  // left = 2*i + 1
    int r = 2*i + 2;  // right = 2*i + 2
 
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i){
        swap(arr[i], arr[largest]);
 
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);}}
 
//heap sort
void heapSort(int arr[], int n){
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--){
        // Move current root to end
        swap(arr[0], arr[i]);
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);}}

//print array function
void printArray(int arr[], int n){
    for (int i=0; i<n; ++i)
        printf("%d, ",arr[i]);
        printf("\n");}
    
//driver function (menu drivern) 
int main(){
    
	 int arr1[] = {12, 11, 13, 5, 6, 7}; //worst case
	 int arr2[] = {5, 6, 7, 11, 12, 13}; //best case (already sorted)
    int n = sizeof(arr1)/sizeof(arr1[0]); //size of the array
    
    //to calculate time complexcity
    clock_t start,end;
    double total_cputime;
    
    //menu driven
    int choice;
    printf("\n 1.) Bubble Sort");
    printf("\n 2.) Quick Sort");
    printf("\n 3.) Selection Sort");
    printf("\n 4.) Insertion Sort");
    printf("\n 5.) Heap Sort");
    printf("\nPlease enter your choice \n");
    scanf("%d",&choice);
    
    switch (choice) {
    case 1: { //bubble sort
    
        //worst case
        start=clock();
    	  bubbleSort(arr1, n); 
    	  printf("Sorted array: \n");
        printArray(arr1, n);
        end=clock();
        printf("**Worst Case Time**");
        printf("\nstartting time=%ld",start);
        printf("\nendtime=%ld",end);
        total_cputime=((double)(end-start));
        printf("\ntotal_cputime=%f",total_cputime);
        total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
        printf("\ntotal_cputime in second=%f \n",total_cputime); 
        
        //best case
        start=clock();
        bubbleSort(arr2, n);
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
        break;}
        
    case 2: { //quicksort
    
        //worst case
        start=clock();
        quickSort(arr1,0,n-1); 
    	  printf("Sorted array: \n");
        printArray(arr1, n);
        end=clock();
        printf("**Worst Case Time**");
        printf("\nstartting time=%ld",start);
        printf("\nendtime=%ld",end);
        total_cputime=((double)(end-start));
        printf("\ntotal_cputime=%f",total_cputime);
        total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
        printf("\ntotal_cputime in second=%f \n",total_cputime); 
        
        //best case
        start=clock();
        quickSort(arr2,0,n-1);
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
        break;}
        
    case 3: { //selection sort
    
        //worst case
        start=clock();
        selectionSort(arr1, n); //worst case
    	  printf("Sorted array: \n");
        printArray(arr1, n);
        end=clock();
        printf("**Worst Case Time**");
        printf("\nstartting time=%ld",start);
        printf("\nendtime=%ld",end);
        total_cputime=((double)(end-start));
        printf("\ntotal_cputime=%f",total_cputime);
        total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
        printf("\ntotal_cputime in second=%f \n",total_cputime); 
        
        //best case
        start=clock();
        selectionSort(arr2, n);
        printf("Sorted array: \n");
        printArray(arr2, n);
        end=clock();
        printf("**Best Case Time**");
        printf("\n startting time=%ld",start);
        printf("\nendtime=%ld",end);
        total_cputime=((double)(end-start));
        printf("\n total_cputime=%f",total_cputime);
        total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
        printf("\ntotal_cputime in second=%f \n",total_cputime); 
        break;}
        
    case 4: { //insertion sort
    
        //worst case
        start=clock();
        insertionSort(arr1, n); //worst case
    	  printf("Sorted array: \n");
        printArray(arr1, n);
        end=clock();
        printf("**Worst Case Time**");
        printf("\nstartting time=%ld",start);
        printf("\nendtime=%ld",end);
        total_cputime=((double)(end-start));
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
    	  break;}
    	  
    case 5: { //heap sort
    
    	  //worst case
    	  start=clock();
        heapSort(arr1, n); //worst case
    	  printf("Sorted array: \n");
        printArray(arr1, n);
        end=clock();
        printf("**Worst Case Time**");
        printf("\nstartting time=%ld",start);
        printf("\nendtime=%ld",end);
        total_cputime=((double)(end-start));
        printf("\ntotal_cputime=%f",total_cputime);
        total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
        printf("\ntotal_cputime in second=%f \n",total_cputime); 
        
        //best case
        start=clock();
        heapSort(arr2, n); //best case
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
    	  break;}
    	  
    default:
        printf("wrong Input\n");}
        
        return 0;}
 

        

