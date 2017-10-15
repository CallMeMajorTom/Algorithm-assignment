//求n的阶乘所得数的末尾有多少个0
//思路：10的因数为2*5，因此有几组2*5就有几个0，每一个偶数都有一个因数2，但只有结尾为0或5的数才有因数5，可见2比5易得
//因此只要统计阶乘中有几个数是结尾0或5即可
#include <stdio.h>
void main()
{
    printf("Please input the number:");
    int n;
    double s=1;
    scanf("%d",&n);
    printf("The number of zeros is %d\n",n/5);
}
