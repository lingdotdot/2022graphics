#include <GL/glut.h>
#include <stdio.h>//為了printf,fprintf,fopen,fclose
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
float NewAngle[20],OldAngle[20];
void myRead()
{
    if(fout!=NULL){
        fclose(fout);fout=NULL;
    }
    if(fin==NULL) fin=fopen("file.txt","r");
    for(int i=0;i<20;i++)
    {
        OldAngle[i]=NewAngle[i];
        fscanf(fin, "%f",&NewAngle[i]);
    }
    glutPostRedisplay();
}
void myInterpolate(float alpha)
{
    for(int i=0;i<20;i++)
    {
        angle[i]=alpha*NewAngle[i]+(1-alpha)*OldAngle[i];
        printf("%.2f ",angle[i]);
    }
    printf("\n");
    glutPostRedisplay();
}
float alpha=0;
void timer(int t)
{
    float alpha=(t%100)/100.0;
    if(t%100==0) myRead();//做交接
    myInterpolate(alpha);
    glutTimerFunc(33,timer,t+1);
}
void keyboard(unsigned char key,int x,int y)
{
    if(key=='p')
    {
        myRead();
        glutTimerFunc(0,timer,0);
        //myInterpolate(alpha);
        //alpha=(alpha+0.01);
        //if(alpha>1)alpha=alpha-1;
    }
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
void display()
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
    glutCreateWindow("week16 interpolation");

    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutDisplayFunc( display );
    glutMainLoop();
}
