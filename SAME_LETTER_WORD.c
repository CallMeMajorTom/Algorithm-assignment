//判断单词是否是变位词
//思路：给每个单词创建一个26位的数组，统计每个字母的个数，若一样，则是
#include <stdio.h>
void main()
{
    int count_A[26]={0};
    int count_B[26]={0};
    char A[50],B[50];
    int i;
    printf("Please input the first word(all small letter):");
    gets(A);
    printf("Please input the seconde word(all small letter):");
    gets(B);
    for(i = 0;A[i] != '\0';i++)
    {
        count_A[A[i]-'a']++ ;
    }
    for(i = 0;B[i] != '\0';i++)
    {
        count_B[B[i]-'a']++ ;
    }
    for(i = 0;i < 26;i++)
    {
        if(count_A[i] != count_B[i]) break;
    }
    if(i == 26) printf("HAS SAME LETTERS\n");
    else printf("HAS DIFFERENT LETTERS\n");
}
