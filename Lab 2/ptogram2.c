#include<stdio.h>
int max,min;

void max_min(int A[],int low,int high){ //function to find MAX & MIN value
	
	if(low==high){ //only 1 element in the array
		max=min=A[low];}
	
	else if(low==high-1){ //2 element present in the array
		if(A[low]<A[high]){
			min=A[low];
			max=A[high];}
		else{
			min=A[high];
			max=A[low];}}
	
	else{ //more than 2 elements present in the array
		int mid=(low+high)/2;
		max_min(A,low,mid);
		int max1=max; int min1=min;
		max_min(A,mid+1,high);
		if(max1>max){max=max1;}
		if(min1<min){min=min1;}}}
		
//driver function
int main(){
	int A[] = {4,6,8,3,1,70,58,89,92,4};
	max=A[0];
	min=A[0];
	max_min(A,0,9);
	printf("\nMaximum value in the array = %d",max);
	printf("\nMinimum value in the array = %d",min);
	
	return 0;}
		
