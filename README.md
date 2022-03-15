# 2022graphics
# Week01
```
1.OpenGL專案
    打開OpenGL專案
2.WebGL專案
    試試看網址
3.GLUT專案
    moodle上下載freeglut
    把freeglut檔案解壓縮後放桌面
    改freeglut裡lib裡最短的檔案:改成:libglut32.a
    開啟新的GLUT專案
    專案名取好，並把專案位置設為桌面上的freeglut
4.利用指令，雲端上傳今天的程式碼
    git Bash指令:
    
    準備步驟
    cd desktop
    git clone http://倉庫網址  網址:github.com/lingdotdot/2022graphics
    
    修改的檔案
    cd 2022graphics
    git status
    git add . 
    git status
    
    加入
    git config --global user.email "linyuhan457@gmail.com"
    git config --global user.name "lingdotdot"
    git commit -m"上傳名稱"
    
    git push//上傳至雲端
```
# Week03
```
1.把上週的程式從GitHub下載
  打開Git Bash輸入以下指令即完成:
  cd desktop
  git clone https://github.com/lingdotdot/2022graphics
  檢查是否有2022graphics資料夾在桌面上，有的話就成功了!
  
2.https://jsyeh.org/3dcg10/
  打開網址: 05/04/Examples/win32/ 解壓縮檔案:把Shape.exe打開即可
  
3.開始今天的重點:點線面色彩，寫程式把圖像表現出來:
  程式碼:glcolor 3f(1,1,0) //顏色的程式碼，調括弧裡的值，得到想要的顏色
  
4.把上週的兩個程式碼觀念合併
    製作以下兩個簡易版程式:
        1.一個做出實心茶壺，檔案名稱:week03_color
        2.一個是三色(上次上課)，三色三角形 檔案名稱:week03-2_color_triangle 彩色三角形
```
week03_color程式碼如下:
```C++
#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glColor3f(1,1,0);//顏色
    glutSolidTeapot(0.3);//實心茶壺的造型

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
```

week03-2_color_triangle程式碼如下:
```C++
#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glColor3f(1,1,0);

    glBegin(GL_TRIANGLES);
                glColor3f(1.0f, 0.0f, 0.0f);   glVertex2f(0.0f,   1.0f);
                glColor3f(0.0f, 1.0f, 0.0f);   glVertex2f(0.87f,  -0.5f);
                glColor3f(0.0f, 0.0f, 1.0f);   glVertex2f(-0.87f, -0.5f);
                //三個頂點的顏色:就會變成三色三角形
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
```
回家作業程式碼:
```C++
#include <GL/glut.h>
static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3ub(209, 1, 1);
    glVertex2f((344-200)/200.0, -(84-200)/200.0);
    glVertex2f((344-200)/200.0,  -(289-200)/200.0);
    glVertex2f((33-200)/200.0, - (289-200)/200.0);
    glVertex2f((33-200)/200.0,  -(84-200)/200.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 142);
    glVertex2f((33-200)/200.0, -(84-200)/200.0);
    glVertex2f((188-200)/200.0,  -(84-200)/200.0);
    glVertex2f((187-200)/200.0, - (185-200)/200.0);
    glVertex2f((33-200)/200.0,  -(186-200)/200.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f((105-200)/200.0, -(113-200)/200.0);
    glVertex2f((109-200)/200.0,  -(95-200)/200.0);
    glVertex2f((115-200)/200.0, - (113-200)/200.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f((116-200)/200.0, -(113-200)/200.0);
    glVertex2f((128-200)/200.0,  -(102-200)/200.0);
    glVertex2f((125-200)/200.0, - (118-200)/200.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f((126-200)/200.0, -(118-200)/200.0);
    glVertex2f((141-200)/200.0,  -(116-200)/200.0);
    glVertex2f((131-200)/200.0, - (127-200)/200.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f((132-200)/200.0, -(130-200)/200.0);
    glVertex2f((147-200)/200.0,  -(134-200)/200.0);
    glVertex2f((132-200)/200.0, - (137-200)/200.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f((131-200)/200.0, -(142-200)/200.0);
    glVertex2f((141-200)/200.0,  -(152-200)/200.0);
    glVertex2f((127-200)/200.0, - (150-200)/200.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f((125-200)/200.0, -(151-200)/200.0);
    glVertex2f((129-200)/200.0,  -(168-200)/200.0);
    glVertex2f((117-200)/200.0, - (156-200)/200.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f((105-200)/200.0, -(113-200)/200.0);
    glVertex2f((109-200)/200.0,  -(95-200)/200.0);
    glVertex2f((115-200)/200.0, - (113-200)/200.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f((116-200)/200.0, -(156-200)/200.0);
    glVertex2f((109-200)/200.0,  -(172-200)/200.0);
    glVertex2f((105-200)/200.0, - (156-200)/200.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f((105-200)/200.0, -(113-200)/200.0);
    glVertex2f((109-200)/200.0,  -(95-200)/200.0);
    glVertex2f((115-200)/200.0, - (113-200)/200.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f((103-200)/200.0, -(155-200)/200.0);
    glVertex2f((90-200)/200.0,  -(167-200)/200.0);
    glVertex2f((94-200)/200.0, - (152-200)/200.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f((93-200)/200.0, -(148-200)/200.0);
    glVertex2f((76-200)/200.0,  -(150-200)/200.0);
    glVertex2f((88-200)/200.0, - (141-200)/200.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f((87-200)/200.0, -(139-200)/200.0);
    glVertex2f((72-200)/200.0,  -(134-200)/200.0);
    glVertex2f((87-200)/200.0, - (131-200)/200.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f((88-200)/200.0, -(127-200)/200.0);
    glVertex2f((76-200)/200.0,  -(115-200)/200.0);
    glVertex2f((92-200)/200.0, - (119-200)/200.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f((95-200)/200.0, -(116-200)/200.0);
    glVertex2f((90-200)/200.0,  -(101-200)/200.0);
    glVertex2f((103-200)/200.0, - (113-200)/200.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f((99-200)/200.0, -(116-200)/200.0);
    glVertex2f((109-200)/200.0,  -(114-200)/200.0);
    glVertex2f((119-200)/200.0, - (116-200)/200.0);
    glVertex2f((126-200)/200.0, -(124-200)/200.0);
    glVertex2f((129-200)/200.0,  -(134-200)/200.0);
    glVertex2f((125-200)/200.0, - (145-200)/200.0);
    glVertex2f((120-200)/200.0, -(150-200)/200.0);
    glVertex2f((110-200)/200.0,  -(153-200)/200.0);
    glVertex2f((100-200)/200.0, - (151-200)/200.0);
    glVertex2f((92-200)/200.0, -(144-200)/200.0);
    glVertex2f((90-200)/200.0,  -(134-200)/200.0);
    glVertex2f((92-200)/200.0, - (124-200)/200.0);
    glEnd();

    glutSwapBuffers();
}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow("week03");

    glutDisplayFunc( display );

    glutMainLoop();
    return 0;
}
```

# Week04

