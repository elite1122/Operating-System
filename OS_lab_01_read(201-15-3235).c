#include<stdio.h>
int main()
{
    FILE * f;
    f = fopen("data.txt","r");
    for(int b =97; b<=100; b++ )
    {
        fputc(b,f);

    }
    // Use of fgetc() function
    int d;
    d = fgetc(f);
    printf("char is : %c",d);
    fclose(f);

    return 0;
}

