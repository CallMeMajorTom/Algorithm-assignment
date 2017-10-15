//数组a，长度为n（索引为0至n-1）。现要求更新数组的各个元素，使新数组的第i个元素等于原数组中除第i个元素之外各元素之积
//要求：具有线性复杂度。不能使用除法运算符，除循环计数值，a[n],b[n]之外不准使用其他变量
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20
void main(){
    int i,j;
    int a[N],b[N];
    b[0] = 1;
    srand((int)time(0));
    for (i = 0; i < N; i++)
        a[i] = (int)(rand()%10+1);
    printf("The original list is:");
    for(i = 0; i < N;i++)
        printf("%d ",a[i]);
    printf("\n");
    for (i = 1;i < N;i++)
    {b[0] = a[i-1] * b[0];b[i] = b[0];}
    b[0] = 1;
    for (i = N-2;i > 0; i--)
    {b[0] = a[i+1] * b[0]; b[i] = b[i] * b[0];}
    b[0] = a[1] * b[0];
    printf("The result is:");
    for(i = 0; i < N;i++)
        printf("%d ",b[i]);
    printf("\n");
}
