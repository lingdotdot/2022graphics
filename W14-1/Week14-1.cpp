#include <stdio.h>//Ωm≤ﬂ∂}¿…&ºg¿…&√ˆ¿…
int main()
{
    FILE * fout=fopen("file.txt","w+");
    printf("Hello World\n");
    fprintf(fout,"Hello World\n");

    fclose(fout);
}
