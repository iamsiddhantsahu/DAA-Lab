#include<stdio.h>
#include<string.h>
 
int i,j,m,n,c[20][20];
char x[20],y[20],b[20][20];
 
void print(int i,int j)
{
                if(i==0 || j==0)
                                return;
                if(b[i][j]=='c')
                {
                                print(i-1,j-1);
                                printf("%c",x[i-1]);
                }
                else if(b[i][j]=='u')
                                print(i-1,j);
                else
                                print(i,j-1);
}

