#include <stdio.h>
#include <stdlib.h>


void write(int arra[15],int num);
void read(int arra[15],int num);

int main()
{
int n , A[12] ;
 float aver;
printf("no of terms in the arrray = \n");
scanf("%d",&n);
write(A,n) ;
    read(A,n);
}
void write(int arra[15],int n)
{int i ;
for (i= 0 ;i <n ; i++)
{
    printf("enter = ");
    scanf("%d",&arra[i]);
}

}
void read(int arra[15],int num)
{
    int i ;
    for (i= 0 ;i <num ; i++)
    {
        printf("%dth array = %d , ",i,arra[i]);
    }
}