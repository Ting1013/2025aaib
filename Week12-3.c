///Week12-3.cpp
///fibonacci 數列
///要把它列出來使用for迴圈
#include <stdio.h>
int main()
{
    int a[30] = {0, 1};  // 初始化前兩項

    printf("%d %d ", a[0], a[1]);

    for(int i = 2; i < 30; i++) {
        a[i] = a[i - 1] + a[i - 2];
        printf("%d ", a[i]);
    }

    return 0;
}
