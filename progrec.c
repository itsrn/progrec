#include <stdio.h>
#include "progrec.h"
#include <string.h>

/*
 * Creates a progress bar in the terminal.
 * @param precent The progress bar precentage that will be displayed
 * @param color The progress bar color. Current supported values are NULL (for white), "blue", "green", "yellow".
 */
void progrec(int percent, const char *color)
{
    if (percent < 0 || percent > 100)
    // checks if the precenet is between 0 and 100
    {
        // throws an error message
        printf("Error: Percent must be between 0 and 100.\n");
        return;
    }

    // an array of the current valid colors
    const char *validColors[] = {"blue", "yellow", "green"};
    // variable that will be used to check if the color provided is valid
    int validColor = 0;

    if (color == NULL)
    {
        color = "default";
        validColor = 1;
    }

    for (int i = 0; i < sizeof(validColors) / sizeof(validColors[0]); ++i)
    {
        if (color != NULL && strcmp(color, validColors[i]) == 0)
        {
            validColor = 1;
            break;
        }
    }

    if (color != NULL && !validColor)
    {
        // throws an error message if the color provided is not valid
        printf("Error: Invalid color option. Valid options are: blue, yellow, green or NULL for white.\n");
        return;
    }

    printf("\r[");

    for (int i = 0; i < 50; ++i)
    {
        if (i < percent / 2)
        // prints #s based on precentage and color
        {
            if (color != NULL && strcmp(color, "blue") == 0)
            {
                printf("\033[34m#");
            }
            else if (color != NULL && strcmp(color, "yellow") == 0)
            {
                printf("\033[33m#");
            }
            else if (color != NULL && strcmp(color, "green") == 0)
            {
                printf("\033[32m#");
            }
            else
            {
                printf("#");
            }
        }
        else
        {
            // prints nothing
            printf(" ");
        }
    }

    printf("\033[0m] %d%%", percent);
    fflush(stdout);
}
