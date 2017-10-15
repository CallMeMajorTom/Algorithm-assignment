//将m个苹果放入n个盘子，盘子允许空，有多少种方法
//思路：分两种情况
//1.有空盘子的情况：若将题目描述为f(m,n)，那么这种情况就可以用f(m,n-1)来表示
//2.没有空盘子的情况：这种情况可以表示为f(m-n,n)，可以理解为在先将m-n个苹果分给n个盘子，之后再给每个盘子中多加1个苹果，如此可以保证没有空盘子
#include <stdio.h>
int fun(int m,int n){
    int count,i;
    if(m == 1 || n == 1){
        count = 1;
        printf(" ");
        return count;
    }
    if(m < 0){
        count = 0;
        return count;
    }
    count = fun(m,n-1) + fun(m-n,n);
    return count;
}
void main(){
    int m,n;
    printf("please input the number of apples:");
    scanf("%d",&m);
    printf("please input the number of plates:");
    scanf("%d",&n);
    printf("There are %d way to distribute these apples:",fun(m,n));
}
