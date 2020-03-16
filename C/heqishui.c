#include<stdio.h>
void main()
{long m,t,x,y;
 printf("请输入人数m:");
 scanf("%1d",&m);
 x=m/20;                        //分x个大组，每组买13瓶汽水，借七瓶
 t=m-20*x;                      //剩下大组外的t人
 y=t/3;                         //剩下t人分为y个小组，没买两瓶汽水，借1瓶
 t=m-20*x-3*y;                  //剩下大小组的t人，每人花1元喝一瓶
 printf("喝%1d瓶汽水，至少需要%.2f元。\n",m,(13*x+2*y)*1.40+t));
}