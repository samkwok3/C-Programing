#include <stdio.h>
#include <string.h>

int strtohexraws(char * str, unsigned char raws[])
{
    int i, len, size = 0;

    if (str != NULL) {
        len = strlen(str);
        for (i=0;i<len;i+=2){
            sscanf(str+i, "%02x", &raws[size++]);
        }
    }

    return size;
}


int main(int argc, char *argv[])
{
	unsigned char raws[256];
	int length,i;

	length = strtohexraws(argv[1], raws);
	for (i=0; i<length; i++) {
		printf("%02x\n", raws[i]);
	}

	return 0;
}
