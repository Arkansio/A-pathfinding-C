#include <functions.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
    if (argc == 2)
    {
        loadMap("test");
    }
    else
    {
        printf("%s\n", "use: ./a.out <map> ");
    }
}