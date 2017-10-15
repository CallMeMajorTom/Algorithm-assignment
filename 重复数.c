//给定N是一个正整数，求比N大的最小“不重复数”，这里的不重复是指没有两个相等的相邻位；
#include <stdio.h>
int main(){
    int N,j,len;
    int n[50] = {0};
    int flag = 0;//标志位
    int flag_c = 0;
    int i = 0;
    printf("Please input the number:");
    scanf("%d",&N);
    N++;
    while(N > 0)
    {
        n[i++] = N % 10;
        N = N/10;
    }
    len = i;
    for (i = len; i >= 0 ; i--)
    {
        if(flag == 0 && n[i] == n[i-1]) {
            n[i-1]++;
            if(n[i-1] > 9) flag_c = 1;
            flag = 1;
            if(flag_c == 1 ) {j = i + 1; n[j]++;len++;}
                else j = i - 1;

        }
        if((flag_c == 1 || flag == 1) && i >= 0)
        {
            for (i = j - 1; i >= 0 ; i--)
            {
                if((j - i) % 2 == 1) n[i] = 0;
                    else n[i] = 1;
            }
            break;
        }
    }
    printf("The minimal unrepeat number is ");
    for (i = len - 1; i >= 0 ; i--)
        printf("%d",n[i]);
    printf("\n");
}
