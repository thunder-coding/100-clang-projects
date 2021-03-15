#include <stdio.h>

int main() {
	char name[50];
	printf("What is your name? ");
	scanf("%50s", &name);
	printf("Your name is %s", name);
	return 0;
}
