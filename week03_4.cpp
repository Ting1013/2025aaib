///week03-4.cpp
#include <stdio.h>
int main()
{
	int s=0,a;///答案加進s=0
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	s+=i;
	printf("%d",s);///印出答案 "s"
}
