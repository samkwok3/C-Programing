cell_count.c

//person have 40~60 trillion cells.
//���༡�庬�д�Լ500�ڸ���Ԫ�������Ծ�ռ�����е����֮һ

#include <stdio.h>
#include <sys/time.h>

#define TEN_BILLION 10000000000

int main()
{
	struct timeval t_start, t_end;
	unsigned long long diff;
	
	unsigned long long cell_count = 0;

	printf("unsigned long long length:%d in Win7 x64\n", sizeof(cell_count));
	printf("variable cell_count value:%llu \n", cell_count);
	
	gettimeofday(&t_start, NULL);
//	while(++cell_count<TEN_BILLION);
	do {
		cell_count++;
	}while(cell_count<TEN_BILLION); // 100��=10 billion
	gettimeofday(&t_end, NULL);
	
	printf("variable cell_count value:%llu \n", cell_count);
	
	diff = 1000000*(t_end.tv_sec-t_start.tv_sec) + t_end.tv_usec - t_start.tv_usec;
	printf ( "diff %llu usecond\n", diff);
	
	return 0;
	
}