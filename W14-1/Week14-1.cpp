#include <stdio.h>//�m�߶}��&�g��&����
int main()
{
    FILE * fout=fopen("file.txt","w+");
    printf("Hello World\n");
    fprintf(fout,"Hello World\n");

    fclose(fout);
}
