#include<stdio.h>

struct maxs{
  int m1;
  int m2;
}m,mml,mmr,s;

struct maxs max(int a[],int low,int high){
   int mid;
   if(low==high){
       m.m1=a[low];
       m.m2=a[low];
      return m;}
      
   else if(low==high-1){
       if(a[low]<a[high]){
            m.m1=a[high];
            m.m2=a[low];}
       else{
           m.m1=a[low];
           m.m2=a[high];}
        return m;}
        
   else{
      mid=(low+high)/2;
      mml=max(a,low,mid);
      mmr=max(a,mid+1,high);
      if(mml.m1>mmr.m1){
          m.m1=mml.m1;
          if(mml.m2>mmr.m1)
            m.m2=mml.m2;
          else
            m.m2=mmr.m1;}
      else{
          m.m1=mmr.m1;
          if(mmr.m2>mml.m1)
            m.m2=mmr.m2;
          else
            m.m2=mml.m1;}
    return m;}}
    
int main(){
    int n,i,b[20];
    int l,h;
    printf("\n enter number of the elements:");
    scanf("%d",&n);
    
    printf("\n enter the elements:");
    for(i=0;i<n;i++){
         scanf("%d",&b[i]);}
      
    l=0;
    h=n-1;
    s=max(b,l,h);
    printf("\n the max is=%d",s.m1);
    printf("\n the 2nd max is=%d",s.m2);}
 
    
         
     
