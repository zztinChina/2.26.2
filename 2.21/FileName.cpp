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
	printf("�ַ����ĸ���Ϊ%d",rel);

	return 0;
}