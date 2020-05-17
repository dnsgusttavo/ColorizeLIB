#include <stdio.h>
#include "../Colorize/colorize.h"

char colors[][13] = { "BLACK","DARK_BLUE","DARK_GREEN","DARK_CYAN","DARK_RED","DARK_MAGENTA","DARK_YELLOW","DARK_WHITE","BRIGHT_BLACK","LIGHT_BLUE","LIGHT_GREEN","LIGHT_CYAN","LIGHT_RED", "LIGHT_MAGENTA", 	"LIGHT_YELLOW", "WHITE" };

int main()
{   
    colorize(0,15);
    printf("\n\tCOLORIZE LIB COLOR REFERENCE\n");

    for(int i = 0; i < 16; i++)
    {   
        //Show numeric color reference
        colorize(0,15);
        (i < 10) ? printf("\t[%d]  ",i) : printf("\t[%d] ",i);

        //Show color in terminal
        colorize(i,i);
        printf("#########");

        //Show written color reference
        colorize(0,15);
        printf(" %s\n",colors[i]);
    }
}