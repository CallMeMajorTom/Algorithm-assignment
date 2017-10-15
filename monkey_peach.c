// 猴子第1天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了 m个
// 第2天又将剩下的桃子吃掉一半，又多吃了m个。以后每天早上都吃了前一天剩下的一半零m个
// 到第n天早上想再吃时，见只剩d个桃子了。求第1天共摘了多少桃
#include <stdio.h>
int peaches(int m,int n,int d)
{
  for(int i = n;i > 1;i--)
  {
    d = (d + m)*2;
  }
  return d ;
}
int main()
{
  int m,n,d;
  printf("please input the number of extra peaches:");
  scanf("%d",&m);
  printf("please input the number of days:");
  scanf("%d",&n);
  printf("please input the number of rest peaches:");
  scanf("%d",&d);
  printf("There is %d peaches at first",peaches(m,n,d));
  return 1;
}
