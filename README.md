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
    git clone http://倉庫網址
    
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
