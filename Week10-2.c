///Week10-2.cpp
///�U�P�Ҹ�(�ϧǼƦr)%10/10
#include <stdio.h>
int main()
{
    printf("�п�J1�ӼƦr(ex. 379): ");
    int n;
    scanf("%d",&n);
    printf("�A��J�F %d\n",n);
    while(n>0){
        printf("�{�b�� %d ��� %d\n",n, n%10);
        n = n / 10;
    }
}
