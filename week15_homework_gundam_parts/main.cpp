#include <GL/glut.h>
#include "glm.h"
#include <stdio.h>//為了printf,fprintf,fopen,fclose
GLMmodel * pmodel =NULL;
GLMmodel * head=NULL;
GLMmodel * body =NULL;
GLMmodel * bot =NULL;
GLMmodel * arm1=NULL;
GLMmodel * arm2=NULL;
GLMmodel* hand1=NULL;
GLMmodel * hand2=NULL;
float angle[20],oldX=0;
int angleID=0;
FILE * fout = NULL,*fin=NULL;
void myWrite()
{
    if(fout==NULL) fout=fopen("file.txt","w+");
    for(int i=0;i<20;i++)
    {
        printf(   "%.2f",angle[i]);
        fprintf(fout,"%.2f ",angle[i]);
    }
    printf("\n");
    fprintf(fout,"\n");
}
GLMmodel * myReadOne(char* filename)
{
    GLMmodel * one =NULL;
    if(one==NULL)
    {
        one=glmReadOBJ("data/Gundam.obj");
        glmUnitize(one);
        glmFacetNormals(one);
        glmVertexNormals(one,90);
    }
}
void myRead()
{
    if(fout!=NULL){
        fclose(fout);fout=NULL;
    }
    if(fin==NULL) fin=fopen("file.txt","r");
    for(int i=0;i<20;i++)
    {
        fscanf(fin,"%f",&angle[i]);
    }
    glutPostRedisplay();
}
void keyboard(unsigned char key,int x,int y)
{
    if(key=='r')myRead();
    if(key=='s')myWrite();
    if(key=='0')angleID=0;
    if(key=='1')angleID=1;
    if(key=='2')angleID=2;
    if(key=='3')angleID=3;
}
void mouse(int button,int state,int x,int y)//mosue按下去
{
    oldX=x;
}
void motion(int x,int y)
{
    angle[angleID]+=(x-oldX);
    ///myWrite();
    oldX=x;
    glutPostRedisplay();
}
void display()//今日精華
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    if(head==NULL)head=myReadOne("data/head.obj");
    glmDraw(pmodel,GLM_SMOOTH);
}
void displayNotParts()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    if(pmodel==NULL)
    {
        pmodel=glmReadOBJ("data/Gundam.obj");
        glmUnitize(pmodel);
        glmFacetNormals(pmodel);
        glmVertexNormals(pmodel,90);
    }
    glmDraw(pmodel,GLM_SMOOTH);
    glutSwapBuffers();
}
void displayold()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1);
    glRectf(0.3,0.5,-0.3,-0.2);//正方形當作身體
    glPushMatrix(); //右半邊
        glTranslatef(0.3,0.5,0);
        glRotatef(angle[0],0,0,1);
        glTranslatef(-0.3,-0.4,0);
        glColor3f(1,0,0);
        glRectf(0.3,0.5,0.8,0.3);
        glPushMatrix();
            glTranslatef(0.8,0.4,0);//(3)把下手臂掛在關節上
            glRotatef(angle[1],0,0,1);//(2)旋轉
            glTranslatef(-0.8,-0.4,0);//(1)把下手臂的旋轉中心，放正中心
            glColor3f(0,1,0);
            glRectf(0.8,0.5,1.1,0.3);//再畫下手臂
        glPopMatrix();
    glPopMatrix();
    glPushMatrix(); //左半邊
        glTranslatef(-0.3,0.5,0);
        glRotatef(angle[2],0,0,1);
        glTranslatef(+0.3,-0.4,0);
        glColor3f(1,0,0);
        glRectf(-0.3,0.5,-0.8,0.3);
        glPushMatrix();
            glTranslatef(-0.8,0.4,0);//(3)把下手臂掛在關節上
            glRotatef(angle[3],0,0,1);//(2)旋轉
            glTranslatef(+0.8,-0.4,0);//(1)把下手臂的旋轉中心，放正中心
            glColor3f(0,1,0);
            glRectf(-0.8,0.5,-1.1,0.3);//再畫下手臂
        glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();
}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow("week15 angles TRT again");
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutDisplayFunc( display );
    glutMainLoop();
}
