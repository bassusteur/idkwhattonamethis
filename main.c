#include <stdio.h>

#define GRID 20
#define GRIDD (GRID*GRID)

void cls(){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}

struct px
{
    int index;
    char *val;
} pxs[GRID][GRID];

struct px init()
{
    for(int i=0; i<GRID; i++)
    {
        for(int j=0; j<GRID; j++)
        {
            pxs[i][j].index = j;
            pxs[i][j].val = "■";
        }
    }
    return pxs[GRID][GRID];
}

struct px set(int x, int y, char *value) 
{
    pxs[x][y].val = value;
    return pxs[GRID][GRID];
}

char get(int x, int y)
{
    char get = pxs[x][y].val;
    return get;
}

struct px display()
{
    for(int a=0; a<GRID; a++)
    {
        printf("\n");
        for(int b=0; b<GRID; b++)
        {
            printf("%s ", pxs[a][b].val);
        }
    }
    printf("\n");
}

int main()
{

    init();

    for(int i=0; i<GRID; i++)
    {
        char *value[20] = '0';
        value = i;
        set(0,0,value);
    }

    while(1){
        display();
        cls();
    }

    return 0;
}
