#include<stdio.h>
int max1,max2; //max1=first maximum value & max2=second maximum value

void maxx(int A[],int low,int high){ //function to find 2 MAX value in array A
	
	if(low==high){ //if one element present in the array
		max1=max2=A[low];}
		
	else if(low==high-1){ //2 element present in the array
		if(A[low]<A[high]){
			max2=A[low];
			max1=A[high];}
		else{
			max2=A[high];
			max1=A[low];}}
			
	else{ //more than 2 elements present in the array
		int mid=(low+high)/2;
		maxx(A,low,mid);
		int max3=max1; int max4=max2;
		maxx(A,mid+1,high);
		if(max3>max1){max1=max3;}
		if(max4>max2){max2=max4;}}}
		
		
		
int main(){
	int A[] = {4,6,8,3,1,70,58,89,92,4};
	max1=A[0];
	max2=A[0];
	maxx(A,0,9);
	printf("\nFirst Maximum value in the array = %d",max1);
	printf("\nSecond Maximum value in the array = %d",max2);
	
	return 0;}
	
	
