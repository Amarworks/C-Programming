#include <stdio.h>

int main()
{
    int totalSeconds, hours, minutes, seconds;

 int totalseconds=3600;

    hours = totalSeconds / 3600;    // 1 hour = 3600 sec    totalSeconds = totalSeconds % 3600;

    minutes = totalSeconds / 60;            // 1 minute = 60 seconds
    seconds = totalSeconds % 60;

    printf("Hours: %d\nMinutes: %d\nSeconds: %d\n",
           hours, minutes, seconds);

    return 0;
}

