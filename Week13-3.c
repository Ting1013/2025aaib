///Week13-3.cpp
///用輾轉相除法找答案(最大公因數)
#include <stdio.h>
int gcd(int a, int b)
{///老大 a, 老大 b
    printf("老大a: %d 老大b:  %d\n", a, b);
    if(a==0)return b;
    if(b==0)return a;
    return gcd (b, a%b);
}///老二變老大,老三變老二
int main()
{
    printf("請輸入2個數字(ex.51 68 ) ");
    int a, b;
    scanf("%d %d",&a,&b);
    int ans = gcd(a, b);
    printf("它的最大公因數是:%d\n", ans);
}
