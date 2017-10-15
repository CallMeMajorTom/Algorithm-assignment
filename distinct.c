//在数组r[n]中删除重复的元素，要求移动元素的次数较少，并使剩下元素间的相对次序保持不变
//思路：创建新全零数组，第二次及以上出现的元素置1，将标志位为0的元素移动至新数组
//移动次数：设m种元素，则移动m次
#include <stdio.h>
#define n 10ji
void main()
{
    int r[n]={1,3,2,2,1,4,2,5,2,4};
    printf("The original list:");
    for(int k=0; k < n;k++)
    {
        printf("%d ",r[k]);
    }
    printf("\n");
    int rank[n]={0};
    int i,j;
    for(i = 0;i < n ; i++)
    {
        if (rank[i]) continue ;
        for(j = i+1 ; j < n ; j++)
        {
            if(r[j] == r[i]) rank[j] ++;
        }
    }
    for(i = 0,j = 0;j < n;i++,j++)
    {
        if(!rank[j]) rank[i] = r[j];
        else
        {
            while(rank[j]) j++;
            rank[i] = r[j];
        }
    }
    printf("The length of distincted list is %d\n",i-1);
    for(j = 0 ;j < i-1; j++)
    {
        printf("%d ",rank[j]);
    }
    printf("\n");
}
