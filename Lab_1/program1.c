#include<stdio.h>

//linear search
void linear_search(int A[],int n,int key){ //"key" ot be searched in array "A" of size "n"
  int count=0; //counting the number of occurance of "key"
  for(int i=0;i<n;i++){
    if(A[i]==key){ //Wohoo...found the "key"
      printf("\n%d is found at position %d",key,(i+1));
      count++;
    }
  } //end of for loop
  if(count==0){
    printf("\nSorry, %d is unavailable",key);
    printf("\nTry again with a new key");
  }
}

//binary search
void binary_search(int A[],int n,int key){ //"key" ot be searched in array "A" of size "n"

}

//driver function
int main(){
  //creating an array "A"
  printf("\nEnter the size of the array\t");
  int n; //var for storing array size
  scanf("%d",&n);
  int A[n];
  printf("\nEnter any %d numbers\n",n);
  for(int i=0;i<n;i++){ //for loop for taking input to array
    scanf("%d",&A[i]);
  }

  linear_search(A,n,2);
}
