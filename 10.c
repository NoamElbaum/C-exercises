#include <stdio.h>
#include <windows.h>

void main()
{
    int ch;
    char c;
    int counter[3] = {0,0,0};
    FILE *f;
    f = fopen("data.txt", "r");
    while(ch != EOF)
    {
        ch = fscanf(f, "%c", &c);
        if(c == 'A')
        {
            printf("A");
            Sleep(100);
            counter[0]++;
        }
        else if(c == 'E')
        {
            printf("E");
            Sleep(100);
            counter[1]++;
        }
        else if(c == 'C')
        {
            printf("C");
            Sleep(100);
            counter[2]++;
        }
    }
    printf("\nA: %d\nE: %d\nC: %d",counter[0],counter[1],counter[2]);
}