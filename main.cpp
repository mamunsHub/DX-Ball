#include<windows.h>
#include <GL/glut.h>
#include<stdio.h>
int a=200,b=300,c=0,d=16, x1=246,y1=16,x2=256,y2=26,sx=2,sy=2,flag=1,flag1=0;
int xi1=80,xi2=160,yi1=250,yi2=280, xj1=210,xj2=290,yj1=250,yj2=280, xk1=340,xk2=420,yk1=250,yk2=280;
int xi11=80,xi12=160,yi11=320,yi12=350, xj11=210,xj12=290,yj11=320,yj12=350, xk11=340,xk12=420,yk11=320,yk12=350;
void myInit (void)

{

     glClearColor(1.0,1.0,1.0,1.0); // sets background color to white

     // sets a point to be 4x4 pixels

     glMatrixMode(GL_PROJECTION);

     glLoadIdentity();
   //  gluPerspective(45.0,(double)500/(double)400,1.0,200.0);

     gluOrtho2D(0.0, 500.0, 0.0, 400.0); // the display area in world coordinates.

}

void initRendering()

{

glEnable(GL_DEPTH_TEST);

}

void myDisplay(void)

{

     glClear(GL_COLOR_BUFFER_BIT); // clears the screen
    glColor3f(1.0f,1.0f,0.0f) ;// setsthe drawing colour

     glPointSize(4.0);

     glBegin(GL_POLYGON);

          glVertex2i (x1, y1);
          glVertex2i (x2, y1);

          glVertex2i (x2, y1);
          glVertex2i (x2, y2);


          glVertex2i (x2, y2);
          glVertex2i (x1, y2);


          glVertex2i (x1, y2);
          glVertex2i (x1, y1);

     glEnd();


    glColor3f(0.0f,1.0f,0.0f) ;// setsthe drawing colour

     glPointSize(4.0);

     glBegin(GL_POLYGON);

          glVertex2i (a, c);
          glVertex2i (b, c);

          glVertex2i (b, c);
          glVertex2i (b, d);


          glVertex2i (b, d);
          glVertex2i (a, d);


          glVertex2i (a, d);
          glVertex2i (a, c);

     glEnd();

     glColor3f(0.03,0.03,1.03) ;// setsthe drawing colour

     glPointSize(3.0);

     glBegin(GL_POLYGON);

          glVertex2i (xi1, yi1);
          glVertex2i (xi2, yi1);

          glVertex2i (xi2, yi1);
          glVertex2i (xi2, yi2);


          glVertex2i (xi2, yi2);
          glVertex2i (xi1, yi2);


          glVertex2i (xi1, yi2);
          glVertex2i (xi1, yi1);

     glEnd();
     glColor3f(0.03,0.03,1.03) ;// setsthe drawing colour

     glPointSize(3.0);

     glBegin(GL_POLYGON);

          glVertex2i (xj1, yj1);
          glVertex2i (xj2, yj1);

          glVertex2i (xj2, yj1);
          glVertex2i (xj2, yj2);


          glVertex2i (xj2, yj2);
          glVertex2i (xj1, yj2);


          glVertex2i (xj1, yj2);
          glVertex2i (xj1, yj1);

     glEnd();

     glColor3f(0.03,0.03,1.03) ;// setsthe drawing colour

     glPointSize(3.0);

     glBegin(GL_POLYGON);

          glVertex2i (xk1, yk1);
          glVertex2i (xk2, yk1);

          glVertex2i (xk2, yk1);
          glVertex2i (xk2, yk2);


          glVertex2i (xk2, yk2);
          glVertex2i (xk1, yk2);


          glVertex2i (xk1, yk2);
          glVertex2i (xk1, yk1);

     glEnd();

     glColor3f(0.03,0.03,1.03) ;// setsthe drawing colour

     glPointSize(3.0);

     glBegin(GL_POLYGON);

          glVertex2i (xi11, yi11);
          glVertex2i (xi12, yi11);

          glVertex2i (xi12, yi11);
          glVertex2i (xi12, yi12);


          glVertex2i (xi12, yi12);
          glVertex2i (xi11, yi12);


          glVertex2i (xi11, yi12);
          glVertex2i (xi11, yi11);

     glEnd();

     glColor3f(0.03,0.03,1.03) ;// setsthe drawing colour

     glPointSize(3.0);

     glBegin(GL_POLYGON);

          glVertex2i (xk11, yk11);
          glVertex2i (xk12, yk11);

          glVertex2i (xk12, yk11);
          glVertex2i (xk12, yk12);


          glVertex2i (xk12, yk12);
          glVertex2i (xk11, yk12);


          glVertex2i (xk11, yk12);
          glVertex2i (xk11, yk11);

     glEnd();

     glColor3f(0.03,0.03,1.03) ;// setsthe drawing colour

     glPointSize(3.0);

     glBegin(GL_POLYGON);

          glVertex2i (xj11, yj11);
          glVertex2i (xj12, yj11);

          glVertex2i (xj12, yj11);
          glVertex2i (xj12, yj12);


          glVertex2i (xj12, yj12);
          glVertex2i (xj11, yj12);


          glVertex2i (xj11, yj12);
          glVertex2i (xj11, yj11);

     glEnd();

        if(x2==xk11)
        {
            if(y1>=yk11&&y1<=yk12||y2>=yk11&&y2<=yk12)
            {
                sx=-2;
                xk11=-100;
                xk12=-100;
                yk11=-100;
                yk12=-100;
            }
        }
        else if(x1==xk12)
        {
            if(y1>=yk11&&y1<=yk12||y2>=yk11&&y2<=yk12)
            {
                sx=2;
                xk11=-100;
                xk12=-100;
                yk11=-100;
                yk12=-100;
            }
        }
        else if(y2==yk11)
        {
            if(x1>=xk11&&x1<=xk12||x2>=xk11&&x2<=xk12)
            {
                sy=-2;
                xk11=-100;
                xk12=-100;
                yk11=-100;
                yk12=-100;
            }
        }
        else if(y1==yk12)
        {
            if(x1>=xk11&&x1<=xk12||x2>=xk11&&x2<=xk12)
            {
                sy=2;
                xk11=-100;
                xk12=-100;
                yk11=-100;
                yk12=-100;
            }
        }



        if(x2==xj11)
        {
            if(y1>=yj11&&y1<=yj12||y2>=yj11&&y2<=yj12)
            {
                sx=-2;
                xj11=-100;
                xj12=-100;
                yj11=-100;
                yj12=-100;
            }
        }
        else if(x1==xj12)
        {
            if(y1>=yj11&&y1<=yj12||y2>=yj11&&y2<=yj12)
            {
                sx=2;
                xj11=-100;
                xj12=-100;
                yj11=-100;
                yj12=-100;
            }
        }
        else if(y2==yj11)
        {
            if(x1>=xj11&&x1<=xj12||x2>=xj11&&x2<=xj12)
            {
                sy=-2;
                xj11=-100;
                xj12=-100;
                yj11=-100;
                yj12=-100;
            }
        }
        else if(y1==yj12)
        {
            if(x1>=xj11&&x1<=xj12||x2>=xj11&&x2<=xj12)
            {
                sy=2;
                xj11=-100;
                xj12=-100;
                yj11=-100;
                yj12=-100;
            }
        }

        if(x2==xi11)
        {
            if(y1>=yi11&&y1<=yi12||y2>=yi11&&y2<=yi12)
            {
                sx=-2;
                xi11=-100;
                xi12=-100;
                yi11=-100;
                yi12=-100;
            }
        }
        else if(x1==xi12)
        {
            if(y1>=yi11&&y1<=yi12||y2>=yi11&&y2<=yi12)
            {
                sx=2;
                xi11=-100;
                xi12=-100;
                yi11=-100;
                yi12=-100;
            }
        }
        else if(y2==yi11)
        {
            if(x1>=xi11&&x1<=xi12||x2>=xi11&&x2<=xi12)
            {
                sy=-2;
                xi11=-100;
                xi12=-100;
                yi11=-100;
                yi12=-100;
            }
        }
        else if(y1==yi12)
        {
            if(x1>=xi11&&x1<=xi12||x2>=xi11&&x2<=xi12)
            {
                sy=2;
                xi11=-100;
                xi12=-100;
                yi11=-100;
                yi12=-100;
            }
        }

        if(x2==xk1)
        {
            if(y1>=yk1&&y1<=yk2||y2>=yk1&&y2<=yk2)
            {
                sx=-2;
                xk1=-100;
                xk2=-100;
                yk1=-100;
                yk2=-100;
            }
        }
        else if(x1==xk2)
        {
            if(y1>=yk1&&y1<=yk2||y2>=yk1&&y2<=yk2)
            {
                sx=2;
                xk1=-100;
                xk2=-100;
                yk1=-100;
                yk2=-100;
            }
        }
        else if(y2==yk1)
        {
            if(x1>=xk1&&x1<=xk2||x2>=xk1&&x2<=xk2)
            {
                sy=-2;
                xk1=-100;
                xk2=-100;
                yk1=-100;
                yk2=-100;
            }
        }
        else if(y1==yk2)
        {
            if(x1>=xk1&&x1<=xk2||x2>=xk1&&x2<=xk2)
            {
                sy=2;
                xk1=-100;
                xk2=-100;
                yk1=-100;
                yk2=-100;
            }
        }

        if(x2==xj1)
        {
            if(y1>=yj1&&y1<=yj2||y2>=yj1&&y2<=yj2)
            {
                sx=-2;
                xj1=-100;
                xj2=-100;
                yj1=-100;
                yj2=-100;
            }
        }
        else if(x1==xj2)
        {
            if(y1>=yj1&&y1<=yj2||y2>=yj1&&y2<=yj2)
            {
                sx=2;
                xj1=-100;
                xj2=-100;
                yj1=-100;
                yj2=-100;
            }
        }
        else if(y2==yj1)
        {
            if(x1>=xj1&&x1<=xj2||x2>=xj1&&x2<=xj2)
            {
                sy=-2;
                xj1=-100;
                xj2=-100;
                yj1=-100;
                yj2=-100;
            }
        }
        else if(y1==yj2)
        {
            if(x1>=xj1&&x1<=xj2||x2>=xj1&&x2<=xj2)
            {
                sy=2;
                xj1=-100;
                xj2=-100;
                yj1=-100;
                yj2=-100;
            }
        }

        if(x2==xi1)
        {
            if(y1>=yi1&&y1<=yi2||y2>=yi1&&y2<=yi2)
            {
                sx=-2;
                xi1=-100;
                xi2=-100;
                yi1=-100;
                yi2=-100;
            }
        }
        else if(x1==xi2)
        {
            if(y1>=yi1&&y1<=yi2||y2>=yi1&&y2<=yi2)
            {
                sx=2;
                xi1=-100;
                xi2=-100;
                yi1=-100;
                yi2=-100;
            }
        }
        else if(y2==yi1)
        {
            if(x1>=xi1&&x1<=xi2||x2>=xi1&&x2<=xi2)
            {
                sy=-2;
                xi1=-100;
                xi2=-100;
                yi1=-100;
                yi2=-100;
            }
        }
        else if(y1==yi2)
        {
            if(x1>=xi1&&x1<=xi2||x2>=xi1&&x2<=xi2)
            {
                sy=2;
                xi1=-100;
                xi2=-100;
                yi1=-100;
                yi2=-100;
            }
        }

     if(x2>=500)
     {
         sx=-2;
     }

     if(x1<=0)
     {
         sx=2;
     }

     if(y2>=400)
     {
         sy=-2;
     }

     if(y1==d)
     {
         if(x1>=a&&x1<=b||x2>=a&&x2<=b)
         sy=2;
     }

     if(flag1==1)
     {
     x1=x1+sx;
     x2=x2+sx;
     y1=y1+sy;
     y2=y2+sy;
     }




        if(flag==1){
     if(xi1 == -100 && xj1 == -100 && xk1 == -100 && xi11 == -100 && xj11 == -100 && xk11 == -100)
     {

         xi1=100; xi2=140; yi1=160; yi2=240;
         xj1=200; xj2=240; yj1=160; yj2=240;
         xk1=300; xk2=340; yk1=160; yk2=240;

         xi11=100;xi12=140;yi11=280;yi12=360;
         xj11=200; xj12=240; yj11=280; yj12=360;
         xk11=300; xk12=340; yk11=280; yk12=360;

         a=200; b=300; c=0; d=16;
         x1=246; y1=16; x2=256; y2=26;

         flag++;
         flag1=0;

         sx=2;
         sy=2;
     }
        }
        else if(flag==2){
            if(xi1 == -100 && xj1 == -100 && xk1 == -100 && xi11 == -100 && xj11 == -100 && xk11 == -100)
            {
                xi1=210; xi2=290; yi1=160; yi2=190;

                xj1=80; xj2=160; yj1=250; yj2=280;
                xk1=210; xk2=290; yk1=250; yk2=280;
                xi11=340;xi12=420;yi11=250;yi12=280;

                xj11=130; xj12=210; yj11=340; yj12=370;
                xk11=290; xk12=370; yk11=340; yk12=370;

         a=200; b=300; c=0; d=16;
         x1=246; y1=16; x2=256; y2=26;

         flag++;
         flag1=0;

         sx=2;
         sy=2;
            }
        }

     glFlush(); // sends all output to display;
//glutPostRedisplay();

}
void update(int value)

{


glutPostRedisplay();

glutTimerFunc(12,update,0);

}
void Keypress(unsigned char key, int x, int y)

{
	if (a>0&&key =='a')
	{
	    if(flag1==0)
        {
            x1=x1-6;
            x2=x2-6;

            a=a-6;
            b=b-6;
        }
        else
        {
            a=a-6;
            b=b-6;
        }

	}
	else if (b<500&&key =='d')
	{
		if(flag1==0)
        {
            x1=x1+6;
            x2=x2+6;

            a=a+6;
            b=b+6;
        }
        else
        {
            a=a+6;
            b=b+6;
        }
	}
    if(key==' ')
    {
        flag1=1;
    }

	/*else if (key =='w')
	{
		c=c+6;
		d=d+6;
	}
	else if (key =='s')
	{
		c=c-6;
		d=d-6;
	}*/

}

void myMouseFunc(int button, int state, int x, int y)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
	      //  x1=x1+5;
		//x2=x2+5;
		//printf("%d %d\n", x1,x2);
	}
	else if(button == GLUT_LEFT_BUTTON && state == GLUT_UP) {

	}
}

int main (int argc, char **argv)
{

     glutInit (&argc, argv); // to initialize the toolkit;

     glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB); // sets the display mode

     glutInitWindowSize (640, 480); // sets the window size

     glutInitWindowPosition (10, 10); // sets the starting position for the window

     initRendering();

     glutCreateWindow ("My first OpenGL program!"); // creates the window and sets the title

     glutDisplayFunc (myDisplay);

     glutKeyboardFunc(Keypress);
     glutMouseFunc(myMouseFunc);

     myInit(); // additional initializations as necessary
     glutTimerFunc(25,update,0);

     glutMainLoop(); // go into a loop until event occurs
     return 0;
}
