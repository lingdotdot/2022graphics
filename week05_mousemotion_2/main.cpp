#include <GL/glut.h>
float angle=0,oldX=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glRotatef(angle,0,0,1);
        glColor3f(1,1,0);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void mouse(int button,int state,int x,int y)
{
    oldX=x;
}
void motion(int x,int y)
{
    angle+=(x-oldX);
    oldX = x;
    display();
}
int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow("week05 mouse Motion");

    glutDisplayFunc( display );
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutMainLoop();
}
