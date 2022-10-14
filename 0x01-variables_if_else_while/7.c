#include <stdio.h>
int main(void)
{
	int numd;
	char alphs;

	for (numd = 0; numd <= 9; numd++)
		putchar(numd + '0');
	
	for (alphs = 'z'; alphs >= 'r'; alphs--)
		putchar(alphs);
	
	putchar('\n');
	return 0;
}
