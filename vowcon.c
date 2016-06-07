#include <stdio.h>

int main(void) {
	// your code goes here
	char s;
	scanf("%c",&s);
	if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U'){
		printf("the character is vowel");
		
	}
	else{
		printf("the character is consonant");
	}
	return 0;
}
