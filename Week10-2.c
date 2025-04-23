///Week10-2.cpp
///下周考試(反序數字)%10/10
#include <stdio.h>
int main()
{
    printf("請輸入1個數字(ex. 379): ");
    int n;
    scanf("%d",&n);
    printf("你輸入了 %d\n",n);
    while(n>0){
        printf("現在把 %d 剝皮 %d\n",n, n%10);
        n = n / 10;
    }
}
