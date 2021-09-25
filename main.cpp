
#include <windows.h>
#include <iostream>
#include <stdlib.h>

#ifdef APPLE
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>
//using namespace std;

//Called when a key is pressed
/*
void handleKeypress(unsigned char key, int x, int y) {
  switch (key) {
    case 27: //Escape key
      exit(0);
  }
}

//Initializes 3D rendering
void initRendering() {
  glEnable(GL_DEPTH_TEST);
  glEnable(GL_COLOR_MATERIAL); //Enable color
  glClearColor(0.7f, 0.9f, 1.0f, 1.0f); //Change the background to sky blue
}

//Called when the window is resized
void handleResize(int w, int h) {
  glViewport(0, 0, w, h);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}
*/
float _angle = 0.0f;
float _cameraAngle = 0.0f;
static float tx  = 0.0;
static float ty  = 0.0;

//Draws the 3D scene

void drawbackground()
 {
     glBegin(GL_QUADS);
        glColor3f(0.3,0.4,0.9);
    glVertex3f(-2.0f,-0.3f,0.0f);
    glVertex3f(21.0f,-0.3f,0.0f);
    glVertex3f(21.0f,20.0f,0.0f);
    glVertex3f(-2.0f,20.0f,0.0f);


    //grass field
    glColor3f(0.0,1.0,0.0);
    glVertex3f(-2.0f,-5.0f,0.0f);
    glVertex3f(21.0f,-5.0f,0.0f);
    glVertex3f(21.0f,-0.3f,0.0f);
    glVertex3f(-2.0f,-0.3f,0.0f);

    glEnd();
 }

  void drawtree()
 {
      glBegin(GL_QUADS);//Start quadrilateral coordinates

    //Log of the tree
    glColor3f (.67, 0.46, .41);
    glVertex3f(2.f, 3.5f, 0.0f);
    glVertex3f(2.5f, 3.5f, 0.0f);
    glVertex3f(2.5f, 4.5f, 0.0f);
    glVertex3f(2.f, 4.5f, 0.0f);

    //River
    glColor3f (.13, 0.86, .94);
    glVertex3f(-2.f, -15.0f, 0.0f);
    glVertex3f(21.f, -15.f, 0.0f);
    glVertex3f(21.f, -5.0f, 0.0f);
    glVertex3f(-2.f, -5.f, 0.0f);

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

    glEnd();
     //End quadrilateral coordinates



 }
 void drawboatstand()
 {
     //LOWER PLATFORM
     glBegin(GL_QUADS);


 }



 void drawfence()
 {
     //horizontal fences//
    glBegin(GL_QUADS);

      glColor3f(0.3,0.4,0.2);
    glVertex3f(19.5,-5.0f,0.0f);
    glVertex3f(19.7f,-5.0f,0.0f);
    glVertex3f(19.7f,-3.2f,0.0f);
    glVertex3f(19.5f,-3.2f,0.0f);

        glColor3f(0.3,0.4,0.2);
    glVertex3f(20.0,-5.0f,0.0f);
    glVertex3f(20.2f,-5.0f,0.0f);
    glVertex3f(20.2f,-3.2f,0.0f);
    glVertex3f(20.0f,-3.2f,0.0f);

        glColor3f(0.3,0.4,0.2);
    glVertex3f(20.6,-5.0f,0.0f);
    glVertex3f(20.8f,-5.0f,0.0f);
    glVertex3f(20.8f,-3.2f,0.0f);
    glVertex3f(20.6f,-3.2f,0.0f);

    //vertically//


glColor3f(0.3,0.4,0.2);
    glVertex3f(19.2,-4.4f,0.0f);
    glVertex3f(20.9f,-4.4f,0.0f);
    glVertex3f(20.9f,-4.2f,0.0f);
    glVertex3f(19.2f,-4.2f,0.0f);


glColor3f(0.3,0.4,0.2);
    glVertex3f(19.2,-3.8f,0.0f);
    glVertex3f(20.9f,-3.8f,0.0f);
    glVertex3f(20.9f,-3.6f,0.0f);
    glVertex3f(19.2f,-3.6f,0.0f);


        glEnd();

 }
 void drawhouse()
 {
     glBegin(GL_QUADS);
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


    //second house

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

    glColor3f (0.10, 0.12, .9);
    glVertex3f(7.f, 2.3f, 0.0f);
    glVertex3f(9.5f, 2.3f, 0.0f);
    glVertex3f(8.5f, 4.0f, 0.0f);

    glEnd();
 }


 void drawriverbank()
 {
     //upper river bank//
     glBegin(GL_QUADS);

      glColor3f(0.6,0.4,0.4);
    glVertex3f(-2.0,-6.389f,0.0f);
    glVertex3f(20.999f,-5.235f,0.0f);
    glVertex3f(21.0f,-5.0f,0.0f);
    glVertex3f(-2.0f,-5.0f,0.0f);

    //lower river bank//

      glColor3f(0.6,0.4,0.4);
    glVertex3f(-2.05088,-8.999f,0.0f);
    glVertex3f(0.387f,-6.813f,0.0f);
    glVertex3f(2.0f,-6.0f,0.0f);
    glVertex3f(-2.0f,-5.991f,0.0f);

     glEnd();

 }


void drawboat()
{

    glPushMatrix();

  glTranslatef(tx,ty,0);



    //BOAT TOP//
    glBegin (GL_TRIANGLES);


glColor3f(0.0, 0.0, 0.0);
    glVertex3f(8.0f,-8.0f,0.0f);
    glVertex3f(10.0f,-10.f,0.0f);
    glVertex3f(10.479f,-8.960f,0.0f);


//boat end//
        glColor3f(0.0, 0.0, 0.0);
    glVertex3f(16.0f,-10.0f,0.0f);
    glVertex3f(18.0f,-8.f,0.0f);
    glVertex3f(15.998f,-9.304f,0.0f);

    //boat top start//
     glColor3f(0.0, 0.5, 0.5);
    glVertex3f(10.479f,-8.961f,0.0f);
    glVertex3f(11.9980f,-9.0546f,0.0f);
    glVertex3f(11.594f,-7.781f,0.0f);




glEnd();
    //BOATMID//
    glBegin (GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(10.0f,-10.0f,0.0f);
    glVertex3f(16.0f,-10.0f,0.0f);
    glVertex3f(15.998f,-9.304f,0.0f);
    glVertex3f(10.479f,-8.960f,0.0f);
//boat top end//
    glColor3f(1.0,0.0,0.0);
    glVertex3f(11.9980f,-9.0546f,0.0f);
    glVertex3f(15.998f,-9.304f,0.0f);
    glVertex3f(15.422f,-8.240f,0.0f);
    glVertex3f(11.594f,-7.781f,0.0f);
    //grass field//


glEnd();
  glPopMatrix();

}

 void drawgrass ()
{
    //first grass low part from right//
    glBegin(GL_QUADS);

    glColor3f(0.0,0.5,0.5);
    glVertex3f(4.2,-5.0f,0.0f);
    glVertex3f(4.6f,-5.0f,0.0f);
    glVertex3f(4.400f,-4.799f,0.0f);
    glVertex3f(4.2f,-4.8f,0.0f);

     glColor3f(0.0,0.5,0.5);
    glVertex3f(4.1,-5.0f,0.0f);
    glVertex3f(4.2f,-5.0f,0.0f);
    glVertex3f(4.2f,-4.8f,0.0f);
    glVertex3f(4.0f,-4.8f,0.0f);

    glColor3f(0.0,0.5,0.5);
    glVertex3f(4.0,-5.0f,0.0f);
    glVertex3f(4.1f,-5.0f,0.0f);
    glVertex3f(4.0f,-4.8f,0.0f);
    glVertex3f(3.8f,-4.8f,0.0f);

    //second grass low part//
    glColor3f(0.0,0.5,0.5);
    glVertex3f(2.2,-5.0f,0.0f);
    glVertex3f(2.8f,-5.0f,0.0f);
    glVertex3f(2.4f,-4.4f,0.0f);
    glVertex3f(2.0f,-4.6f,0.0f);

    glColor3f(0.0,0.5,0.5);
    glVertex3f(2.2,-5.0f,0.0f);
    glVertex3f(2.0f,-4.6f,0.0f);
    glVertex3f(1.6f,-4.6f,0.0f);
    glVertex3f(1.4f,-5.0f,0.0f);

    glColor3f(0.0,0.5,0.5);
    glVertex3f(1.4,-5.0f,0.0f);
    glVertex3f(1.6f,-4.6f,0.0f);
    glVertex3f(1.0f,-4.6f,0.0f);
    glVertex3f(1.0f,-5.0f,0.0f);



    glEnd();

    //first grass high part from right//
    glBegin(GL_TRIANGLES);

    glColor3f(0.0, 0.5, 0.5);
    glVertex3f(4.2f,-4.8f,0.0f);
    glVertex3f(4.40f,-4.799f,0.0f);
    glVertex3f(4.310f,-4.402f,0.0f);

    glColor3f(0.0, 0.5, 0.5);
    glVertex3f(4.2f,-4.8f,0.0f);
    glVertex3f(4.0f,-4.44f,0.0f);
    glVertex3f(4.0f,-4.8f,0.0f);

    glColor3f(0.0, 0.5, 0.5);
    glVertex3f(3.8f,-4.8f,0.0f);
    glVertex3f(4.0f,-4.8f,0.0f);
    glVertex3f(3.6f,-4.4f,0.0f);

    //second grass higher part//

    glColor3f(0.0, 0.5, 0.5);
    glVertex3f(2.0f,-4.6f,0.0f);
    glVertex3f(2.4f,-4.4f,0.0f);
    glVertex3f(2.2f,-3.6f,0.0f);

    glColor3f(0.0, 0.5, 0.5);
    glVertex3f(1.6f,-4.6f,0.0f);
    glVertex3f(2.0f,-4.6f,0.0f);
    glVertex3f(1.4f,-3.8f,0.0f);

    glColor3f(0.0, 0.5, 0.5);
    glVertex3f(1.0f,-4.6f,0.0f);
    glVertex3f(1.6f,-4.6f,0.0f);
    glVertex3f(0.8f,-3.8f,0.0f);


    glEnd();

     /*glBegin(GL_POLYGON);
    float theta;
    int i;


   glColor3ub (0,255,0);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(1.7+.7*cos(theta),4.8+.7*sin(theta));

    }
    glEnd();*/

}


 void drawcloud()
 {
     glPushMatrix();
     glScalef(1.2f, 1.0f, 1.0f);
     //first cloud from left//
     glBegin(GL_POLYGON);
    float theta;
    int i;
    //sun//
    glColor3ub (255,90,0);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0.9991+1*cos(theta),16.559+3*sin(theta));

    }
    glEnd();
    glPopMatrix();
    glBegin(GL_POLYGON);



//1st from left//
   glColor3ub (255,255,255);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(5.0+.7*cos(theta),15.0+1.2*sin(theta));
    }
    glEnd();
    //top last//
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(6.3918+.9*cos(theta),15.0+2.2*sin(theta));
    }
    glEnd();


    glBegin(GL_POLYGON);
    //2nd //

    glColor3ub (255,255,255);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(5.984+.7*cos(theta),13.794+1.2*sin(theta));
    }
    glEnd();


glBegin(GL_POLYGON);
    //3rd //
    glColor3ub (255,255,255);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(6.617+.7*cos(theta),14.0187+1.2*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    //th4//

    glColor3ub (255,255,255);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(5.413+.9*cos(theta),14.403+1.2*sin(theta));
    }
    glEnd();
    //5th//
    glBegin(GL_POLYGON);
    glColor3ub (255,255,255);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(7.0+.7*cos(theta),15.321+1.2*sin(theta));
    }
    glEnd();
    //6th//
    glBegin(GL_POLYGON);
    glColor3ub (255,255,255);


for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(6.0+.7*cos(theta),14.47+1.2*sin(theta));
    }
    glEnd();
    //7th//
    glColor3ub (255,255,255);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(6.0+.5*cos(theta),14.198+1.2*sin(theta));
    }
    //8TH//
    glBegin(GL_POLYGON);

     glColor3ub (255,255,255);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(6.0+.5*cos(theta),13.622+1.2*sin(theta));
    }
    glEnd();
    //9TH//
    glBegin(GL_POLYGON);
     glColor3ub (255,255,255);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(6.819+.5*cos(theta),16.0+1.2*sin(theta));
    }

glEnd();

  //second cloud//
glBegin(GL_POLYGON);

//1st from left//
   glColor3ub (255,255,255);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(12.0+.7*cos(theta),14.0+1.2*sin(theta));
    }
    //2ND//
    glColor3ub (255,255,255);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(13.0+.7*cos(theta),14.0+1.2*sin(theta));
    }
    //3RD//
    glColor3ub (255,255,255);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(13.8+.7*cos(theta),14.2+1.2*sin(theta));
    }
    //4TH SCOND ROW//
    glColor3ub (255,255,255);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(12.0+.7*cos(theta),14.6+1.2*sin(theta));
    }
    //5TH//
    glColor3ub (255,255,255);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(13.0+.7*cos(theta),14.8+1.2*sin(theta));
    }
    //6TH FIRST ROW//
    glColor3ub (255,255,255);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(12.0+.7*cos(theta),15.5+1.2*sin(theta));
    }

glEnd();

//3rd cloud//
 glBegin(GL_POLYGON);
for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(15.991+.7*cos(theta),17.179+1.2*sin(theta));
    }
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(15.991+.7*cos(theta),16.810+1.2*sin(theta));
    }
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(16.909+.7*cos(theta),16.8705+1.2*sin(theta));
    }
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(17.109+.7*cos(theta),17.617+1.2*sin(theta));
    }

 glEnd();
 }



void drawWindmill()
{

   // glutSolidSphere(0.5,150,150);
         glBegin(GL_QUADS);
 //body of the wind mill
    glColor3f (0.3, 0.31, .33);
    glVertex3f(16.f, -.3f, 0.0f);
    glVertex3f(18.f, -.3f, 0.0f);
    glVertex3f(17.2f, 7.f, 0.0f);
    glVertex3f(16.7f, 7.f, 0.0f);


  glEnd();
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  //glRotatef(-_cameraAngle, 0.0f, 1.0f, 0.0f);
  //glTranslatef(0.0f, 0.0f, -5.0f);


  glPushMatrix();
  glTranslatef(17.2f, 7.0f, 0.0f);
  //glColor3ub(0,0,0);


  glRotatef(_angle, 0.0f, 0.0f, 1.0f);
    glTranslatef(-17.f, -7.0f, 0.0f);
  /*glBegin(GL_TRIANGLES);

  //Triangle
  glColor3f(0.0f, 0.0f, 1.0f);
  glVertex3f(0.5f, -0.5f, 0.0f);
  glVertex3f(0.0f, 0.5f, 0.0f);
  glVertex3f(-0.5f, -0.5f, 0.0f);

  glEnd();
    */

 //   void drawWindmill()
//{




 //squar
 /*glBegin(GL_QUADS);
 //body of the wind mill
    glColor3f (.0, 0.46, .41);
    glVertex3f(16.f, -.3f, 0.0f);
    glVertex3f(18.f, -.3f, 0.0f);
    glVertex3f(17.2f, 7.f, 0.0f);
    glVertex3f(16.7f, 7.f, 0.0f);


 glEnd();
 */


//hand of the Windmill
 //glPushMatrix();
  glBegin(GL_TRIANGLES);

    //first wind
    glColor3f (0.11, 0.0, 0.3);
    glVertex3f(15.f, 3.5f, 0.0f);
    glVertex3f(17.f, 7.f, 0.0f);
    glVertex3f(14.f, 4.5f, 0.0f);

    //2nd wind
     glColor3f (0.11, 0.0, 0.3);
    glVertex3f(17.f, 7.f, 0.0f);
    glVertex3f(15.3f, 10.6f, 0.0f);
    glVertex3f(16.7f, 10.9f, 0.0f);

    //3rd wind
     glColor3f (0.11, 0.0, 0.3);
    glVertex3f(19.5f, 4.f, 0.0f);
    glVertex3f(20.5f, 5.f, 0.0f);
    glVertex3f(17.f, 7.0f, 0.0f);

    glEnd();

glPopMatrix();

   glBegin(GL_POLYGON);
    float theta;
    int i;


   glColor3ub (0,0,0);

    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(17.+.4*cos(theta),7.0+.7*sin(theta));

    }

  glEnd();

}
void drawScene() {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


    /*drawbackground();
    drawgrass ();
    drawtree();
    drawfence();
    drawhouse();
    drawriverbank();
    drawboat();
    drawcloud();
    drawWindmill();*/
     drawbackground();
     drawWindmill();
     drawhouse();
     drawtree();
     drawgrass();
     drawriverbank();
     drawboat();


     drawfence();
     drawcloud();
     glutSwapBuffers();
}

/*
void update(int value) {
  _angle += 2.0f;
  if (_angle > 360) {
    _angle -= 360;
  }


  glutPostRedisplay(); ////Tell GLUT that the scene has changed
  glutTimerFunc(4, update, 0);
}
*/


void spinDisplay_left(void)
{
  _angle += 2.0f;
  glutPostRedisplay();
//drawWindmill();
  //glRotatef(spin, 0.0, 0.0, 1.0);
}

void spinDisplay_right(void)
{
   _angle -= 2.0f;
   glutPostRedisplay();
   //drawWindmill();
   //glRotatef(spin, 0.0, 0.0, 1.0);
}


void init (void)
{
glClearColor (1.0, 1.0, 1.0, 1.0); //select clearing (background) color
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-2, 21, -15, 20, -10, 100);
}

void my_mouse(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)
            glutIdleFunc(spinDisplay_left);
         break;
      case GLUT_MIDDLE_BUTTON:
          if(state==GLUT_DOWN)
            glutIdleFunc(NULL);
          break;
      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN)
      glutIdleFunc(spinDisplay_right);
         break;
      default:
         break;
   }
}

void spe_key(int key, int x, int y)
{

  switch (key) {

    case GLUT_KEY_LEFT:
            tx -=1;
            glutPostRedisplay();
            break;
    case GLUT_KEY_RIGHT:
            tx +=1;
            glutPostRedisplay();
            break;
        case GLUT_KEY_UP:
            ty += 1;
            glutPostRedisplay();
            break;
        case GLUT_KEY_DOWN:
            ty -= 1;
            glutPostRedisplay();
            break;
        default:
            break;
  }
}


/*void my_mouse(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)
            glutIdleFunc(spinDisplay_left);
         break;
      case GLUT_MIDDLE_BUTTON:
          if(state==GLUT_DOWN)
            glutIdleFunc(NULL);
          break;
      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN)
      glutIdleFunc(spinDisplay_right);
         break;
      default:
         break;
   }
}*/





/*
int main(int argc, char** argv) {
  //Initialize GLUT
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
  glutInitWindowSize(400, 400);

  //Create the window
  glutCreateWindow("Color");
  initRendering();

  //Set handler functions
  glutDisplayFunc(drawScene);
  glutKeyboardFunc(handleKeypress);
  glutReshapeFunc(handleResize);

  glutTimerFunc(25, update, 0); //Add a timer

  glutMainLoop();
  return 0;
}*/

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH );
glutInitWindowSize (1366, 720);
glutInitWindowPosition (500, 500);
glutCreateWindow ("Graphic Project");
init ();
glutDisplayFunc(drawScene);


//glutMouseFunc(my_mouse);
glutSpecialFunc(spe_key);
//glutTimerFunc(25, update, 0);
glutMouseFunc(my_mouse);
glutMainLoop();
return 0;
}
