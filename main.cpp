#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);


   /* glBegin(GL_TRIANGLES); //Begin triangle coordinates
    //Pentagon
    glColor3f (0.0, 0.1, 1.0);
    glVertex3f(0.5f, 0.5f, 0.0f);
    glVertex3f(4.0f, .5f, 0.0f);
    glVertex3f(0.5f, 2.0f, 0.0f);

    glColor3f (0.0, 0.1, 1.0);
    glVertex3f(.5f, 0.6f, 0.0f);
    glVertex3f(1.1f, 0.0f, 0.0f);
    glVertex3f(1.1f, 0.6f, 0.0f);

    glColor3f (0.50, 1.0, 0.0);
    glVertex3f(0.1f, 0.6f, 0.0f);
    glVertex3f(1.1f, 0.6f, 0.0f);
    glVertex3f(0.6f, 0.9f, 0.0f);


    glEnd();//End triangle coordinates
    */
    glBegin(GL_QUADS);//Start quadrilateral coordinates

    //Wall of the first house
    glColor3f (.0, 0.46, .41);
    glVertex3f(0.5f, 0.1f, 0.0f);
    glVertex3f(4.f, 0.1f, 0.0f);
    glVertex3f(4.0f, 2.0f, 0.0f);
    glVertex3f(0.5f, 2.f, 0.0f);

    //under the wall
     glColor3f (.59, 0.49, .14);
    glVertex3f(.0f, -.3f, 0.0f);
    glVertex3f(4.5f, -.3f, 0.0f);
    glVertex3f(4.0f, .1f, 0.0f);
    glVertex3f(0.5f, .1f, 0.0f);

    //Shade of the first House
    glColor3f (.95, 0.63, .13);
    glVertex3f(0.0f, 2.0f, 0.0f);
    glVertex3f(4.5f, 2.0f, 0.0f);
    glVertex3f(3.5f, 3.5f, 0.0f);
    glVertex3f(1.f, 3.5f, 0.0f);

    //first window of the first house
    glColor3f (0.68, 0.65, .6);
    glVertex3f(1.f, 1.f, 0.0f);
    glVertex3f(1.5f, 1.f, 0.0f);
    glVertex3f(1.5f, 1.5f, 0.0f);
    glVertex3f(1.f, 1.5f, 0.0f);

    //Dor of the first House
    glColor3f (.11, 0.08, .05);
    glVertex3f(2.f, 0.1f, 0.0f);
    glVertex3f(2.5f, 0.1f, 0.0f);
    glVertex3f(2.5f, 1.5f, 0.0f);
    glVertex3f(2.f, 1.5f, 0.0f);

    //2nd window of the first house
    glColor3f (0.68, 0.65, .6);
    glVertex3f(3.f, 1.f, 0.0f);
    glVertex3f(3.5f, 1.f, 0.0f);
    glVertex3f(3.5f, 1.5f, 0.0f);
    glVertex3f(3.f, 1.5f, 0.0f);

    //Log of the tree
    glColor3f (.67, 0.46, .41);
    glVertex3f(2.f, 3.5f, 0.0f);
    glVertex3f(2.5f, 3.5f, 0.0f);
    glVertex3f(2.5f, 4.5f, 0.0f);
    glVertex3f(2.f, 4.5f, 0.0f);

    //River
    glColor3f (.13, 0.86, .94);
    glVertex3f(-2.f, -15.0f, 0.0f);
    glVertex3f(20.f, -15.f, 0.0f);
    glVertex3f(20.f, -5.0f, 0.0f);
    glVertex3f(-2.f, -5.f, 0.0f);



    glEnd();

    //second house
    glBegin(GL_QUADS);
    //first wall
    glColor3f (.0, 0.46, .41);
    glVertex3f(7.5f, 0.1f, 0.0f);
    glVertex3f(9.f, 0.1f, 0.0f);
    glVertex3f(9.0f, 2.5f, 0.0f);
    glVertex3f(7.5f, 2.5f, 0.0f);

    //2nd wall
    glColor3f (.5, 0.0, .5);
    glVertex3f(9.f, 0.1f, 0.0f);
    glVertex3f(13.f, 0.1f, 0.0f);
    glVertex3f(13.0f, 2.5f, 0.0f);
    glVertex3f(9.f, 2.5f, 0.0f);

    //shade
    glColor3f (.86, 0.44, .58);
    glVertex3f(9.5f, 2.3f, 0.0f);
    glVertex3f(13.5f, 2.3f, 0.0f);
    glVertex3f(12.5f, 4.f, 0.0f);
    glVertex3f(8.5f, 4.f, 0.0f);

    //Under the first wall
    glColor3f (.9, 0.74, .04);
    glVertex3f(7.f, -.3f, 0.0f);
    glVertex3f(9.2f, -.3f, 0.0f);
    glVertex3f(9.f, .1f, 0.0f);
    glVertex3f(7.5f, .1f, 0.0f);

    //Under the second wall
    glColor3f (1., 0.8, .1);
    glVertex3f(9.2f, -.3f, 0.0f);
    glVertex3f(13.5f, -.3f, 0.0f);
    glVertex3f(13.f, .1f, 0.0f);
    glVertex3f(9.f, .1f, 0.0f);

    //first window
    glColor3f (.86, .62, .86);
    glVertex3f(8.f, 1.f, 0.0f);
    glVertex3f(8.5f, 1.f, 0.0f);
    glVertex3f(8.5f, 1.5f, 0.0f);
    glVertex3f(8.f, 1.5f, 0.0f);

    //2nd window
    glColor3f (.86, .62, .86);
    glVertex3f(9.5f, 1.f, 0.0f);
    glVertex3f(10.f, 1.f, 0.0f);
    glVertex3f(10.f, 1.5f, 0.0f);
    glVertex3f(9.5f, 1.5f, 0.0f);

    //3rd Window

       glColor3f (.86, .62, .86);
    glVertex3f(12.f, 1.f, 0.0f);
    glVertex3f(12.5f, 1.f, 0.0f);
    glVertex3f(12.5f, 1.5f, 0.0f);
    glVertex3f(12.f, 1.5f, 0.0f);

    //dor
    glColor3f (0., .5, .5);
    glVertex3f(10.5f, .1f, 0.0f);
    glVertex3f(11.5f, .1f, 0.0f);
    glVertex3f(11.5f, 1.5f, 0.0f);
    glVertex3f(10.5f, 1.5f, 0.0f);


    glEnd();



    glBegin(GL_TRIANGLES);

    glColor3f (0.0, 0.46, .70);
    glVertex3f(7.f, 2.3f, 0.0f);
    glVertex3f(9.5f, 2.3f, 0.0f);
    glVertex3f(8.5f, 4.0f, 0.0f);

    glEnd();




    //for leaf of the tree
    glBegin(GL_POLYGON);
    float theta;
    int i;


   glColor3ub (0,255,0);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(1.7+.7*cos(theta),4.8+.7*sin(theta));

    }

     glColor3ub (0,255,0);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(2.3+.6*cos(theta),4.5+.6*sin(theta));
    }

     glColor3ub (0,255,0);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(3.1+.6*cos(theta),4.9+.6*sin(theta));
    }



    glColor3ub (0,255,0);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(3.+.9*cos(theta),5.8+.9*sin(theta));
    }

     glColor3ub (0,255,0);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(3.1+.5*cos(theta),6.5+.9*sin(theta));
    }

      glColor3ub (0,255,0);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(2.7+.5*cos(theta),7.2+.9*sin(theta));
    }

      glColor3ub (0,255,0);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(2.3+.5*cos(theta),7.3+.9*sin(theta));
    }

    glColor3ub (0,255,0);
     for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(1.8+.5*cos(theta),6.9+.9*sin(theta));
    }

    glColor3ub (0,255,0);
     for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(1.6+.5*cos(theta),6.+.9*sin(theta));
    }




    glEnd(); //End quadrilateral coordinates

glFlush ();
}
void init (void)
{
glClearColor (1.0, 1.0, 1.0, 1.0); //select clearing (background) color
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-2, 20, -15, 20, -10, 100);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1366, 720);
glutInitWindowPosition (500, 500);
glutCreateWindow ("Lab Assaignment 1");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
