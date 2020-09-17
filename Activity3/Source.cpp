#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
void unq(char str[])
{
	char* a = str;
	while (*a != '\0')
	{
		if (*a != *(a + 1))
		{
			printf("%c", *a);
		}
		a++;
	}
	printf("\n");
	return ;
}
int main()
{
	char str1[80],str2[80],*p,*q,str3[80],str4[80],*a,*b;
	int i = 0, t = 0;
	scanf("%s", str1);
	scanf("%s", str2);
	unq(str1);
	unq(str2);
	p = str1;
	q = str2;
	while (*p != '\0')
	{
		if (*p != *(p + 1))
		{
			str3[i] = *p;
			i++;
		}
		p++;
	}
	str3[i] = *p;
	a = str3;
	while (*q != '\0')
	{
		if (*q != *(q + 1))
		{
			str4[t] = *q;
			t++;
		}
		q++;
	}
	str4[t] = *q;
	b = str4;
	while (*a == *b)
	{
		if (*a == '\0' && *b == '\0')
		{
			printf("\nUniq(A) = Uniq(B)\n");
		}
		a++;
		b++;
	}
	return 0;
}