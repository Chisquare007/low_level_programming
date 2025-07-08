#include <stdio.h>
// >80 =a
// 70-80 =b

int main(){

	int score;
	int joy;

	for(joy=1; joy<6; joy++)
	{

	printf("enter your score ");
	scanf("%d",&score);

	if(score >= 80 && score <= 100)
	{
		printf("your grade is A \n ");
	}
	else if(score >= 70 && score <=80)
	{
		printf("your grade is B \n ");
	}
	else if(score >= 65 && score <= 70)
	{
		printf("your grade is BC \n ");
	}
	else
	{
		printf("failed \n ");
	}
	}

	return 0;
}
