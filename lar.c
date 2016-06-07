#include <stdio.h>

int main(void) {
	// your code goes here
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c){
	printf("the largest number is:%d",a);
}
else if(b>a&&b>c)
{
printf("the largest number is:%d",b);	
}
else{
	printf("the largest number is:%d",c);
}
	return 0;
}
