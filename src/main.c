#include <functions.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
    if (argc == 2)
    {
        loadMap(&argv[1]);
    }
    else
    {
        printf("%s\n", "use: ./a.out <map> ");
    }
}