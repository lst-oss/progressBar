#include "proBar.h"

void process_bar()
{
	char bar[NUM];
	memset(bar, '\0', sizeof(bar));
	const char *label = "|/-\\";
	int i = 0;
	while(i <= 89)
	{
		printf("[%s][%d%%][%c]\r", bar, 11 + i, label[i % 4]);
		fflush(stdout);
		bar[i++] = '#';
		usleep(100000);
	}
	printf("\n");
}
