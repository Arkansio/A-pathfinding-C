#ifndef STRUCT_H
#define STRUCT_H

typedef struct
{
    int     x;
    int     y;
}       position;

typedef struct
{
    char     **data;
    position a;
    position b;
    int      height;
    int      width;
}       map;

#endif