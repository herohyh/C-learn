#include <stdio.h>
main()
{
	int amount ;
	int price=0;
	printf("�������Ԫ����");
	scanf("%d",&price);
	printf("������Ʊ�棨Ԫ����");
	scanf("%d",&amount); 
	int change = amount - price;
	printf("����%dԪ��\n",change);
	
	return 0;
}
