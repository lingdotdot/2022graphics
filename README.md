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
    複製freeglut裡lib裡最短的檔案/並更改檔案名稱為:libglut32.a
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
    如何分配四個茶壺的位置:
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

# Week05

上課內容:
1.打開今天的上課範例/網址:http://jsyeh.org/3dcg10
    下載data/解壓縮/data放進解壓縮後的windows資料夾
    下載win32/解壓縮/執行transform.exe
    
    右上角按滑鼠右鍵，可以換模型
    下方glRotatef()函式可以調數值(角度,x,y,z)
    並觀察與練習調整數值的旋轉效果。(0,1,0)(0,-1,0)(1,0,0)(0,0,1)(1,1,0)，配合安培右手(可以知道怎麼旋轉)
2.寫blogger的小秘密:可以利用gist.github.com，分享或存放程式碼到blogger裡。
3.實作程式碼:撰寫一個會依數值旋轉的黃色茶壺
    使用glRotatef(角度,0,0,0)函式，調整角度的數值
    程式碼如下:
```C++
    
#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glRotatef(180,0,0,1);
        glColor3f(1,1,0);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow("week05 Rotate");

    glutDisplayFunc( display );

    glutMainLoop();
    return 0;
}
```
4.改良上一個程式，加入mouse互動，會很酷!利用glutMotionFunc()，茶壺旋轉的角度會跟著滑鼠改變
    程式碼如下:
```C++
#include <GL/glut.h>
float angle=0;
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
void motion(int x,int y)
{
    angle=x;
    display();
}
int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow("week05 mouse Motion");

    glutDisplayFunc( display );
    glutMotionFunc(motion);
    glutMainLoop();
}
```
5.改良上一個程式碼，讓轉動更順。利用mouse函式&motion函式，再利用一點計算。
  程式碼如下:
```C++
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
```
6.複習上周的上課內容。包含mosue&GL_LINE_LOOP
程式碼一:利用滑鼠點擊的點，把線連起來，製作圖案。
```C++
#include <stdio.h>
#include <GL/glut.h>
int N=0;
int x[1000],y[1000];
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);
    for(int i=0;i<N;i++){
        glVertex2f((x[i]-150)/150.0,-(y[i]-150)/150.0);
    }
    glEnd();
    glutSwapBuffers();
}
void mouse(int button,int state,int mouseX,int mouseY)
{
    if(state==GLUT_DOWN){
        N++;
        x[N-1]=mouseX;
        y[N-1]=mouseY;
        printf("現在按下滑鼠，得到新座標 %d %d\n",x[N-1],y[N-1]);
    }
    display();
}
int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow("week05 mouse Motion");

    glutDisplayFunc( display );
    glutMouseFunc(mouse);
    glutMainLoop();
}
```
    程式碼二:改良上一個程式，把Mouse函式改成Motion函式，可以利用滑鼠連續畫線製作圖案。
```C++
#include<stdio.h>
#include <GL/glut.h>
int N=0;
int x[1000],y[1000];
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);
    for(int i=0;i<N;i++){
        glVertex2f((x[i]-150)/150.0,-(y[i]-150)/150.0);
    }
    glEnd();
    glutSwapBuffers();
}
void motion(int mouseX,int mouseY)
{
        N++;
        x[N-1]=mouseX;
        y[N-1]=mouseY;
        printf("現在按下滑鼠，得到新座標 %d %d\n",x[N-1],y[N-1]);
    display();
}
int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow("week05 mouse Motion");

    glutDisplayFunc( display );
    glutMotionFunc(motion);
    glutMainLoop();
}
```
今天上課內容結束。

# Week06
上課內容:
1.介紹電腦圖學之父 Ivan Sutherland (Sketchpad)的故事。印象深刻，這位厲害的人在跟我年紀差不多的時候雖然差點沒辦法畢業，但發明了電腦圖學，他是有多大的勇氣，上台發表自己做的東西。
2.課本範例:網址:jsyeh.org/3dcg10
    data/data.zip/解壓縮後/放進已解壓縮後的windows資料夾裡
    win32/windows.zip/解壓縮後/執行Transformation.exe
    
    程式碼旁邊可以切換Swap Translate/Rotate
        公轉&自轉
實作程式:
一:上課主題:keyboard，先上moodle下載freeglut資料夾，並把最短改更短lib修改，打開一個新的GLUT專案。今天的第一個小程式，希望能做keyboard的互動。先把最基礎的茶壺程式複製進來，再改幾行程式碼就完成了。重點程式碼為glutKeyboardFunc(keyboard)，再去定義void keyboard(unsigned char key,int x,int y)函式。這個程式可以利用printf()印出鍵盤的值。記得:使用printf()要引用#include<stdio.h>。
```C++
#include <GL/glut.h>
#include <stdio.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
        glColor3f( 1, 1, 0 );
        glutSolidTeapot(0.3);
    glutSwapBuffers();
}
void keyboard( unsigned char key, int x, int y )
{
    printf("現在按下:%c 座標在:%d %d\n", key, x, y);
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week06 keyboard");

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
}
```
二:我們改了一下剛剛的程式，把keyboard()，再搭配mouse()和motion()函式，希望可以做到更完整的互動。因為怕一次做太多，同學跟不上，所以熱血小葉老師決定先定義好程式就好。
```C
#include <GL/glut.h>
#include <stdio.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
        glColor3f( 1, 1, 0 );
        glutSolidTeapot(0.3);
    glutSwapBuffers();
}
void keyboard( unsigned char key, int x, int y )
{
    printf("現在按下:%c 座標在:%d %d\n", key, x, y);
}
void mouse( int button, int state, int x, int y )
{
}
void motion( int x, int y )
{
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week06 keyboard mouse motion");

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);

    glutMainLoop();
}
```
二之二:把glTranslatef()拿出來用。這個程式就可以做到茶壺跟著滑鼠座標移動。
```C
#include <GL/glut.h>
#include <stdio.h>
float x=0, y=0, z=0, oldX, oldY;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glTranslatef(  (x-150)/150.0  , -(y-150)/150.0  ,  z  ); ///Maya: w
        ///glRotatef( angle,  0, 0, 1);
        ///glScalef( scale, scale, scale );
        glColor3f( 1, 1, 0 );
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void keyboard( unsigned char key, int mouseX, int mouseY )
{
    printf("現在按下:%c 座標在:%d %d\n", key, mouseX, mouseY);
}
void mouse( int button, int state, int mouseX, int mouseY )
{
    oldX = mouseX; oldY = mouseY;
}
void motion( int mouseX, int mouseY )
{
    x += (mouseX-oldX);
    y += (mouseY-oldY);
    oldX = mouseX; oldY = mouseY;
    display();
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week06 keyboard mouse motion");

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);

    glutMainLoop();
}
```
二之三:接下來，因為今日的最後目標是要製作一個鍵盤功能，去模仿maya和unity的移動，旋轉，縮放的效果。所以接下來要實作出一個縮放程式，利用創一個新變數float scale，去判斷mouseX是否大於或小於oldX，如果大於，茶壺就會變大1%。相反的，如果小於，茶壺的大小就會變小1%。完成!
```C
#include <GL/glut.h>
#include <stdio.h>
float x=0, y=0, z=0, scale=1.0, oldX, oldY;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        //glTranslatef(  (x-150)/150.0  , -(y-150)/150.0  ,  z  ); ///Maya: w
        ///glRotatef( angle,  0, 0, 1);
        glScalef( scale, scale, scale ); ///Maya: r
        glColor3f( 1, 1, 0 );
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void keyboard( unsigned char key, int mouseX, int mouseY )
{
    printf("現在按下:%c 座標在:%d %d\n", key, mouseX, mouseY);
}
void mouse( int button, int state, int mouseX, int mouseY )
{
    oldX = mouseX; oldY = mouseY;
}
void motion( int mouseX, int mouseY )
{
    if( mouseX>oldX ) scale = scale * 1.01;
    if( mouseX<oldX ) scale = scale * 0.99;
    //x += (mouseX-oldX);
    //y += (mouseY-oldY);
    oldX = mouseX; oldY = mouseY;
    display();
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week06 keyboard mouse motion");

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);

    glutMainLoop();
}
```
三之一:那我們會縮放&移動之後，要模仿maya的介面，搭配鍵盤的判斷。如果鍵盤按下w||W，now=1，做移動。如果鍵盤按下r||R，now=3，做縮放。在motion()裡，判斷按下的是什麼按鍵，並完成動作的計算。完成!
```C
#include <GL/glut.h>
#include <stdio.h>
float x=150, y=150, z=0, scale=1.0, angle=0.0, oldX, oldY;
int now=1;///1:移動, 2:旋轉, 3:縮放
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glTranslatef( (x-150)/150.0 , -(y-150)/150.0 , z ); ///Maya: w
        //glRotatef( angle,  0, 0, 1); ///Maya: e
        glScalef( scale, scale, scale ); ///Maya: r
        glColor3f( 1, 1, 0 );
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void keyboard( unsigned char key, int mouseX, int mouseY )
{   //printf("現在按下:%c 座標在:%d %d\n", key, mouseX, mouseY);
    if(key=='w' || key=='W') now=1;///移動 (小心不要中文)
    //if(key=='e' || key=='E') now=2;///旋轉
    if(key=='r' || key=='R') now=3;///縮放
}
void mouse( int button, int state, int mouseX, int mouseY )
{
    oldX = mouseX; oldY = mouseY;
}
void motion( int mouseX, int mouseY )
{
    if(now==1){///移動
        x += (mouseX-oldX);
        y += (mouseY-oldY);
    }else if(now==3){///縮放
        if( mouseX>oldX ) scale = scale * 1.01;
        if( mouseX<oldX ) scale = scale * 0.99;
    }
    oldX = mouseX; oldY = mouseY;
    display();
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week06 keyboard mouse motion");

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);

    glutMainLoop();
}
```
三之二:今天的最後最後，要加上旋轉。最後就可以模仿wer完整的maya介面。如果按下e||E，now=2，會做旋轉。補充:glutInitWindowSize(500,500)可以放大視窗(注意:glTranslatef()裡面減一半除一半的值要做修改，這樣茶壺才會在適當的位置。)。
```C
#include <GL/glut.h>
#include <stdio.h>
float x=250, y=250, z=0, scale=1.0, angle=0.0, oldX, oldY;
int now=1;///1:移動, 2:旋轉, 3:縮放
void display()
{
    glClearColor(0.5, 0.5, 0.5, 1);///用來 Clear的色彩 R,G,B,A Alpha沒用到
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glTranslatef( (x-250)/250.0 , -(y-250)/250.0 , z ); ///Maya: w
        glRotatef( angle,  0, 0, 1); ///Maya: e
        glScalef( scale, scale, scale ); ///Maya: r
        glColor3f( 1, 1, 0 );
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void keyboard( unsigned char key, int mouseX, int mouseY )
{   //printf("現在按下:%c 座標在:%d %d\n", key, mouseX, mouseY);
    if(key=='w' || key=='W') now=1;///移動 (小心不要中文)
    if(key=='e' || key=='E') now=2;///旋轉
    if(key=='r' || key=='R') now=3;///縮放
}
void mouse( int button, int state, int mouseX, int mouseY )
{
    oldX = mouseX; oldY = mouseY;
}
void motion( int mouseX, int mouseY )
{
    if(now==1){///移動
        x += (mouseX-oldX);
        y += (mouseY-oldY);
    }else if(now==2){///旋轉
        angle += (mouseX-oldX);
    }else if(now==3){///縮放
        if( mouseX>oldX ) scale = scale * 1.01;
        if( mouseX<oldX ) scale = scale * 0.99;
    }
    oldX = mouseX; oldY = mouseY;
    display();
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutCreateWindow("week06 keyboard mouse motion");

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);

    glutMainLoop();
}
```
# Week08
```C++
今天的主題是打光Lighting。
1.下載上課範例，網址：jsyeh.org/3dcg10，下載windows.zip＆data.zip，把解壓縮後的data資料夾放在解壓縮後的windows資料夾裡。
  然後跑Light & Material.exe 範例。
  範例的視窗：左下角點擊可切換 material，左上角點擊可切換 3D 模型
2.範例的程式碼的數值，可以滑鼠拖曳使打光的位置改變
3.接下來，程式碼實作，要把打光的效果呈現出來。把freeglut下載，放在桌面上，解壓縮後，lib裡的最短的在變更短（跟之前上課的步驟是一樣的），
打開新的GLUT專案，先不要把原先的程式碼刪掉，把程式碼先用Notepad++備份起來。先找出來，裡面有跟打光相關的程式碼，分別是打光的陣列＆打光的函式。
4.接下來，把最簡單的10行畫茶壺的程式碼，複製貼上。把打光的陣列放在最前面宣告，把打光的函式放在glutMainLoop()之前。
```
完整的程式碼如下：
```C++
#include <GL/glut.h>
const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
        glutSolidTeapot( 0.3 );
    glutSwapBuffers();
}

int main( int argc, char**argv )
{
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow("week08 light");

    glutDisplayFunc(display);

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
```
5.因為現在做出來的打光效果不是很清楚明白，所以調整一下打光的位置，z的值變成負數，再加上黃色的顏色，茶壺就會打光呈現得很漂亮了。
完整的程式碼如下：
```C
#include <GL/glut.h>
const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, -5.0f, 0.0f };//加個負號

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
        glColor3f( 1, 1, 0 ); //黃色的茶壼
        glutSolidTeapot( 0.3 );
    glutSwapBuffers();
}
```
```C++
6.補充glutCreateWindow()之前, 做視窗的相關設定。
glutCreateWindow()之後, 才能執行OpenGL指令
最後使用 glutMainLoop()主迴圈, 讓程式持續進行，不結束
7.介紹打光的法向量＆解釋3D模型的數值。
8.下課前有多一個主題，下禮拜會再講一次。
```
The End!

# Week09
```
今日主題為貼圖。
今天上課有先進行期中考試。
```C++
glPushMatrix();//備份矩陣
    glTranslatef(x,y,z);//移動
    glRotatef(angle,x,y,z);//轉動
    glScalef(x,y,z);//縮放
    glBegin(GL_POLYGON);//開始畫
        glColor3f(r,g,b);//色彩
        glTexCoord2f(tx,ty);//貼圖座標
        glNormal3f(nx,ny,nz);//打光的法向量
        glVertex2f(x,y);//頂點
    glEnd();//結束畫
glPopMatrix();//還原矩陣
```
首先，要先跑課本範例，至網址https://jsyeh.org/3dcg10/，下載windows.zip&data.zip，把解壓縮後的data資料夾放進解壓縮後的window資料夾，然後跑window資料夾裡的Texture.exe。

接下來開始今天的實作:
第一步驟:先下載貼圖需要的OpenCV
去moodle上下載OpenCV 2.1.0(一定要去moodle上下載，雖然版本舊，但檔案小又好用)
#*注意安裝的時候，有一步PATH要設定，要點選第二個選項(Add PATH...)&預設安裝位置一定要在C槽裡 (C:\OpenCV2.1)
第二步驟:OpenCV安裝完後，要重啟CodeBlocks
第三步驟:在要開始實作之前，還有最後一個步驟，要設定CodeBlocks
1.打開新的File-New-EmptyFile，然後檔名存為week09_opencv.cpp
2.Setting-Compiler-Search directories-Compiler-Add C:\OpenCV2.1\include

3.                -Search directories-Linker-Add C:\OpenCV2.1\lib

4.Setting-Compiler Setting-Linker setting 輸入:cv210 按Add & cxcore210 按Add & highgui210 按Add
第四步驟:開始寫程式(讀入圖片並秀出圖片視窗，確認OpenCV有安裝完成):
#include <opencv/highgui.h>

int main()

{

    IplImage * img=cvLoadImage("week09.jpg");

    cvShowImage("week09",img);

    cvWaitKey(0);

}
第五步驟:開始寫更強的程式:
1.打開新的GLUT專案，一樣下載freeglut資料夾(步驟都跟之前一模模一樣樣)，然後把專案放在桌面的freeglut資料夾裡。把原先的程式碼刪除，然後去GitHub倉庫裡偷最簡單秀出茶壺的程式，複製貼上進專案裡。
2.程式可以秀出茶壺後，接下來，我們要把OpenCV&OpenGL的程式碼結合。寫出可以跑出茶壺&圖片的程式(雖然，茶壺要等圖片刪除視窗後，才會秀得出來)，我們把簡單的茶壺程式碼加上myTexture()，讀入並印出，並在main()裡加入myTexture();。把earth.jpg地球地圖放在freeglut的bin目錄裡。

第六步驟:最後我們寫了一個程式，可以把圖貼在茶壺上，當作是一種材質的效果。
首先貼上老師給的函式，然後在main()裡的myTexture()裡輸入檔案名稱。並會顯示出結果，複製的程式碼內容如下:
#include <opencv/highgui.h> ///使用 OpenCV 2.1 比較簡單, 只要用 High GUI 即可
#include <opencv/cv.h>
#include <GL/glut.h>
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
```
        
  
