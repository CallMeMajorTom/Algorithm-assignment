//求2+22+222+2222+22...22（不考虑精度）
#include <stdio.h>
#include <math.h>
void main(){
    int i = 0;
    double s = 0;
    int n;
    printf("Please input the number of 2:");
    scanf("%d",&n);
    for(i = 0;i < n; i++)
        s += (n - i) * 2 * pow(10,i);
        printf("The result is :%f\n",s);
}
