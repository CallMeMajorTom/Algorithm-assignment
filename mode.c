
//在一个序列中出现次数最多的数称为众数，请设计算法众数，并计算时间复杂度
//思路：先进行排序，再统计个数
//时间复杂度：取决于排序算法，选择快排：O(nlgn)
//空间复杂度：除list空间外，只引入必要计数变量、临时变量，为O(1)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20
int list[N];
void print_list(){
    printf("The list is:");
    for(int i = 0; i < N;i++)
        printf("%d ",list[i]);
    printf("\n");
}

int quic_sort(int low,int high){
    if(low > high) return 0;
    int x = list[low],i = low,j = high;
    while(j > i){
        while(j > i && list[j] >= x) j--;
        list[i] = list[j];
        list[j] = x;
        while(j > i && list[i] <= x) i++;
        list[j] = list[i];
        list[i] = x;
    }
    if( j <= N-2 ) quic_sort (j+1,high);
    if( j >= 1) quic_sort (low,j-1);
    return 1;
}

void mode(){
    int i,count = 0,mode_no = -1,mode_count = 0;
    for(i = 1;i < N;i++)
        if(list[i] != list[i-1] || i == N-1){
            if(count >= mode_count){
                if(i == N-1) mode_count = count + 1;
                mode_count = count;
                mode_no = list[i-1];
            }
            count = 0;
        }
        else count++;
    printf("The mode is:%d\nThe number of mode is:%d\n",mode_no,mode_count+1);
}

int main(){
    int i;
    srand((int)time(0));
    for(i = 0;i < N; i++)
        list[i] = (int)(rand()%10);
    print_list();
    quic_sort(0,N-1);
    print_list();
    mode();
}
