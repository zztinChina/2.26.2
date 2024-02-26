#include<stdio.h>
int my_strlen(char* arr)
{
	int count = 0;
	while (*arr)
	{
		count++;
		arr++;
	}
	return count;
}
int main()
{
	char arr[] = "a";
	int rel = my_strlen(arr);
	printf("字符串的个数为%d",rel);

	return 0;
}