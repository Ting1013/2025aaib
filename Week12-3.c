///Week12-3.cpp
///fibonacci �ƦC
///�n�⥦�C�X�Өϥ�for�j��
#include <stdio.h>
int main()
{
    int a[30] = {0, 1};  // ��l�ƫe�ⶵ

    printf("%d %d ", a[0], a[1]);

    for(int i = 2; i < 30; i++) {
        a[i] = a[i - 1] + a[i - 2];
        printf("%d ", a[i]);
    }

    return 0;
}
