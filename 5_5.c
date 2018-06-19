#include <stdio.h>
int main()
 {
  int  a,n,i=1,sn=0,tn=0;
  printf("a,n=:");
  scanf("%d,%d",&a,&n);
  while (i<=n)
  {
  tn=tn+a;  
  sn=sn+tn;
  a=a*10;
  ++i;
  }
  printf("a+aa+aaa+...=%d\n",sn);
  return 0;
  }


5-6
#include <stdio.h>
int main()

 {double s=0,t=1;
  int n;
  for (n=1;n<=20;n++)
  {
   t=t*n;
   s=s+t;
  }
  printf("1!+2!+...+20!=%22.15e\n",s);
  return 0;
}
