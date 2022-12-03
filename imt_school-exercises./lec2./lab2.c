// lec2 lab2

#include <stdio.h>
int main()
{
	int hours;
	int salary;
printf("Please enter your working hours\n");
scanf("%d",&hours);
if (hours<40)
{
	salary =hours*50;
	salary=salary-(salary*0.1);
	printf("the salary is %d", salary);
}
else 
{
salary =hours*50;
printf("the salary is %d", salary);	
}

}
