///week11-1.cpp
#include <stdio.h>
int main(){
    printf("請輸入 1422:");
    int n,ans=0;
    scanf("%d",&n);
    while(n>0){
        printf("現在剝除來的皮:%d\n",n%10);
        if(n%10>ans)
            ans=n%10;
        n%10;
        n/=10;
    }
    printf("找到最大的皮是:%d",ans);
}
