#include <stdio.h>//練習開檔&讀檔&關檔
int main()
{
    FILE * fout=fopen("file2.txt","w+");
    fprintf(fout,"angle1 %d\n",999);
    fclose(fout);

    FILE * fin = fopen("file2.txt","r");
    char line[200];
    int a;
    fscanf(fin,"%s %d", line,&a);
    printf("讀到了字串:%s 及整數%d\n",line,a);
    fclose(fin);
}
