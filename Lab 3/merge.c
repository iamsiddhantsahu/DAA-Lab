#include<stdio.h>
#include<time.h>

int printunion(int a1[],int a2[],int m,int n){
 int i=0,j=0;
	 while(i<m && j<n){
	  if(a1[i]<a2[j])
		printf("%d",a1[i++]);
		else if(a2[j]<a1[i])
		printf("%d",a2[j++]);
		else{
		printf("%d",a2[j++]);
		i++;}}
   
   while(i<m)
   printf("%d",a1[i++]);
   while(j<n)
   printf("%d",a2[j++]);}
  
int main(){
int n,m;
clock_t start,end;
double total_cputime;
start=clock();
    
   printf("enter the size of 2 arrays\n");
   scanf("%d%d",&m,&n);
   int a1[m],a2[n];
   printf("enter the elements of first array:\n");
   for(int i=0;i<m;i++)
   scanf("%d",&a1[i]);
    printf("enter the elements of 2nd array:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a2[i]);
    printunion(a1,a2,m,n);
end=clock;
printf("\n startting time=%ld",start);
printf("\nendtime=%ld",end);
total_cputime=((double)(end-start));
printf("\n total_cputime=%f",total_cputime);
total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
printf("\ntotal_cputime in second=%f",total_cputime);   
    getchar();
    return 0;
   }
   
