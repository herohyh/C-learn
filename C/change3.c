#include <stdio.h>
main()
{
	int amount ;
	int price=0;
	printf("请输入金额（元）：");
	scanf("%d",&price);
	printf("请输入票面（元）：");
	scanf("%d",&amount); 
	int change = amount - price;
	printf("找您%d元。\n",change);
	
	return 0;
}
