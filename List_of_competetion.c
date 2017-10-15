//两个球队比赛，每队出3个人，甲队：ABC；乙队：XYZ;
//A说不和X比；C说不和X，Z比；求比赛名单；
#include <stdio.h>
#define N 3
void main(){
    for(int i = 0;i < N;i++){
        for(int j = 0;j < N;j++){
            if(i!=j)//这里放一个判断，比赛队员不能重复比赛，判断写在外面又可以减少循环次数
                for(int k = 0;k < N;k++){
                    if(i!=k&&j!=k)//同上，排除相同
                        if(i != 0 && k != 0 && k != 2)//这里根据题意排除掉不符合的名单
                        {printf("A vs. %c\nB vs. %c\nC vs. %c",'x'+i,'x'+j,'x'+k);printf("\n");}
                }
        }
    }
}
