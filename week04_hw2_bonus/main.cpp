#include <GL/glut.h>
#include <math.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    for(float angle=0;angle<3.14159*2; angle+=0.1){
        glVertex2f(cos(angle),sin(angle));
    }
    glEnd();

    glutSwapBuffers();
}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow("week03ªºµøµ¡");

    glutDisplayFunc( display );

    glutMainLoop();
    return 0;
}
