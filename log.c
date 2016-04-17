#include "log.h"

#include <stdio.h>


void _log(char *messge)
{
	char logInfo[1024] = {0};
	snprintf(logInfo, sizeof(logInfo)-1, "%s", messge);
	printf("log: %s\n", logInfo);
}

void _log(void *messge)
{
	char logInfo[1024] = {0};
	snprintf(logInfo, sizeof(logInfo)-1, "%s", messge);
	printf("log: %s\n", logInfo);
}



