#include <stdio.h>//�m�߶}��&Ū��&����
int main()
{
    FILE * fout=fopen("file2.txt","w+");
    fprintf(fout,"angle1 %d\n",999);
    fclose(fout);

    FILE * fin = fopen("file2.txt","r");
    char line[200];
    int a;
    fscanf(fin,"%s %d", line,&a);
    printf("Ū��F�r��:%s �ξ��%d\n",line,a);
    fclose(fin);
}
