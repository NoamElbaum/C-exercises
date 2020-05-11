#include <stdio.h>

struct dot
{
    int x;
    int y;
};

void load(struct dot line[])
{
    int x=0,y=0;
    for (int i=0; i<6; i++){
        line[i].x = x;
        line[i].y=y;
        x=x+4;
        y=y+2;
    }
}

void print(struct dot line[])
{
   for(int i=0; i<6;i++){
       printf("x = %d , y = %d \n",line[i].x ,line[i].y);
   }
}

void main()
{
    struct dot line[6];
    load(line);
    print(line);
}