#include <stdio.h>

int main()
{
	typedef char string[30];

	string name;

	int length = 0;

	scanf("%[^\n]", &name);

	while (name[length] != '\0')
	{
		length++;
	}

	printf("The length of words (%s) is %d\n", name, length);

	return 0;
}