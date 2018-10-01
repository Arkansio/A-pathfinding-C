#ifndef STRUCT_H
#define STRUCT_H

typedef struct
{
    int     x;
    int     y;
}       position;

typedef struct
{
    position a;
    position b;
    int      x;
    int      y;
}       map;

#endif