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
```
上課內容:
      下載範例:下載網址: jsyeh.org/3dcg10 
      把data&win32兩個檔案下載下來，並且解壓縮。
      data檔案解壓縮後，移至windows檔案裡
      打開檔案裡的Transformation.exe
      即可。
      
      因為有同學問blogger筆記打分數的問題，所以老師教了如何串改發布時間的小技巧:
      Blogger可以再發布頁面選擇更改發布日期。
      GitHub透過指令更改時間:指令:git commit -m "add week02" --date="2022-03-02 12:00:00"
      
      關於作業2加分:
        畫圓的範例程式碼:
```
```C++
        #include <GL/glut.h>
        #include <math.h>
        void display()
        {
                glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
                glColor3f(1,1,0);///yellow
                ///畫圓: cos() sin()
                glBegin(GL_POLYGON);
         for(float angle=0; angle<3.14159*2; angle+=0.1){
                glVertex2f( cos(angle), sin(angle) );
         }
         glEnd();

         glutSwapBuffers();
         }
        int main( int argc, char**argv )
         {
                glutInit( &argc, argv);
                glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
                glutCreateWindow("HW2 bonus");

                glutDisplayFunc(display);
                glutMainLoop();
         }
```
```
正式上課內容:
        
        主題一-Translate移動
        製作一個新專案:week04_translate
        嘗試用程式移動紅色茶壺的位置。
        要記得要加上glPushMatrix() glPopMatrix()這兩行程式碼，以免移動數值累積，造成茶壺一直亂動
```
 ```C++
    void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();///push備份矩陣
        glTranslatef( 0.3, 0.2, 0);///右上角
        ///就不會一直偷偷動,因為移動會累積
        glColor3f(1,0,0);///red
        glutSolidTeapot(0.3);
    glPopMatrix();///pop還原矩陣

    glutSwapBuffers();
}
int main( int argc, char**argv )
{
    glutInit( &argc, argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow("week04 translate");

    glutDisplayFunc(display);
    glutMainLoop();
}
```
    如何把分配四個茶壺的位置:
```C++
#include <GL/glut.h>
void myTeapot(float x, float y)///自訂的函式
{
    glPushMatrix();///push備份矩陣
        glTranslatef( x, y, 0);
        glutSolidTeapot(0.3);
    glPopMatrix();///pop還原矩陣
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,0,0);///red
    myTeapot(+0.5, +0.5);
    myTeapot(+0.5, -0.5);
    myTeapot(-0.5, -0.5);
    myTeapot(-0.5, +0.5);

    glutSwapBuffers();
}
int main( int argc, char**argv )
{
    glutInit( &argc, argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow("week04 translate");

    glutDisplayFunc(display);
    glutMainLoop();
}
```
    主題二-滑鼠事件:
    使用glutMouseFunc(mouse)來註冊
    void mouse(int button,int state,int x,int y)這個函式，最後用print()把這四個值印出來
    左鍵0，中鍵1，右鍵2
    按下去0，放開1
    座標為0...300的值
```C++
#include <GL/glut.h>
#include <stdio.h>///printf()
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glutSwapBuffers();
}
void mouse(int button, int state, int x, int y)
{
    printf("%d %d %d %d\n", button, state, x, y);
}
int main( int argc, char**argv )
{
    glutInit( &argc, argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow("week04 mouse");

    glutDisplayFunc(display);///Display顯示
    glutMouseFunc(mouse);///Mouse滑鼠
    glutMainLoop();
}
```
```
   用滑鼠事件來做座標換算:
   由於OpenGL是用"正中間0,0;左邊-1,右邊+1，下面-1,上面+1"所以要做座標換算。
   老師給的口訣是:減一半，除一半，y變負值
```
```C++
#include <GL/glut.h>
#include <stdio.h>
int mouseX=0, mouseY=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,0);///黃色的
    glPushMatrix(); ///口訣:減一半、除一半, y還倒過來
        glTranslatef( (mouseX-150)/150.0 , -(mouseY-150)/150.0 , 0);
        glutSolidTeapot(0.3);///茶壼
    glPopMatrix();
    glutSwapBuffers();
}
void mouse(int button, int state, int x, int y)
{   //printf("%d %d %d %d\n", button, state, x, y);
    mouseX=x; mouseY=y;
}
int main( int argc, char**argv )
{
    glutInit( &argc, argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow("week04 mouse");

    glutDisplayFunc(display);///Display顯示
    glutMouseFunc(mouse);///Mouse滑鼠
    glutMainLoop();
}
```
    上課的最後一個程式:老師發明了一個程式，透過這個程式我們可以用滑鼠直接畫圖之外，小黑窗也會把座標
    備份在mx[i]&my[i]裡面，並印出來，方便我們畫出更漂亮的圖。
```C++
#include <GL/glut.h>
#include <stdio.h>
int mouseX=0, mouseY=0, N=0;///N個點!!!
int mx[100], my[100];///用來記錄,等一下要畫出來哦!!!
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,0);///黃色的
    glBegin(GL_LINE_LOOP);
        for(int i=0; i<N; i++){
            glVertex2f( (mx[i]-150)/150.0, -(my[i]-150)/150.0 );
        }
    glEnd();
    glutSwapBuffers();
}
void mouse(int button, int state, int x, int y)
{
    mouseX=x; mouseY=y;
    if(state==GLUT_DOWN){///按下去的 (放開的那個不算數)
        printf("    glVertex2f( (%d-150)/150.0, -(%d-150)/150.0 );\n", x,y);
        N++;
        mx[N-1]=x; my[N-1]=y;
    }
}
int main( int argc, char**argv )
{
    glutInit( &argc, argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow("week04 mouse");

    glutDisplayFunc(display);///Display顯示
    glutMouseFunc(mouse);///Mouse滑鼠
    glutMainLoop();
}
```
    
    
        
      


