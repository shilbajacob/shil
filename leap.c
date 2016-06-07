#include <stdio.h>

int main(void) {
	// your code goes here
int yr;
scanf("%d",&yr);
if(yr%4==0||yr%400==0){
	printf("the year:%d is a leap year",yr);
}
else
{
	printf("the given year is not a leap year");
}
	return 0;
}
