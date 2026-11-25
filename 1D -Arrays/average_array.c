#include <stdio.h>
#include <stdlib.h>


void write(int arra[],int num);
void read(int arra[],int num);
float average(int arra[],int num);

int main()
{
int n , A[12] ;
 float aver;
printf("no of terms in the arrray = \n");
scanf("%d",&n);
write(A,n) ;
read(A,n);
aver = average(A,n);
printf("\n average  = %f \n",aver);

}
void write(int arra[],int n)
{int i ;
for (i= 0 ;i <n ; i++)
{
    printf("enter = ");
    scanf("%d",&arra[i]);
}

}
void read(int arra[],int num)
{
    int i ;
    for (i= 0 ;i <num ; i++)
    {
        printf("%dth array = %d , ",i,arra[i]);
    }
}
float average(int arra[],int num)
{
  int i ;
  float sum = 0;
    for (i= 0 ;i <num ; i++)
    {
        sum = sum + arra[i] ;
    }
    return sum/num ;
}