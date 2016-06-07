#include <stdio.h>

int main(void) {
	// your code goes here
	char s;
	scanf("%c",&s);
	if((s>=65&&s<=90)||(s>=97&&s<=122)){
		printf("the character is alphabet");
		
	}
	else{
		printf("the character is not alphabet");
	}
	return 0;
}
