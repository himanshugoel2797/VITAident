#include "utils.h"

void printStarWithColor(Color color)
{
	psvDebugScreenSetFgColor(color);
	printf("* ");
	psvDebugScreenSetFgColor(COLOR_WHITE);
}

void getSizeString(char *string, uint64_t size) //Thanks TheOfficialFloW
{
	double double_size = (double)size;

	int i = 0;
	static char *units[] = { "B", "KB", "MB", "GB", "TB", "PB", "EB", "ZB", "YB" };
	while (double_size >= 1024.0f) {
		double_size /= 1024.0f;
		i++;
	}

	sprintf(string, "%.*f %s", (i == 0) ? 0 : 2, double_size, units[i]);
}