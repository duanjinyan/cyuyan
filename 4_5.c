#include <stdio.h>
#include <math.h>
#define D 1000
int main()
{
  int a,b; 
                                       
  printf("输入一个小于%d的整数a:",D);
  
  scanf("%d",&a);
  
  if (a>D) 
  {printf("输入错误，请重新输入一个小于%d的整数a:",D);
   scanf("%d",&a);
  }
  
  b=sqrt(a);
  
  printf("%d 所得平方根整数为：%d\n",a,b);
  
  return 0;
}