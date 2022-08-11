#include<stdio.h>
int main()
{
    FILE * f;
    f = fopen("data.txt","w");
    for(int b =97; b<=100; b++ )
    {
        fputc(b,f);

    }

    fclose(f);
    return 0;
}
