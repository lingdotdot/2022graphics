#include <opencv/highgui.h>
#include <opencv/cv.h>
#include <GL/glut.h>
#include "glm.h"
GLMmodel * body = NULL;
GLMmodel * upperarm = NULL;
GLMmodel * lowerarm = NULL;
float angle1=0;
float angle2=0;
const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 3.0f, 2.0f, -12.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };
int myTexture(char * filename)
{
    IplImage * img = cvLoadImage(filename); ///OpenCV讀圖
    cvCvtColor(img,img, CV_BGR2RGB); ///OpenCV轉色彩 (需要cv.h)
    glEnable(GL_TEXTURE_2D); ///1. 開啟貼圖功能
    GLuint id; ///準備一個 unsigned int 整數, 叫 貼圖ID
    glGenTextures(1, &id); /// 產生Generate 貼圖ID
    glBindTexture(GL_TEXTURE_2D, id); ///綁定bind 貼圖ID
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT); /// 貼圖參數, 超過包裝的範圖T, 就重覆貼圖
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT); /// 貼圖參數, 超過包裝的範圖S, 就重覆貼圖
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST); /// 貼圖參數, 放大時的內插, 用最近點
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST); /// 貼圖參數, 縮小時的內插, 用最近點
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, img->width, img->height, 0, GL_RGB, GL_UNSIGNED_BYTE, img->imageData);
	return id;
}
void display()
{
     glClearColor(1.0, 1.0, 0.6, 1.0);
     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
     if(body==NULL){
     body=glmReadOBJ("body.obj");
     glmUnitize(body);
     glmFacetNormals(body);
     glmVertexNormals(body,90);
     }
     glmDraw(body,GLM_SMOOTH | GLM_TEXTURE | GLM_MATERIAL);
     glPushMatrix();
        glTranslatef(0.2,0.1,0);
        glRotatef(angle1,0,0,1);
        glTranslatef(0.1,0,0);
        if(upperarm==NULL){
            upperarm=glmReadOBJ("upperarm.obj");
            glmUnitize(upperarm);
            glmFacetNormals(upperarm);
            glmVertexNormals(upperarm,90);
        }
        glmDraw(upperarm,GLM_SMOOTH | GLM_TEXTURE | GLM_MATERIAL);
        glPushMatrix();
                glTranslatef(0.22,0,0);
                glRotatef(angle1,0,0,1);
                glTranslatef(0.1,0,0);
            if(lowerarm==NULL){
                lowerarm=glmReadOBJ("lowerarm.obj");
                glmUnitize(lowerarm);
                glmFacetNormals(lowerarm);
                glmVertexNormals(lowerarm,90);
            }
            glmDraw(lowerarm,GLM_SMOOTH | GLM_TEXTURE | GLM_MATERIAL);
        glPopMatrix();
     glPopMatrix();
     glutSwapBuffers();
     angle1+=0.03;
     angle2+=0.03;
}
int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutInitWindowSize(800,800);
    glutCreateWindow("week12 homework");

    glutDisplayFunc( display );
    glutIdleFunc(display);
    myTexture("picture.png");
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
