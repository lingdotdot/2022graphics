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
2.程式可以秀出茶壺後，接下來，我們要把OpenCV&OpenGL的程式碼結合。寫出可以跑出茶壺&圖片的程式(雖然，茶壺要等圖片刪除視窗後，才會秀得出來)，我們把簡單的茶壺程式碼加上myTexture()，讀入並印出，並在main()裡加入myTexture();。把earth.jpg地球地圖放在freeglut的bin目錄裡，才能正確的秀出圖片。

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

# Week10
第一件事:檢討期中考成績&疫情相關宣導
主題一:上週貼圖+貼到四邊形=背景
先完成設定:
-安裝freeglut
-安裝OpenCV 2.1.0 vs2008
-重開CodeBlocks
-打開新的GLUT專案
-把上週的myTexture.txt的myTexture()複製貼上
-完成OpenCV設定:
	-Setting-Compiler, search directories, Compiler+ C:\OpenCV2.1\include
	-Setting-Compiler, search directories, Linker+ C:\OpenCV2.1\lib
	-Setting-Compiler, Linker settings+ cv210 cxcore210 highgui210
```C
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
接下來，把剛剛複製貼上的myTexture()再加上10行程式。便能完成上週的進度。
-記得，圖片要放在freeglut/bin裡
-在main()裡面，把myTexture("圖檔名稱"); 放好
```C
int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week10 texture background");

    glutDisplayFunc(display);
    myTexture("earth.jpg");

    glutMainLoop();
}
```
正式開始貼圖到四邊形。
-glBegin(GL_POLYGON)
-glTexCoord2f(tx,ty);glVertex2f(x,y);寫四次，代表四邊形的四個頂點
-glEnd();
```C
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    ///glutSolidTeapot(0.3);
    glBegin(GL_POLYGON);
    ///圖片的0,0在左上角
        glTexCoord2f( 0, 1 ); glVertex2f( -1, -1 );
        glTexCoord2f( 1, 1 ); glVertex2f( +1, -1 );
        glTexCoord2f( 1, 0 ); glVertex2f( +1, +1 );
        glTexCoord2f( 0, 0 ); glVertex2f( -1, +1 );
    glEnd();
    glutSwapBuffers();
}
```
主題二:上週貼圖+貼到圓球=會轉的地球
利用OpenGL User函式來做到
-打開新的GLUT專案
-宣告指標GLUquadric * sphere=NULL;
-在 main()裡, 將指標設定好 sphere = gluNewQuadric();
-在 display()裡, 加入 gluQuadricTexture(sphere, 1);
-在 display()裡, 再加入 gluSpher(sphere, 1, 30, 30);
gluSphere(sphere,半徑,柳丁切經,層層切緯)

我們要把地球轉正。利用glPushMatrix()&glPopMatrix()裡面多一行glRotatef(角度,1,0,0)即可。
-glutMainLoop()之前，要利用glEnable(GL_DEPTH_TEST)函式去開啟3D深度測試的功能(才不會破圖)。
```C
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();//step02-2
        glRotatef(90, 1,0,0);//step02-2
        gluQuadricTexture(sphere, 1);
        gluSphere(sphere, 1, 30, 30);///glutSolidTeapot(0.3);
    glPopMatrix();//step02-2
    glutSwapBuffers();
}
int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week10 texture background");

    glutDisplayFunc(display);
    myTexture("earth.jpg");
    sphere = gluNewQuadric();
    glEnable(GL_DEPTH_TEST);//step02-2

    glutMainLoop();
}
```
主題三:上週貼圖+貼到模型=鋼彈模型
讓地球可以轉動起來。
-在display();的最後一行angle++或angle+=0.1(轉動較慢)/每次要轉動多少
-glRotatef(angle,0,-1,0)/地球會對著-Y軸轉動
-main()裡面，加上glutIdleFunc(display)
```C
#include <opencv/highgui.h> ///使用 OpenCV 2.1 比較簡單, 只要用 High GUI 即可
#include <opencv/cv.h>
#include <GL/glut.h>
GLUquadric * sphere = NULL;///一個指到二次曲面的指標
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
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glRotatef(angle, 0,-1,0);
        glRotatef(90, 1,0,0);
        gluQuadricTexture(sphere, 1);
        gluSphere(sphere, 1, 30, 30);///glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
    angle++;
}
int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week10 texture background");

    glutIdleFunc(display);
    glutDisplayFunc(display);
    myTexture("earth.jpg");
    sphere = gluNewQuadric();
    glEnable(GL_DEPTH_TEST);

    glutMainLoop();
}
```
今日上課的最後:我們要學會怎麼把模型讀進來。結合會旋轉的地球的程式碼，再用week08教過的程式碼，再做貼圖即可。
-建立新的GLUT專案
-模型myGundam.zip的data資料夾放進桌面freeglut/bin裡
-glm.h & glm.c放進專案的資料夾裡(week10_texture_model):在jsyeh.org/3dcg10 的 source.zip
-把glm.c改成glm.cpp
-glm.cpp加到專案裡(CodeBlocks操作)
-把week08程式複製貼上
-把myTexture("earth.jpg")改成myTexture("data/Diffuse.jpg")

```C
//前面 include glm.h, 宣告模型的指標
#include "glm.h"
GLMmodel * pmodel = NULL;
//中間讀入模型
    glPushMatrix();
        glRotatef(angle, 0,1,0);
        if( pmodel == NULL ){
            pmodel = glmReadOBJ("data/Gundam.obj");
            glmUnitize( pmodel );
            glmFacetNormals( pmodel );
            glmVertexNormals( pmodel, 90 );
        }
        glmDraw( pmodel, GLM_MATERIAL | GLM_TEXTURE);
    glPopMatrix();
//記得在 main() 裡面將貼圖讀進來
    myTexture("data/Diffuse.jpg");
```

# Week11
# 主題一/1:
-安裝freeglut(把更短的改得更短):libglut32.a
-安裝OpenCV 2.1(上週)Add PATH..
-重開CodeBLocks
-打開新的GLUT專案week11_gundam
-下載 jsyeh.org/3dcg10的source.zip裡面glm.h& glm.c(改名稱為glm.cpp)
-把glm.h&glm.cpp放到week11_gundam專案裡
-myGundam.zip的模型裡的data模型檔放進freeglut/bin
# 主題一/2:
-貼上week09的貼圖程式碼
-設定OpenCV咒語(跟上週一樣)
	 Setting-Compiler-Search directories: Compiler include: C:\OpenCV2.1\include
	 Setting-Compiler-Search directories: Linker lib: C:\OpenCV2.1\lib
	 Setting-Compiler-Linker: cv210 /cxcore210/ highgui210
-左邊的Projects裡，游標放在week11_gundam按右鍵:Add Files:glm.cpp檔
如果執行成功，代表設定都沒錯!
```C++
#include <opencv/highgui.h>
int main()
{
	IplImage * img = cvLoadImage("data/Diffuse.jpg");
	cvShowImage("week11", img);
	cvWaitKey(0);//等任意鍵繼續
}
```
# 主題二/1:
-把myTexture放在程式的前面
-把10行基本GLUT程式放進去(茶壺)
-在main()的glutMainLoop()之前加上myTexture("data/Diffuse.jpg");
-這樣模型就會貼圖貼在茶壺上
```C++
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
# 主題二/2:
-#include "glm.h"
-GLMmodel * pmodel =NULL;
-display()裡面，貼入畫模型的程式
```C
void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	if( pmodel == NULL ){///程式放這裡
		pmodel = glmReadOBJ( "data/gundam.obj" ); ///讀入模型
		glmUnitize( pmodel ); ///把模型pmodel 調整成單位大小 -1...+1
		glmFacetNormals( pmodel ); ///把Facet面的法向量Normals算出來
		glmVertexNormals( pmodel , 90 ); ///把 Vertex的法向量,用面平均算出來,超過90度就分開
	}
	glmDraw(pmodel, GLM_TEXTURE);
	glutSwapBuffers();
}
```
就可以執行出鋼彈模型了。
# 主題二/3:
由於鋼彈顏色不漂亮，我們推斷是上下顛倒了，所以我們修改程式碼，使得3D模型更漂亮。
看起來模型被壓扁了，所以要開啟3D的功能。
-利用小畫家，把freeglut/bin/data/Diffuse.jpg，做垂直翻轉的動作
-在glutMainLoop()之前，加上glEnable(GL_DEPTH_TEST);開啟3D深度測試功能
-讓3D模型轉起來:glPushMatrix()...glRotatef(angle,0,1,0)...glPopMatrix()
-加上glutIdleFunc(display)
```C
#include <opencv/highgui.h> ///使用 OpenCV 2.1 比較簡單, 只要用 High GUI 即可
#include <opencv/cv.h>
#include <GL/glut.h>
#include "glm.h"
GLMmodel * pmodel = NULL;
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
float angle=0;
void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	if( pmodel == NULL ){///程式放這裡
		pmodel = glmReadOBJ( "data/hand1.obj" ); ///讀入模型
		glmUnitize( pmodel ); ///把模型pmodel 調整成單位大小 -1...+1
		glmFacetNormals( pmodel ); ///把Facet面的法向量Normals算出來
		glmVertexNormals( pmodel , 90 ); ///把 Vertex的法向量,用面平均算出來,超過90度就分開
	}

	glPushMatrix();
        glRotatef(angle, 0,0,1);
        glScalef(2,2,2);
        glmDraw(pmodel, GLM_TEXTURE);
    glPopMatrix();
	glutSwapBuffers();
	angle+=1;
}
int main(int argc, char**argv)
{
    glutInit( &argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week11 gundam");

    glutDisplayFunc(display);
    glutIdleFunc(display);
    myTexture("data/Diffuse.jpg");
    glEnable(GL_DEPTH_TEST);

    glutMainLoop();
}
```
# 主題三:
-老師講故事，鼓勵大家，要多練習才會學會
-如何使用Maya匯出3D模型檔(OBJ)影片網址:https://www.youtube.com/watch?v=D4a7cNFF9kQ
-今天最後的主題時間不夠，所以提早下課
-最後示範Git指令-如果電腦之前有git clone過，就可以不用再做這一步了。記得在目錄中git pull把雲端
先拉下來同步。如果電腦之前有git config過，也可以不用做。
只要把程式檔放進2022graphics
-git pull
-git add .
-git commit -m
-git push

# Week12
# step01-1:
看課本Transformation.exe:jsyeh.org/3dcg10網址下載windows.zip & data.zip，把解壓縮後的data資料夾放進解壓縮後的windows資料夾裡，執行windows資料夾裡的Transformation.exe，去觀察模型轉動的變化。
例一:看起來像是放在右邊像陀螺一樣轉動。
```C
glTranslatef( 0.8, 0.0, 0.0);//在右邊
glRotatef( angle, 0, 1, 0);//轉動
```
例二:車子在繞著中心點轉
```C++
glRotatef( angle, 0, 1, 0);
glTranslatef( 0.8, 0.0, ,0.0);
```
# step01-2:
老師利用在程式碼上畫框框，去詳細講解程式碼的原理。
例一:
glBegin();藍色的車子
glScalef();大小正常的藍色的車子
glRotatef();旋轉中的大小正常的藍色的車子
glTranslatef();移到右邊的旋轉中的大小正常的藍色的車子
例二:
glBegin();藍色的車子
glScalef();大小正常的藍色的車子
glTranslate();把大小正常的藍色的車子移到右邊去
glRotatef();整個轉動的移到右邊去的大小正常的藍色的車子

# step01-3:
https://120.125.80.50/GL : 點選OpenGL T-R-T函式:對待定軸轉動練習 連結
-滑鼠點ToDraw，在左介面，滑鼠拖拉去畫出一個圖形
-會產生新的myDrawObject(0);，可以拖移這行程式碼去觀察變化
-滑鼠點angle，按空白鍵後，圖形會轉動起來
-可以再增加多一個圖形，可以滑鼠點glTranslatef()程式的方框後,可改變東西的位置

# step02-1:
繼續更詳細的利用網頁去解釋T-R-T原理

# step02-2:
程式實作:freeglut裝好，打開新GLUT專案取名為week12_TRT，用簡單的茶壺程式碼去配合T-R-T函式。
```C++
#include <GL/glut.h>
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1);///白色的
    glutSolidTeapot( 0.3 );///大茶壼
    glPushMatrix();
        glTranslatef(0.3, 0, 0);///把下面旋轉中的東西 "掛在" 某處
        glRotatef( angle, 0,0,1 );///旋轉
        glTranslatef(0.2, 0, 0);///往右下移動(把把手移到中心)
        glColor3f(1,0,0);///紅色的
        glutSolidTeapot( 0.2 );///茶壼
    glPopMatrix();
    glutSwapBuffers();
    angle+=0.1;
}
```
# step03-1:
把剛剛的程式改編，做出像作業很像的手臂關節轉動，打開新的GLUT專案取名為week12_TRT_TRT
```C
#include <GL/glut.h>
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1);///白色的
    glutSolidTeapot( 0.3 );///大茶壼
    glPushMatrix();
        glTranslatef(0.3, 0, 0);///把下面旋轉中的東西 "掛在" 某處
        glRotatef( angle, 0,0,1 );///旋轉
        glTranslatef(0.2, 0, 0);///往右下移動(把把手移到中心)
        glColor3f(1,0,0);///紅色的
        glutSolidTeapot( 0.2 );///茶壼
        glPushMatrix();
            glTranslatef(0.2, 0, 0);///把下面旋轉中的東西 "掛在" 某處
            glRotatef( angle, 0,0,1 );///旋轉
            glTranslatef(0.2, 0, 0);///往右下移動(把把手移到中心)
            glColor3f(1,0,0);///紅色的
            glutSolidTeapot( 0.2 );///茶壼
        glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();
    angle+=0.03;
}
```
The End

# Week13
# step01-1
我們用glRectf(x1,y1,x2,y2);來畫出簡單的四邊形(身體)，來做TRT。
-打開新的GLUT專案，取名為week13_rect_TRT
-貼上最基本的10行程式碼，再加上glRectf()
```C
#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glRectf(0.5, 0.5, -0.5, -0.5);
    glutSwapBuffers();
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(600,600);
    glutCreateWindow("week13 rect TRT");

    glutDisplayFunc(display);///不放Idle
    glutMainLoop();
}
```
# step01-2 
把上手臂畫出來。
```C
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1);///白色的
    glRectf(0.5, 0.5, -0.5, -0.5);///身體
    glPushMatrix();
        ///glTranslatef( x, y, z);///等下要掛在0.5,0.5
        ///glRotatef(angle, 0, 0, 1);//z軸
        ///glTranslatef( x2, y2, z2);///????
        glColor3f(1,0,0);///紅色的
        glRectf(0.5, 0.5, 1.0, 0.3);///手臂
    glPopMatrix();

    glutSwapBuffers();
}
```
# step01-3 : 
先把TRT最下面的glTranslatef()裡的數值做調整，使得上手臂的旋轉中心移到中心點後，float angle=45去做45度的旋轉。
```C
float angle=45;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1);///白色的
    glRectf(0.5, 0.5, -0.5, -0.5);///身體
    glPushMatrix();
        ///glTranslatef( x, y, z);///等下要掛在0.5,0.5
        glRotatef(angle, 0, 0, 1);///(2) 旋轉
        glTranslatef( -0.5, -0.4, 0);///(1)先把旋轉中心放正中心
        glColor3f(1,0,0);///紅色的
        glRectf(0.5, 0.5, 1.0, 0.3);///手臂
    glPopMatrix();

    glutSwapBuffers();
}
```
# step02-1
利用mouse來揮動上手臂。
```C
#include <GL/glut.h>
float angle=45, oldX=0;
void mouse(int button, int state, int x, int y){///mouse按下去
    oldX = x;
}
void motion(int x, int y){
    angle += (x-oldX);
    oldX = x;
    glutPostRedisplay();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1);///白色的
    glRectf(0.5, 0.5, -0.5, -0.5);///身體
    glPushMatrix();
        glTranslatef( 0.5, 0.5, 0);///(3) 等下要掛在0.5,0.5
        glRotatef(angle, 0, 0, 1);///(2) 旋轉
        glTranslatef( -0.5, -0.4, 0);///(1)先把旋轉中心放正中心
        glColor3f(1,0,0);///紅色的
        glRectf(0.5, 0.5, 1.0, 0.3);///手臂
    glPopMatrix();

    glutSwapBuffers();
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    ///glutInitWindowSize(600,600);
    glutCreateWindow("week13 rect TRT");
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutDisplayFunc(display);///不放Idle
    glutMainLoop();
}
```
# step02-2
畫下手臂，先做身體的瘦身(記得要更新調整上手臂的座標位置)。
-打開新的GLUT專案，取名為week13_rect_TRT_TRT
-float angle=0;角度從頭做
-最後，把下手臂放上去
```C
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1);///白色的
    glRectf(0.3, 0.5, -0.3, -0.2);///身體,瘦身
    glPushMatrix();  ///掛的位置也改了
        glTranslatef( 0.3, 0.5, 0);///(3) 等下要掛在0.5,0.5
        ///glRotatef(angle, 0, 0, 1);///(2) 旋轉
        glTranslatef( -0.3, -0.4, 0);///(1)先把旋轉中心放正中心
        glColor3f(1,0,0);///紅色的
        glRectf(0.3, 0.5, 0.8, 0.3);///上手臂
    glPopMatrix();

    glutSwapBuffers();
}
```
# step02-3
把下手臂畫出來後，把TRT由下往上做出來。
-先把上手臂的TRT，glRotatef()先註解掉
```C
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1);///白色的
    glRectf(0.3, 0.5, -0.3, -0.2);///身體,瘦身
    glPushMatrix();  ///掛的位置也改了
        glTranslatef( 0.3, 0.5, 0);///(3) 等下要掛在0.5,0.5
        ///glRotatef(angle, 0, 0, 1);///(2) 旋轉
        glTranslatef( -0.3, -0.4, 0);///(1)先把旋轉中心放正中心
        glColor3f(1,0,0);///紅色的
        glRectf(0.3, 0.5, 0.8, 0.3);///上手臂
        glPushMatrix();
            glTranslatef(0.8, 0.4, 0); ///(3) 把下手肘掛在關節上
            glRotatef( angle, 0, 0, 1); ///(2) 旋轉
            glTranslatef(-0.8, -0.4, 0 );///(1) 把下手肘的旋轉中心,放正中心
            glColor3f(0,1,0);///綠色的
            glRectf(0.8, 0.5, 1.1, 0.3);///再畫下手肘
        glPopMatrix();
    glPopMatrix();

    glutSwapBuffers();
}
```
# step03-1
畫出左半邊的上手臂&下手臂
-複製，並調整相對位置的xy值
```C
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1);///白色的
    glRectf(0.3, 0.5, -0.3, -0.2);///身體,瘦身

    glPushMatrix();  ///右半邊
        glTranslatef( 0.3, 0.5, 0);///(3) 等下要掛在0.5,0.5
        glRotatef(angle, 0, 0, 1);///(2) 旋轉
        glTranslatef( -0.3, -0.4, 0);///(1)先把旋轉中心放正中心
        glColor3f(1,0,0);///紅色的
        glRectf(0.3, 0.5, 0.8, 0.3);///右上手臂
        glPushMatrix();
            glTranslatef(0.8, 0.4, 0); ///(3) 把下手肘掛在關節上
            glRotatef( angle, 0, 0, 1); ///(2) 旋轉
            glTranslatef(-0.8, -0.4, 0 );///(1) 把下手肘的旋轉中心,放正中心
            glColor3f(0,1,0);///綠色的
            glRectf(0.8, 0.5, 1.1, 0.3);///再畫右下手肘
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();  ///左半邊
        glTranslatef( -0.3, 0.5, 0);///(3) 等下要掛在0.5,0.5
        glRotatef(angle, 0, 0, 1);///(2) 旋轉
        glTranslatef( +0.3, -0.4, 0);///(1)先把旋轉中心放正中心
        glColor3f(1,0,0);///紅色的
        glRectf(-0.3, 0.5, -0.8, 0.3);///左上手臂
        glPushMatrix();
            glTranslatef(-0.8, 0.4, 0); ///(3) 把下手肘掛在關節上
            glRotatef( angle, 0, 0, 1); ///(2) 旋轉
            glTranslatef(+0.8, -0.4, 0 );///(1) 把下手肘的旋轉中心,放正中心
            glColor3f(0,1,0);///綠色的
            glRectf(-0.8, 0.5, -1.1, 0.3);///再畫左下手肘
        glPopMatrix();
    glPopMatrix();

    glutSwapBuffers();
}
```
# step03-2
做出可以利用keyboard來指定要做轉動的關節。
-float angle=0; 改成 float angle[20];//利用陣列，現在有20個關節
-利用keyboard()，做if判斷，並設定angleID，在透過motion()去做關節的指定
-main()裡面加上glutKeyboardFunc(keyboard);
```C
#include <GL/glut.h>
float angle[20], oldX=0;
int angleID=0;///0:第0個關節, 1:第1個關節, 2:第2個關節
void keyboard( unsigned char key, int x, int y){
    if( key=='0' ) angleID=0;///預設是這一個
    if( key=='1' ) angleID=1;
    if( key=='2' ) angleID=2;
    if( key=='3' ) angleID=3;
}///用keyboard的按鍵,來決定等一下 motion()裡要改的 angle[i] 是哪一個
void mouse(int button, int state, int x, int y){///mouse按下去
    oldX = x;
}
void motion(int x, int y){
    angle[angleID] += (x-oldX);
    oldX = x;
    glutPostRedisplay();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1);///白色的
    glRectf(0.3, 0.5, -0.3, -0.2);///身體,瘦身

    glPushMatrix();  ///右半邊
        glTranslatef( 0.3, 0.5, 0);///(3) 等下要掛在0.5,0.5
        glRotatef( angle[0], 0, 0, 1);///(2) 旋轉
        glTranslatef( -0.3, -0.4, 0);///(1)先把旋轉中心放正中心
        glColor3f(1,0,0);///紅色的
        glRectf(0.3, 0.5, 0.8, 0.3);///右上手臂
        glPushMatrix();
            glTranslatef(0.8, 0.4, 0); ///(3) 把下手肘掛在關節上
            glRotatef( angle[1], 0, 0, 1); ///(2) 旋轉
            glTranslatef(-0.8, -0.4, 0 );///(1) 把下手肘的旋轉中心,放正中心
            glColor3f(0,1,0);///綠色的
            glRectf(0.8, 0.5, 1.1, 0.3);///再畫右下手肘
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();  ///左半邊
        glTranslatef( -0.3, 0.5, 0);///(3) 等下要掛在0.5,0.5
        glRotatef( angle[2], 0, 0, 1);///(2) 旋轉
        glTranslatef( +0.3, -0.4, 0);///(1)先把旋轉中心放正中心
        glColor3f(1,0,0);///紅色的
        glRectf(-0.3, 0.5, -0.8, 0.3);///左上手臂
        glPushMatrix();
            glTranslatef(-0.8, 0.4, 0); ///(3) 把下手肘掛在關節上
            glRotatef( angle[3], 0, 0, 1); ///(2) 旋轉
            glTranslatef(+0.8, -0.4, 0 );///(1) 把下手肘的旋轉中心,放正中心
            glColor3f(0,1,0);///綠色的
            glRectf(-0.8, 0.5, -1.1, 0.3);///再畫左下手肘
        glPopMatrix();
    glPopMatrix();

    glutSwapBuffers();
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    ///glutInitWindowSize(600,600);
    glutCreateWindow("week13 rect TRT");

    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutDisplayFunc(display);///不放Idle
    glutMainLoop();
}
```

# Week14
# Step01-1: 練習寫檔
-FILE * fin=fopen("file.txt","w+");
-printf()改裝成fprintf()
-關閉檔案 `fclose(fin)`
```C++
#include <stdio.h>
int main()
{
    FILE * fout = fopen("file.txt", "w+");

     printf("Hello World\n");
    fprintf(fout, "Hello World\n");

    fclose(fout);
}
```
# Step01-2: 練習開檔+寫檔+關檔&練習開檔+讀檔+關檔
-程式碼做開檔->寫檔->關檔的動作
-開檔
-讀入字串並列印字串
    -fscanf(fin,"%s %d",line,&a);//讀入字串
    -printf()//印出字串
-關檔
```C++
#include <stdio.h>
int main()
{
    FILE * fout = fopen("file2.txt", "w+");
    fprintf(fout, "angle1 %d\n", 999);
    fclose(fout);

    char line[200];
    int a;
    FILE * fin = fopen("file2.txt", "r");
    fscanf(fin, "%s %d", line, &a);
    printf("讀到了字串:%s 及整數%d\n", line, a);
    fclose(fin);
}
```
# Step01-3A: 把上週寫的week13_rect_many_TRT拿來讀
-打開新的GLUT專案，專案名稱取名為week14_TRT_angle_write
-貼上week13_rect_many_TRT程式
-要開檔&寫檔，最後做關檔的動作。
```C
#include <GL/glut.h>
#include <stdio.h> ///為了 printf, fprintf, fopen, fclose ..
float angle[20], oldX=0;
int angleID=0;///0:第0個關節, 1:第1個關節, 2:第2個關節
FILE * fout = NULL;
void myWrite(){
    if(fout==NULL) fout = fopen("file.txt", "w+");
    for(int i=0; i<20; i++){
        fprintf(fout, "%.2f ", angle[i] );
    }
}
void keyboard( unsigned char key, int x, int y){
    if( key=='0' ) angleID=0;///預設是這一個
    if( key=='1' ) angleID=1;
    if( key=='2' ) angleID=2;
    if( key=='3' ) angleID=3;
}///用keyboard的按鍵,來決定等一下 motion()裡要改的 angle[i] 是哪一個
void mouse(int button, int state, int x, int y){///mouse按下去
    oldX = x;
}
void motion(int x, int y){
    angle[angleID] += (x-oldX);
    myWrite();
    oldX = x;
    glutPostRedisplay();
}
```
# Step01-3B: 加程式碼，可以看到關節轉動的數值，並找到程式碼產生的file.txt檔
-在myWrite()，fprintf()前加上:printf(   "%.2f",angle[i]);//顯示關節旋轉角度
-在myWrite()的for迴圈外面加上
           printf("\n");
           fprintf(fout,"\n");
   //印出的數字看起來比較整齊
-view/Log，找到專案執行位置:\Users\雨涵\Desktop\freeglut\bin// 搜尋電腦->找出file檔
# Step02-1: 模仿動作的效果
-打開新的GLUT專案，檔案名稱取名為week14_TRT_angle_write_and_read
-程式最前面加上新的空指標:`FILE * fin = NULL;`
-寫一個void myRead()
-keyboard()函式中，加上一個新的按鍵，按下可以呼叫myRead()並更新畫面
```C
FILE * fout = NULL, * fin = NULL;
void myWrite(){
    if(fout==NULL) fout = fopen("file.txt", "w+");
    for(int i=0; i<20; i++){
         printf(      "%.2f ", angle[i] );
        fprintf(fout, "%.2f ", angle[i] );
    }
    printf("\n");
    fprintf(fout, "\n");///少了fclose,因為不想要才印一行,就結束。想寫多行一些
}
void myRead(){
    if(fout!=NULL) { fclose(fout); fout=NULL; }///還在讀的檔案要關掉
    if(fin==NULL) fin = fopen("file.txt", "r");
    for(int i=0; i<20; i++){
        fscanf(fin, "%f", &angle[i] );
    }
    glutPostRedisplay();///重畫畫面!!
}
void keyboard( unsigned char key, int x, int y){
    if( key=='r' ){
        myRead();
    }
    if( key=='0' ) angleID=0;///預設是這一個
    if( key=='1' ) angleID=1;
    if( key=='2' ) angleID=2;
    if( key=='3' ) angleID=3;
}
```
# Step02-2: 修改專案的工作目錄
-目前的工作目錄:\Users\雨涵\Desktop\freeglut\bin
-要把專案的工作目錄改放在自己想要的位置(專案的資料夾)
# Step03-1: 學習glutTimer()
-設定timer:glutTimerFunc(時間,timer,參數t)
-宣告void timer(int t)
```C++
#include <GL/glut.h>
#include <stdio.h>
void timer(int t){///t的單位是ms
    ///1000代表1秒, 1500代表1.5秒
    printf("鬧鐘%d, 我起床了\n", t);///起床做事情

    printf("設定下一個鬧鐘\n");
    glutTimerFunc( 2000, timer, t+1);///2秒後
    //printf("設好鬧鐘,再回去睡\n");
}
void display()
{

}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week14 timer");

    glutTimerFunc(3000, timer, 0);///3秒後,叫timer()
    glutDisplayFunc(display);
    glutMainLoop();
}
```
# Step03-2: 鬧鐘每響一次，就發出聲音一次
-下載do.wav(音檔)//隨便的音檔都可
-宣告:#include <mmsystem.h>
-void timer(int t)裡加上PlaySound("do.wav",NULL,SND_ASYNC);
```C++
void timer(int t){///t的單位是ms
    ///1000代表1秒, 1500代表1.5秒
    printf("鬧鐘%d, 我起床了\n", t);///起床做事情
    PlaySound("do.wav", NULL, SND_ASYNC);
    printf("設定下一個鬧鐘\n");
    glutTimerFunc( 2000, timer, t+1);///2秒後
}
```
THE END

# Week15
# step01-1 PlaySound()
-Setting-Compiler Setting,Linker Setting加上winmm
```C
#include <windows.h>///另一種寫法,結果一樣
int main()
{ 
    PlaySound("07042111.wav", NULL, SND_SYNC );
}
```
# step01-2 比較SND_ASYNC和SND_SYNC
SND_ASYNC:不用等待，不同步
SND_SYNC:要等待同步
實作程式:音檔會持續播放，直到輸入數值，才停住
```C
#include <windows.h>
#include <stdio.h>
int main()
{
    printf("現在在PLaySound()前\n");
    PlaySound("07042111.wav",NULL,SND_ASYNC);
    printf("現在在PlaySound()後\n");
    int N;
    scanf("%d",&N);
}
```
# step01-3 播放mp3檔
-MP3<WAV
-把CMP3_MCI.h檔和mp3檔放在工作目錄裡
```C
#include "CMP3_MCI.h"
#include <stdio.h>
CMP3_MCI mp3;
int main()
{
    mp3.Load("07042111.mp3");
    mp3.Play();
    printf("現在正在播放羊的聲音\n");
    int N;
    scanf("%d",&N);
}
```
# step02-1  接續上周的程式 week14_angles_TRT_write_and_read
-打開新的GLUT專案，取名為week15_angles_TRT_again
-從github複製上周的完整程式week14_angles_TRT_write_and_read
-motion裡不需要一直存檔，myWrite()註解掉
-所以，我們加上鍵盤偵測，如果按下特定的鍵，就會做myWrite()的動作
myWrite()之前有寫錯，修改完的myWrite()
```C
void myWrite()
{
    if(fout==NULL) fout=fopen("file.txt","w+");
    for(int i=0;i<20;i++)
    {
        printf(   "%.2f",angle[i]);
        fprintf(fout,"%.2f  ",angle[i]);//2f後面要有一個空格
    }
    printf("\n");
    fprintf(fout,"\n");
}
```
# step02-2 模型做重複的動作
  -去freeglut/bin裡的file.text複製貼上重複的動作，file.text就是執行的動作檔
# step03-1 講解回家作業
-打開新的GLUT專案，取名為week15_homework_gundam_parts
-做放模型的全部前置動作:
	-glm.cpp&glm.h和freeglut.dull和gundam的data資料夾放到專案的工作目錄
	-Add Files/glm.cpp
-working_dir要注意(如果錯了，到工作目錄的cbp檔，working_dir改成".")>>Reload，但不要再重複儲存cpp檔
```C//白色的鋼彈
#include <GL/glut.h>
#include "glm.h"
#include <stdio.h>//為了printf,fprintf,fopen,fclose
GLMmodel * pmodel =NULL;
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
```

# Week16 做內插，把動作串起來
# step01-1 利用Excel練習內插
-打開Excel，有參數time,alpha,angle
-內插公式:alpha*新的+(1-alpha)*舊的

# Step01-2 利用上週的week15_angles_TRT_again去做改裝，做出動作內插
-打開新的GLUT專案，檔案名稱取名為week16_interpolation
-先複製貼上week15_angles_TRT_again的程式碼
-加上執行內插的程式

操作流程:
*記得file.txt要先有動作儲存著
-按兩次'r'
-再按'p'
內插就出來了!

```C
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

void keyboard(unsigned char key,int x,int y)

{

    if(key=='p')

    {

        myInterpolate(alpha);

        alpha=(alpha+0.01);

        if(alpha>1)alpha=alpha-1;

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

    glutCreateWindow("week15 angles TRT again");



    glutKeyboardFunc(keyboard);

    glutMouseFunc(mouse);

    glutMotionFunc(motion);

    glutDisplayFunc( display );

    glutMainLoop();

}
```

# Step02-1 利用Timer自動做內插
-先存4個動作
-利用glutTimerFunc(0,timer,0);播放
-在if(key=='p')進行播放的動作
-依照時間的流動，算出適當的alpha

操作過程:
-先存動作(把程式碼關掉後)
-程式執行，按下p，就會開始播放動作
-file.txt全部讀完後，動作就會卡在那邊(正常的!）

```C
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
    glutCreateWindow("week15 angles TRT again");

    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutDisplayFunc( display );
    glutMainLoop();
}
```
# Step03-1 運鏡
-打開老師的網址，下載win32&data，data解壓縮後放進解壓縮後的window資料夾裡:打開Projection.exe
-gluLookAt()裡面的三個參數:
	-眼睛在哪裡(從哪裡看)
	-要看哪裡((要拍誰(向哪裡))，相機的正中間要向哪裡)
	-相機是否旋轉(通常都設定為0,1,0)(食指向哪裡，unity的x,y,z的感覺。)
單字:
-aspect ratio=螢幕的長寬比=寬度/高度(寬度除高度)

# Step03-2 實作程式:利用滑鼠改變LookAt位置(實行簡單的運鏡效果)
```C
#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(2);///大茶壼
    glutSwapBuffers();
}
void motion(int x, int y)
{
    glMatrixMode(GL_MODELVIEW);///3D經過轉換到你最後的攝影機
    glLoadIdentity();
    gluLookAt( (x-150)/15.0, (y-150)/15.0, 3, ///eye
    0, 0, 0, ///center
    0, 1, 0);///up
    glutPostRedisplay();
}
void reshape(int w, int h)
{
    const float ar = (float) w / (float) h;
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);///投影,把3D投射到2D畫面
    glLoadIdentity();
    gluPerspective(60, ar, 0.1, 100);
    glMatrixMode(GL_MODELVIEW);///3D經過轉換到你最後的攝影機
    glLoadIdentity() ;
    gluLookAt( 0, 0, 3, 0, 0, 0, 0, 1, 0);
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week16 camera lookat");
    glutReshapeFunc(reshape);
    glutDisplayFunc(display);
    glutMotionFunc(motion);
    glutMainLoop();
}
```
The End

# Week17
```
-講解期末作品的評分方式和繳交方式。
-下禮拜一的電腦圖學停課一次，下下週同個時間必須要上線展示作品並
實行線上共同評分。
-期末作品:要做漂亮的30秒機器人動畫:注意-關節盡量不要斷掉，加上好聽的背景音樂，動作跟節奏對到會更好。
-老師分享facebook的小故事，尊重!
-示範期末作品製作:
	-準備好所有的，分別為每個機器部位的模型檔。
	-記得工作目錄要注意一下(Working-dir)。
	.......
	-盡量讓程式碼變得簡單，要不然容易卡很久。
離放暑假不遠了，為自己加油!!
```
[OIP](https://user-images.githubusercontent.com/79676815/173457352-445b0cc5-1cac-41be-ab6c-4c8e01f0a8e8.jpg)

