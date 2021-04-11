#include<stdio.h>
int main()
{
	int balance=10000;
	int withdrawl;
	printf("enter the withdrawl amount\n");
	scanf("%d",&withdrawl);
	if(withdrawl<=balance)
	{
		balance-=withdrawl;
		printf("remaining balance is %d \nyou successfully withdrawl your money.\nthanku for visiting.",balance);

	}
	else
	{
		printf("insufficient balance");
	}
	return 0;
}
