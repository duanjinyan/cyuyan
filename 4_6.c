#include <stdio.h>
int main()
{ 
  int a,b;
  printf("ÇëÊäÈëxµÄÖµa:");
  scanf("%d",&a);
  if(a<1)               
  { 
    b=a;
    printf("a=%3d,   b=a=%d\n" ,a,b);
    }
   else  if(a<10)       
	{
	 b=2*a-1;
	 printf("a=%d,  b=2*a-1=%d\n",a,b);
	}
	else          
	{ 
	b=3*a-11;
	 printf("x=%d,  b=3*a-11=%d\n",a,b);
	}
  return 0;