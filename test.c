#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "progrec.h"

int main()
{
    progrec(20, NULL);  // set progress bar to 20 precent
    usleep(1000000);       // sleep for 1 second
    progrec(100, NULL); // set progress bar to 100 precent
}
