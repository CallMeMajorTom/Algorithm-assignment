// 设表A={a1,a2...an}，将表A拆成B和C两个表，使A中值大于等于0的元素存入表B中，值小于0的元素存入表C中，要求表B和C不另外设置存储空间而利用表A的空间
//思路：借鉴快排的思想，将大于0的数全放在数组的开头【表B】，小于0的数全放在数组的结尾【表C】（无序）；同时分好之后i，j恰好指向表C开头
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define n 20
void main()
{
    int i,j,temp;
    int a[n];
    srand(time(NULL));
    for(i = 0; i < n; i++)
        a[i] = rand()%10 - 5;
    printf("The original list:\n");
    for(i = 0; i < n; i++)
        printf("%d ",a[i]);
    printf("\n");
    i = 0;
    j= n-1;
    while(i < j)
    {
        while(a[i] >= 0 && i < j) i++;
        while(a[j] < 0 && i < j) j--;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    printf("B(>=0):");
    for(i = 0;i < j;i++)
        printf("%d ",a[i]);
    printf("\n");
    printf("C(<0):");
    for(i = j;i < n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
