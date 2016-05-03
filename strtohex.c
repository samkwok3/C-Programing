#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
unsigned int c=0;
int i;
int len;
char *p;

len = strlen(argv[1]);
p = argv[1];
for (i=0;i<len;i+=2){
	sscanf(p+i, "%02x", &c);
	printf("%d\n", c);
}
	return 0;
}
