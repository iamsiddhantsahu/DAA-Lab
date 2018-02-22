#include<stdio.h>
#include<time.h>
#include<stdlib.h>
struct Activity
{
     int start,finish;
};

void sort(struct Activity a[],int n)
{
     int i,j,tempf,temps;
     char tempc;
     for(i = 0;i<n;i++)
     {
          for(j = 0;j<n-i-1;j++)
          {
               if(a[j].finish>a[j+1].finish)
                   {
                         temps = a[j].start;
                         tempf = a[j].finish;
                         a[j].start = a[j+1].start;
                         a[j].finish = a[j+1].finish;
                         a[j+1].start = temps;
                         a[j+1].finish = tempf;
                   }
          }
     }
}

int main()
{
     int n,i,last;
     printf("ENTER NUMBER OF ACTIVITIES : \n");
     scanf("%d",&n);
     struct Activity a[n];
     printf("ENTER  STARTING AND ENDING TIME OF ALL THE %d ACTIVITIES :\n",n);
     for(i = 0;i<n;i++)    
     {
          scanf("%d%d",&a[i].start,&a[i].finish);
     }
     sort(a,n);
     printf("EVENT SELECTION :\n");
     last = -1;
     for(i = 0;i<n;i++)
     {
          if(a[i].start>=last)
          {
               printf("EVENT %d\n",i);
               last = a[i].finish;
          }
     }
     return 0;
}
