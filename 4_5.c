#include <stdio.h>
#include <math.h>
#define D 1000
int main()
{
  int a,b; 
                                       
  printf("����һ��С��%d������a:",D);
  
  scanf("%d",&a);
  
  if (a>D) 
  {printf("�����������������һ��С��%d������a:",D);
   scanf("%d",&a);
  }
  
  b=sqrt(a);
  
  printf("%d ����ƽ��������Ϊ��%d\n",a,b);
  
  return 0;
}