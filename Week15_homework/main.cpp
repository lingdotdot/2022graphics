#include <opencv/highgui.h>
#include <opencv/cv.h>
#include <GL/glut.h>
#include <stdio.h>
#include "glm.h"
GLMmodel * head = NULL;
GLMmodel * body = NULL;
GLMmodel * lefthandupper = NULL;
GLMmodel * lefthanddown = NULL;
GLMmodel * righthandupper = NULL;
GLMmodel * righthanddown = NULL;
GLMmodel * leftlegupper = NULL;
GLMmodel * leftlegdown = NULL;
GLMmodel * rightlegupper = NULL;
GLMmodel * rightlegdown = NULL;
const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 3.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 10.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, -10.0f, 0.0f };
const GLfloat mat_ambient[]    = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 5.0f, 5.0f, 5.0f, 5.0f };
const GLfloat high_shininess[] = { 200.0f };
float angle[20], oldX=0;
int angleID=0;
FILE * fout = NULL, * fin = NULL;
void myWrite(){
    if(fin!=NULL){
        fclose(fin);
        fin=NULL;
    }
    if(fout==NULL) fout = fopen("file.txt", "w+");
    for(int i=0; i<20; i++){
        printf(      "%.2f ", angle[i] );
        fprintf(fout, "%.2f ", angle[i] );
    }
    printf("\n");
    fprintf(fout, "\n");
}
void myRead(){
    if(fout!=NULL) { fclose(fout); fout=NULL; }
    if(fin==NULL) fin = fopen("file.txt", "r");
    for(int i=0; i<20; i++){
        fscanf(fin, "%f", &angle[i] );
    }
    glutPostRedisplay();
}
void keyboard( unsigned char key, int x, int y){
    if( key=='r' ) myRead();
    if( key=='s' ) myWrite();
    if( key=='0' ) angleID=0;
    if( key=='1' ) angleID=1;
    if( key=='2' ) angleID=2;
    if( key=='3' ) angleID=3;
    if( key=='4' ) angleID=4;
    if( key=='5' ) angleID=5;
    if( key=='6' ) angleID=6;
    if( key=='7' ) angleID=7;
    if( key=='8' ) angleID=8;
}
void mouse(int button, int state, int x, int y){
    oldX = x;
}
void motion(int x, int y){
    angle[angleID] += (x-oldX);
    oldX = x;
    glutPostRedisplay();
}
GLMmodel * myReadOne(char * filename){
    GLMmodel * one = NULL;
    if( one == NULL ){
        one = glmReadOBJ(filename);
        glmUnitize(one);
        glmFacetNormals(one);
        glmVertexNormals(one, 90);
    }
    return one;
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glTranslatef(0.0,0.8,0);
    glRotatef(180,0,1,0);
    if(head==NULL) head=myReadOne("head.obj");
    glmDraw(head, GLM_SMOOTH);
    glPopMatrix();
    glPushMatrix();
        glRotatef(180,0,1,0);
        glTranslatef(0.0,0.43,0);
        if(body==NULL) body=myReadOne("body.obj");
        glmDraw(body, GLM_SMOOTH);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(0.2,0.6,0);
        glRotatef(angle[1],0,0,1);
        glTranslatef(0.1,0,0);
        if(lefthandupper==NULL) lefthandupper=myReadOne("lefthandupper.obj");
        glmDraw(lefthandupper,GLM_SMOOTH);
        glPushMatrix();
            glTranslatef(0.15,0,0);
            glRotatef(angle[2],0,0,1);
            glTranslatef(0.15,0,0);
            if(lefthanddown==NULL)lefthanddown=myReadOne("leftdown.obj");
            glmDraw(lefthanddown,GLM_SMOOTH);
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.2,0.6,0);
        glRotatef(angle[3],0,0,1);
        glTranslatef(-0.1,0,0);
        if(righthandupper==NULL) righthandupper=myReadOne("righthandupper.obj");
        glmDraw(righthandupper,GLM_SMOOTH);
        glPushMatrix();
            glRotatef(180,0,0,1);
            glTranslatef(0.15,0,0);
            glRotatef(angle[4],0,0,1);
            glTranslatef(0.15,0,0);
            if(righthanddown==NULL)righthanddown=myReadOne("rightdown.obj");
            glmDraw(lefthanddown,GLM_SMOOTH);
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();
        glRotatef(-180,0,1,0);
        glTranslatef(-0.15,0.15,0);
        glRotatef(angle[5],0,0,1);
        glTranslatef(0,-0.2,0);
        if(leftlegupper==NULL)leftlegupper=myReadOne("leftlegupper.obj");
        glmDraw(leftlegupper,GLM_SMOOTH);
        glPushMatrix();
            glScalef(0.3,0.3,0.3);
            glTranslatef(0,-0.7,0);
            glRotatef(angle[6],0,0,1);
            glTranslatef(0,-0.5,0);
            if(leftlegdown==NULL)leftlegdown=myReadOne("leftlegdown.obj");
            glmDraw(leftlegdown,GLM_SMOOTH);
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();
        glRotatef(180,0,1,0);
        glTranslatef(0.15,0.15,0);
        glRotatef(angle[7],0,0,1);
        glTranslatef(0,-0.2,0);
        if(rightlegupper==NULL)rightlegupper=myReadOne("rightlegupper.obj");
        glmDraw(rightlegupper,GLM_SMOOTH);
        glPushMatrix();
            glScalef(0.3,0.3,0.3);
            glTranslatef(0,-0.8,0);
            glRotatef(angle[8],0,0,1);
            glTranslatef(0,-0.5,0);
            if(rightlegdown==NULL)rightlegdown=myReadOne("rightlegdown.obj");
            glmDraw(rightlegdown,GLM_SMOOTH);
        glPopMatrix();
    glPopMatrix();

    glutSwapBuffers();
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(600,600);
    glutCreateWindow("week15 homework");

    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);
    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
    glutMainLoop();
}
