#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<assert.h>
char *my_strcpy(char *dest, const char *src)
{
	char *ret = dest;
	assert(dest);
	assert(src);
	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
}
int main()
{
	const char * src = "abc123";
	char dest[20];
	char * v = my_strcpy(dest, src);
	printf("%s", v);
	system("pause");
	return 0;
}
