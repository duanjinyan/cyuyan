#include <stdio.h>
#include <math.h>
int main()
{
  int num,a,b,c,d,e_f,place;      
  printf("������һ������(0-99999):");
  scanf("%d",&num);
  if (num>9999)
       place=5;
  else  if (num>999)
       place=4;
  else  if (num>99)
       place=3;
  else  if (num>9)
       place=2;
  else place=1;
  printf("��������λ��:%d\n",place);
  printf("ÿλ����Ϊ:");
  b_d=num/10000;
  d=(int)(num-b_d*10000)/1000;
  c=(int)(num-b_d*10000-d*1000)/100;
  b=(int)(num-b_d*10000-d*1000-c*100)/10;
  a=(int)(num-b_d*10000-d*1000-c*100-b*10);
  switch(place)
    {case 5:printf("%d,%d,%d,%d,%d",b_d d,c,b,a);
	    printf("\n����������������Ϊ:");
	    printf("%d%d%d%d%d\n",a,b,c,d,b_d);
	    break;
     case 4:printf("%d,%d,%d,%d",d,c,b,a);
	    printf("\n��������Ϊ:");
	    printf("%d%d%d%d\n",a,b,c,d,);
	    break;
     case 3:printf("%d,%d,%d",c,b,a);
	    printf("\n����������������Ϊ:");
	    printf("%d%d%d\n",a,b,c);
	    break;
     case 2:printf("%d,%d",ten,indiv);
	    printf("\n����������������Ϊ:");
	    printf("%d%d\n",a,b);
	    break;
     case 1:printf("%d",a);
	    printf("\n����������������Ϊ:");
	    printf("%d\n",a);
	    break;
      }
  return 0;
 }
