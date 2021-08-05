#include <windows.h>  // for MS Windows
#include<GL/glut.h> // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
#include<cstdio>
#include <GL/gl.h>

GLfloat j = 0.0f;
GLfloat i = 0.0f;
GLfloat position1 = 0.0f;
GLfloat speed1 = 0.03f;

GLfloat position2 = 0.0f;
GLfloat speed2 = 0.05f;

GLfloat position3 = 0.0f;
GLfloat speed3 = 0.02f;


GLfloat position4 = 0.0f;
GLfloat speed4 = 0.02f;

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}



void update1(int value) {

    if(position1 >1.0)
        position1 = -1.0f;

    position1 += speed1;

    glutPostRedisplay();


    glutTimerFunc(100, update1, 0);
}
void update2(int value) {

    if(position2 <-1.0)
        position2 = 1.0f;

    position2 -= speed2;

    glutPostRedisplay();


    glutTimerFunc(100, update2, 0);
}

void update4(int value) {

    if(position4 >1.0)
        position4 = -1.0f;

    position4 += speed4;

    glutPostRedisplay();


    glutTimerFunc(100, update4, 0);
}

void display() {
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();





    glBegin(GL_QUADS); //background
glColor3ub(151, 252, 249);
glVertex2f(1,1);
glVertex2f(-1,1);
glVertex2f(-1,-1);
glVertex2f(1,-1);
glEnd();

    glBegin(GL_QUADS); //below street
glColor3ub(207, 196, 147);
glVertex2f(1,-.62);
glVertex2f(-1,-.62);
glVertex2f(-1,-1);
glVertex2f(1,-1);
glEnd();

    glBegin(GL_QUADS); //street
glColor3ub(97, 97, 91);
glVertex2f(1,-.25);
glVertex2f(-1,-.25);
glVertex2f(-1,-.72);
glVertex2f(1,-.72);

    glBegin(GL_QUADS); //street upper
glColor3ub(173, 173, 147);
glVertex2f(1,0.05);
glVertex2f(-1,0.05);
glVertex2f(-1,-.25);
glVertex2f(1,-.25);
glEnd();

      glPushMatrix();
glTranslatef(position2,0.0f, 0.0f);  //cloud

       int i;

GLfloat x=-.8f;  GLfloat y=.8f;  GLfloat radius =.1f;
    int triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     GLfloat twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

        i;

 x=-.88f;   y=.8f;   radius =.09f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
      twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

        i;

 x=-.67f;   y=.82f;   radius =.1f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
      twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();



    glPopMatrix();

    glBegin(GL_QUADS); //school
glColor3ub(255,255,255);
glVertex2f(-.28,.5);
glVertex2f(-.75,.5);
glVertex2f(-.9,.4);
glVertex2f(-.38,.4);
glEnd();

    glBegin(GL_QUADS); //school
glColor3ub(168, 62, 80);
glVertex2f(-.38,.4);
glVertex2f(-.9,.4);
glVertex2f(-.9,0);
glVertex2f(-.38,0);
glEnd();

    glBegin(GL_QUADS); //school
glColor3ub(191, 77, 96);
glVertex2f(-.28,.5);
glVertex2f(-.38,.4);
glVertex2f(-.38,0);
glVertex2f(-.28,0);
glEnd();

    glBegin(GL_QUADS); //school
glColor3ub(255,255,255);
glVertex2f(-.5,0);
glVertex2f(-.5,.13);
glVertex2f(-.63,.13);
glVertex2f(-.63,0);
glEnd();

    glBegin(GL_QUADS); //school
glColor3ub(255,255,255);
glVertex2f(-.72,0);
glVertex2f(-.72,.2);
glVertex2f(-.85,.2);
glVertex2f(-.85,0);
glEnd();

    glBegin(GL_QUADS); //school
glColor3ub(255,255,255);
glVertex2f(-.42,.25);
glVertex2f(-.42,.35);
glVertex2f(-.85,.35);
glVertex2f(-.85,.25);
glEnd();

   /* glBegin(GL_QUADS); //Nagordola
glColor3ub(255,255,255);
glVertex2f(0.7,0.0);
glVertex2f(0.65,0.0);
glVertex2f(0.65,0.375);
glVertex2f(0.7,0.375);
glEnd();

*/





glBegin(GL_POLYGON); //Hospital1
glColor3ub(43, 164, 166);
glVertex2f(0.62,0);
glVertex2f(0.62,0.3);
glVertex2f(0.58,0.35);
glVertex2f(0.39,0.35);
glVertex2f(0.39,0.25);
glVertex2f(0.1,0.25);
glVertex2f(0.1,0);

glEnd();


glBegin(GL_POLYGON); //HospitalWindow
glColor3ub(28, 29, 79);
glVertex2f(0.15,0.1);
glVertex2f(0.32,0.1);
glVertex2f(0.32,0.2);
glVertex2f(0.15,0.2);
glEnd();

glBegin(GL_POLYGON); //HospitalDoor
glColor3ub(28, 29, 79);
glVertex2f(0.4,0);
glVertex2f(0.47,0.0);
glVertex2f(0.47,0.25);
glVertex2f(0.4,0.25);
glEnd();



glBegin(GL_LINES); //Roads
    glColor3ub(255,255,255);
    glVertex2f(-.9,-0.5);
    glVertex2f(-.7,-.5);
    glVertex2f(-.4,-0.5);
    glVertex2f(-.6,-.5);

    glVertex2f(-.3,-0.5);
    glVertex2f(-.1,-.5);


    glVertex2f(.2,-0.5);
    glVertex2f(0.0,-.5);

    glVertex2f(.3,-0.5);
    glVertex2f(0.5,-.5);

    glVertex2f(.8,-0.5);
    glVertex2f(0.6,-.5);
    glEnd();


     glPushMatrix();
glTranslatef(position1, 0.0f,0.0f);

glBegin(GL_POLYGON); //Bus
glColor3ub(212, 55, 79);
glVertex2f(-0.1,-0.5);
glVertex2f(-0.1,-0.4);
glVertex2f(-0.12,-0.39);
glVertex2f(-0.12,-0.35);
glVertex2f(-0.5,-0.35);
glVertex2f(-0.5,-0.5);

glEnd();

glBegin(GL_POLYGON); //BusWindow1
glColor3ub(56, 50, 51);
glVertex2f(-0.3,-0.4);
glVertex2f(-0.45,-0.4);
glVertex2f(-0.45,-0.45);
glVertex2f(-0.3,-0.45);


glEnd();

glBegin(GL_POLYGON); //BusWindow2
glColor3ub(56, 50, 51);
glVertex2f(-0.22,-0.4);
glVertex2f(-0.25,-0.4);
glVertex2f(-0.25,-0.5);
glVertex2f(-0.22,-0.5);


glEnd();

glBegin(GL_POLYGON); //BusWindow3
glColor3ub(56, 50, 51);
glVertex2f(-0.15,-0.4);
glVertex2f(-0.2,-0.4);
glVertex2f(-0.2,-0.45);
glVertex2f(-0.15,-0.45);


glEnd();


//BusWheel

 i;
 x=-.15f;  y=-.5f;  radius =.025f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


     i;
 x=-.15f;  y=-.5f;  radius =.009f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


         i;
 x=-.4f;  y=-.5f;  radius =.025f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

             i;
 x=-.4f;  y=-.5f;  radius =.009f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
glPopMatrix();

  glPushMatrix();
glTranslatef(position2,0.0f,0.0f);

glBegin(GL_POLYGON); //Car
glColor3ub(232,226,37);
glVertex2f(0.3,-0.6);
glVertex2f(0.3,-0.66);
glVertex2f(0.55,-0.66);
glVertex2f(0.55,-0.6);
glVertex2f(0.5,-0.55);
glVertex2f(0.4,-0.55);

glEnd();


glBegin(GL_LINES); //BusWindow3
glColor3ub(0, 0, 0);
glVertex2f(0.3,-0.6);
glVertex2f(0.55,-0.6);

glEnd();


         i;
 x=.35f;  y=-.66f;  radius =.025f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

             i;
 x=.35f;  y=-.66f;  radius =.009f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


             i;
 x=.5f;  y=-.66f;  radius =.025f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

             i;
 x=.5f;  y=-.66f;  radius =.009f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

 glPopMatrix();

glBegin(GL_POLYGON); //ShahidMinar
glColor3ub(238, 240, 165);
glVertex2f(-0.1,0);
glVertex2f(-0.1,.3);
glVertex2f(-0.15,0.3);
glVertex2f(-0.15,0.0);

glEnd();


glBegin(GL_POLYGON); //ShahidMinar
glColor3ub(238, 240, 165);
glVertex2f(-0.17,0);
glVertex2f(-0.17,.2);
glVertex2f(-0.22,0.2);
glVertex2f(-0.22,0);

glEnd();

glBegin(GL_POLYGON); //ShahidMinar
glColor3ub(238, 240, 165);
glVertex2f(-0.08,0);
glVertex2f(-0.08,.2);
glVertex2f(-.03,0.2);
glVertex2f(-.03,0);

glEnd();

             i;
 x=-.125f;  y=.17f;  radius =.05f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 0, 0);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();




    glBegin(GL_QUADS); //streetlight
glColor3ub(0,0,0);
glVertex2f(-.65,-.25);
glVertex2f(-.65,-.22);
glVertex2f(-.55,-.22);
glVertex2f(-.55,-.25);

glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.6,-.22);
glVertex2f(-.6,-.05);

glVertex2f(.6,-.22);
glVertex2f(.6,-.05);
glEnd();



    glBegin(GL_QUADS); //streetlight
glColor3ub(0,0,0);
glVertex2f(.65,-.25);
glVertex2f(.65,-.22);
glVertex2f(.55,-.22);
glVertex2f(.55,-.25);

glEnd();

 glBegin(GL_QUADS); //streetlight1
glColor3ub(0,0,0);
glVertex2f(-.6,-.05);
glVertex2f(-.68,-.08);
glVertex2f(-.68,-.1);
glVertex2f(-.62,-.1);

glEnd();

 glBegin(GL_QUADS); //streetlight2
glColor3ub(0,0,0);
glVertex2f(.6,-.05);
glVertex2f(.52,-.08);
glVertex2f(.52,-.1);
glVertex2f(.58,-.1);

glEnd();


 glPushMatrix();
glTranslatef(position4,0.0f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.5,.6);
glVertex2f(-.55,.65);

glVertex2f(-.5,.6);
glVertex2f(-.45,.65);
glEnd();
 glPopMatrix();


         glBegin(GL_QUADS); //nagordola
glColor3ub(107, 62, 4);
glVertex2f(.85,0);
glVertex2f(.87,.0);
glVertex2f(.87,.4);
glVertex2f(.85,.4);

glEnd();

glPushMatrix();
glTranslatef(.86,.4,0);
glRotatef(j,0,0.0,0.1);





glBegin(GL_TRIANGLES); //nagordola
glColor3ub(201, 119, 12);
glVertex2f(0,0);
glVertex2f(-.2,.2);
glVertex2f(-.2,.1);
glEnd();

glBegin(GL_TRIANGLES); //nagordola
glColor3ub(201, 119, 12);
glVertex2f(0,0);
glVertex2f(.2,.1);
glVertex2f(.2,.2);
glEnd();

glBegin(GL_TRIANGLES); //nagordola
glColor3ub(201, 119, 12);
glVertex2f(0,0);
glVertex2f(.2,-.2);
glVertex2f(0.2,-.1);
glEnd();

glBegin(GL_TRIANGLES); //nagordola
glColor3ub(201, 119, 12);
glVertex2f(0,0);
glVertex2f(-.2,-.1);
glVertex2f(-0.2,-.2);
glEnd();


glBegin(GL_LINES); //nagordola
glColor3ub(0, 0, 0);
glVertex2f(-.2,.1);
glVertex2f(-0.2,0.05);

glVertex2f(.2,.1);
glVertex2f(0.2,0.05);

glVertex2f(.2,-.2);
glVertex2f(0.2,-.25);

glVertex2f(-.2,-.2);
glVertex2f(-.2,-.25);


glEnd();

    glBegin(GL_QUADS); //nagordola
glColor3ub(107, 62, 4);
glVertex2f(.25,0.05);
glVertex2f(.15,0.05);
glVertex2f(.15,-0.05);
glVertex2f(.25,-0.05);

glEnd();

    glBegin(GL_QUADS); //nagordola
glColor3ub(107, 62, 4);
glVertex2f(-.25,0.05);
glVertex2f(-.25,-0.05);
glVertex2f(-.15,-0.05);
glVertex2f(-.15,0.05);

glEnd();

    glBegin(GL_QUADS); //nagordola
glColor3ub(107, 62, 4);
glVertex2f(.25,-0.25);
glVertex2f(.15,-0.25);
glVertex2f(.15,-0.35);
glVertex2f(.25,-0.35);

glEnd();

    glBegin(GL_QUADS); //nagordola
glColor3ub(107, 62, 4);
glVertex2f(-.25,-0.25);
glVertex2f(-.25,-0.35);
glVertex2f(-.15,-0.35);
glVertex2f(-.15,-0.25);

glEnd();


glPopMatrix();

 j+=0.1f;



              i;
 x=.85f;  y=.85f;  radius =.07f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 3);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

//--------------------------------trees

                 i;
 x=-.9f;  y=-.9f;  radius =.15f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(3, 94, 26);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


                     i;
 x=.9f;  y=-.9f;  radius =.15f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(3, 94, 26);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();



                     i;
 x=-.8f;  y=-.92f;  radius =.1f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(4, 122, 34);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

                         i;
 x=.8f;  y=-.92f;  radius =.1f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(4, 122, 34);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


    i;

     x=-.6f;  y=-.92f;  radius =.15f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 176, 44);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


        i;

     x=.6f;  y=-.92f;  radius =.15f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 176, 44);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


        i;

     x=-.4f;  y=-.95f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(19, 128, 21);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


            i;

     x=.4f;  y=-.95f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(19, 128, 21);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


            i;

     x=-.3f;  y=-.95f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(21, 161, 23);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


                i;

     x=.3f;  y=-.95f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(21, 161, 23);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();



    i;

     x=-.42f;  y=-.97f;  radius =.05f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 176, 44);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


        i;

     x=.42f;  y=-.97f;  radius =.05f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 176, 44);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


                i;

     x=-.1f;  y=-.92f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(8, 71, 9);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

                    i;

     x=.1f;  y=-.92f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(8, 71, 9);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


                    i;

     x=-.25f;  y=-.95f;  radius =.08f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(56, 186, 58);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();



                        i;

     x=.25f;  y=-.95f;  radius =.08f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(56, 186, 58);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


                            i;

     x=.05f;  y=-.95f;  radius =.08f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(29, 163, 31);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


glFlush();

}










void display1() {
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();





    glBegin(GL_QUADS); //background
glColor3ub(255, 167, 66);
glVertex2f(1,1);
glVertex2f(-1,1);
glVertex2f(-1,-1);
glVertex2f(1,-1);
glEnd();


    glBegin(GL_QUADS); //below street
glColor3ub(207, 196, 147);
glVertex2f(1,-.62);
glVertex2f(-1,-.62);
glVertex2f(-1,-1);
glVertex2f(1,-1);
glEnd();

    glBegin(GL_QUADS); //street
glColor3ub(97, 97, 91);
glVertex2f(1,-.25);
glVertex2f(-1,-.25);
glVertex2f(-1,-.72);
glVertex2f(1,-.72);

    glBegin(GL_QUADS); //street upper
glColor3ub(173, 173, 147);
glVertex2f(1,0.05);
glVertex2f(-1,0.05);
glVertex2f(-1,-.25);
glVertex2f(1,-.25);
glEnd();

      glPushMatrix();
glTranslatef(position2,0.0f, 0.0f);  //cloud

       int i;

GLfloat x=-.8f;  GLfloat y=.8f;  GLfloat radius =.1f;
    int triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     GLfloat twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

        i;

 x=-.88f;   y=.8f;   radius =.09f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
      twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

        i;

 x=-.67f;   y=.82f;   radius =.1f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
      twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();



    glPopMatrix();

    glBegin(GL_QUADS); //school
glColor3ub(255,255,255);
glVertex2f(-.28,.5);
glVertex2f(-.75,.5);
glVertex2f(-.9,.4);
glVertex2f(-.38,.4);
glEnd();

    glBegin(GL_QUADS); //school
glColor3ub(168, 62, 80);
glVertex2f(-.38,.4);
glVertex2f(-.9,.4);
glVertex2f(-.9,0);
glVertex2f(-.38,0);
glEnd();

    glBegin(GL_QUADS); //school
glColor3ub(191, 77, 96);
glVertex2f(-.28,.5);
glVertex2f(-.38,.4);
glVertex2f(-.38,0);
glVertex2f(-.28,0);
glEnd();

    glBegin(GL_QUADS); //school
glColor3ub(255,255,255);
glVertex2f(-.5,0);
glVertex2f(-.5,.13);
glVertex2f(-.63,.13);
glVertex2f(-.63,0);
glEnd();

    glBegin(GL_QUADS); //school
glColor3ub(255,255,255);
glVertex2f(-.72,0);
glVertex2f(-.72,.2);
glVertex2f(-.85,.2);
glVertex2f(-.85,0);
glEnd();

    glBegin(GL_QUADS); //school
glColor3ub(255,255,255);
glVertex2f(-.42,.25);
glVertex2f(-.42,.35);
glVertex2f(-.85,.35);
glVertex2f(-.85,.25);
glEnd();

   /* glBegin(GL_QUADS); //Nagordola
glColor3ub(255,255,255);
glVertex2f(0.7,0.0);
glVertex2f(0.65,0.0);
glVertex2f(0.65,0.375);
glVertex2f(0.7,0.375);
glEnd();

*/





glBegin(GL_POLYGON); //Hospital1
glColor3ub(43, 164, 166);
glVertex2f(0.62,0);
glVertex2f(0.62,0.3);
glVertex2f(0.58,0.35);
glVertex2f(0.39,0.35);
glVertex2f(0.39,0.25);
glVertex2f(0.1,0.25);
glVertex2f(0.1,0);

glEnd();


glBegin(GL_POLYGON); //HospitalWindow
glColor3ub(28, 29, 79);
glVertex2f(0.15,0.1);
glVertex2f(0.32,0.1);
glVertex2f(0.32,0.2);
glVertex2f(0.15,0.2);
glEnd();

glBegin(GL_POLYGON); //HospitalDoor
glColor3ub(28, 29, 79);
glVertex2f(0.4,0);
glVertex2f(0.47,0.0);
glVertex2f(0.47,0.25);
glVertex2f(0.4,0.25);
glEnd();



glBegin(GL_LINES); //Roads
    glColor3ub(255,255,255);
    glVertex2f(-.9,-0.5);
    glVertex2f(-.7,-.5);
    glVertex2f(-.4,-0.5);
    glVertex2f(-.6,-.5);

    glVertex2f(-.3,-0.5);
    glVertex2f(-.1,-.5);


    glVertex2f(.2,-0.5);
    glVertex2f(0.0,-.5);

    glVertex2f(.3,-0.5);
    glVertex2f(0.5,-.5);

    glVertex2f(.8,-0.5);
    glVertex2f(0.6,-.5);
    glEnd();


     glPushMatrix();
glTranslatef(position1, 0.0f,0.0f);

glBegin(GL_POLYGON); //Bus
glColor3ub(212, 55, 79);
glVertex2f(-0.1,-0.5);
glVertex2f(-0.1,-0.4);
glVertex2f(-0.12,-0.39);
glVertex2f(-0.12,-0.35);
glVertex2f(-0.5,-0.35);
glVertex2f(-0.5,-0.5);

glEnd();

glBegin(GL_POLYGON); //BusWindow1
glColor3ub(56, 50, 51);
glVertex2f(-0.3,-0.4);
glVertex2f(-0.45,-0.4);
glVertex2f(-0.45,-0.45);
glVertex2f(-0.3,-0.45);


glEnd();

glBegin(GL_POLYGON); //BusWindow2
glColor3ub(56, 50, 51);
glVertex2f(-0.22,-0.4);
glVertex2f(-0.25,-0.4);
glVertex2f(-0.25,-0.5);
glVertex2f(-0.22,-0.5);


glEnd();

glBegin(GL_POLYGON); //BusWindow3
glColor3ub(56, 50, 51);
glVertex2f(-0.15,-0.4);
glVertex2f(-0.2,-0.4);
glVertex2f(-0.2,-0.45);
glVertex2f(-0.15,-0.45);


glEnd();


//BusWheel

 i;
 x=-.15f;  y=-.5f;  radius =.025f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


     i;
 x=-.15f;  y=-.5f;  radius =.009f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


         i;
 x=-.4f;  y=-.5f;  radius =.025f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

             i;
 x=-.4f;  y=-.5f;  radius =.009f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
glPopMatrix();

  glPushMatrix();
glTranslatef(position2,0.0f,0.0f);

glBegin(GL_POLYGON); //Car
glColor3ub(232,226,37);
glVertex2f(0.3,-0.6);
glVertex2f(0.3,-0.66);
glVertex2f(0.55,-0.66);
glVertex2f(0.55,-0.6);
glVertex2f(0.5,-0.55);
glVertex2f(0.4,-0.55);

glEnd();


glBegin(GL_LINES); //BusWindow3
glColor3ub(0, 0, 0);
glVertex2f(0.3,-0.6);
glVertex2f(0.55,-0.6);

glEnd();


         i;
 x=.35f;  y=-.66f;  radius =.025f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

             i;
 x=.35f;  y=-.66f;  radius =.009f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


             i;
 x=.5f;  y=-.66f;  radius =.025f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

             i;
 x=.5f;  y=-.66f;  radius =.009f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

 glPopMatrix();

glBegin(GL_POLYGON); //ShahidMinar
glColor3ub(238, 240, 165);
glVertex2f(-0.1,0);
glVertex2f(-0.1,.3);
glVertex2f(-0.15,0.3);
glVertex2f(-0.15,0.0);

glEnd();


glBegin(GL_POLYGON); //ShahidMinar
glColor3ub(238, 240, 165);
glVertex2f(-0.17,0);
glVertex2f(-0.17,.2);
glVertex2f(-0.22,0.2);
glVertex2f(-0.22,0);

glEnd();

glBegin(GL_POLYGON); //ShahidMinar
glColor3ub(238, 240, 165);
glVertex2f(-0.08,0);
glVertex2f(-0.08,.2);
glVertex2f(-.03,0.2);
glVertex2f(-.03,0);

glEnd();

             i;
 x=-.125f;  y=.17f;  radius =.05f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 0, 0);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();




    glBegin(GL_QUADS); //streetlight
glColor3ub(0,0,0);
glVertex2f(-.65,-.25);
glVertex2f(-.65,-.22);
glVertex2f(-.55,-.22);
glVertex2f(-.55,-.25);

glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.6,-.22);
glVertex2f(-.6,-.05);

glVertex2f(.6,-.22);
glVertex2f(.6,-.05);
glEnd();



    glBegin(GL_QUADS); //streetlight
glColor3ub(0,0,0);
glVertex2f(.65,-.25);
glVertex2f(.65,-.22);
glVertex2f(.55,-.22);
glVertex2f(.55,-.25);

glEnd();

 glBegin(GL_QUADS); //streetlight1
glColor3ub(227, 235, 0);
glVertex2f(-.6,-.05);
glVertex2f(-.68,-.08);
glVertex2f(-.68,-.1);
glVertex2f(-.62,-.1);

glEnd();

 glBegin(GL_QUADS); //streetlight2
glColor3ub(227, 235, 0);
glVertex2f(.6,-.05);
glVertex2f(.52,-.08);
glVertex2f(.52,-.1);
glVertex2f(.58,-.1);

glEnd();


 glPushMatrix();
glTranslatef(position4,0.0f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.5,.6);
glVertex2f(-.55,.65);

glVertex2f(-.5,.6);
glVertex2f(-.45,.65);
glEnd();
 glPopMatrix();


         glBegin(GL_QUADS); //nagordola
glColor3ub(107, 62, 4);
glVertex2f(.85,0);
glVertex2f(.87,.0);
glVertex2f(.87,.4);
glVertex2f(.85,.4);

glEnd();

glPushMatrix();
glTranslatef(.86,.4,0);
glRotatef(j,0,0.0,0.1);





glBegin(GL_TRIANGLES); //nagordola
glColor3ub(201, 119, 12);
glVertex2f(0,0);
glVertex2f(-.2,.2);
glVertex2f(-.2,.1);
glEnd();

glBegin(GL_TRIANGLES); //nagordola
glColor3ub(201, 119, 12);
glVertex2f(0,0);
glVertex2f(.2,.1);
glVertex2f(.2,.2);
glEnd();

glBegin(GL_TRIANGLES); //nagordola
glColor3ub(201, 119, 12);
glVertex2f(0,0);
glVertex2f(.2,-.2);
glVertex2f(0.2,-.1);
glEnd();

glBegin(GL_TRIANGLES); //nagordola
glColor3ub(201, 119, 12);
glVertex2f(0,0);
glVertex2f(-.2,-.1);
glVertex2f(-0.2,-.2);
glEnd();


glBegin(GL_LINES); //nagordola
glColor3ub(0, 0, 0);
glVertex2f(-.2,.1);
glVertex2f(-0.2,0.05);

glVertex2f(.2,.1);
glVertex2f(0.2,0.05);

glVertex2f(.2,-.2);
glVertex2f(0.2,-.25);

glVertex2f(-.2,-.2);
glVertex2f(-.2,-.25);


glEnd();

    glBegin(GL_QUADS); //nagordola
glColor3ub(107, 62, 4);
glVertex2f(.25,0.05);
glVertex2f(.15,0.05);
glVertex2f(.15,-0.05);
glVertex2f(.25,-0.05);

glEnd();

    glBegin(GL_QUADS); //nagordola
glColor3ub(107, 62, 4);
glVertex2f(-.25,0.05);
glVertex2f(-.25,-0.05);
glVertex2f(-.15,-0.05);
glVertex2f(-.15,0.05);

glEnd();

    glBegin(GL_QUADS); //nagordola
glColor3ub(107, 62, 4);
glVertex2f(.25,-0.25);
glVertex2f(.15,-0.25);
glVertex2f(.15,-0.35);
glVertex2f(.25,-0.35);

glEnd();

    glBegin(GL_QUADS); //nagordola
glColor3ub(107, 62, 4);
glVertex2f(-.25,-0.25);
glVertex2f(-.25,-0.35);
glVertex2f(-.15,-0.35);
glVertex2f(-.15,-0.25);

glEnd();


glPopMatrix();

 j+=0.1f;



              i;
 x=.85f;  y=.85f;  radius =.07f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 111, 0);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();



    //--------------------------------trees

                 i;
 x=-.9f;  y=-.9f;  radius =.15f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(3, 94, 26);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


                     i;
 x=.9f;  y=-.9f;  radius =.15f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(3, 94, 26);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();



                     i;
 x=-.8f;  y=-.92f;  radius =.1f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(4, 122, 34);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

                         i;
 x=.8f;  y=-.92f;  radius =.1f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(4, 122, 34);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


    i;

     x=-.6f;  y=-.92f;  radius =.15f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 176, 44);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


        i;

     x=.6f;  y=-.92f;  radius =.15f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 176, 44);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


        i;

     x=-.4f;  y=-.95f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(19, 128, 21);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


            i;

     x=.4f;  y=-.95f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(19, 128, 21);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


            i;

     x=-.3f;  y=-.95f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(21, 161, 23);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


                i;

     x=.3f;  y=-.95f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(21, 161, 23);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();



    i;

     x=-.42f;  y=-.97f;  radius =.05f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 176, 44);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


        i;

     x=.42f;  y=-.97f;  radius =.05f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 176, 44);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


                i;

     x=-.1f;  y=-.92f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(8, 71, 9);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

                    i;

     x=.1f;  y=-.92f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(8, 71, 9);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


                    i;

     x=-.25f;  y=-.95f;  radius =.08f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(56, 186, 58);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();



                        i;

     x=.25f;  y=-.95f;  radius =.08f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(56, 186, 58);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


                            i;

     x=.05f;  y=-.95f;  radius =.08f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(29, 163, 31);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


glFlush();

}























void display2() {
	glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

//Night City


    glBegin(GL_QUADS); //background
glColor3ub(60, 67, 77);
glVertex2f(1,1);
glVertex2f(-1,1);
glVertex2f(-1,-1);
glVertex2f(1,-1);
glEnd();


glBegin(GL_POINTS);
glColor3ub(255,255,255);
glVertex2f(-0.3,0.6);
glVertex2f(-0.3,0.5);
glVertex2f(-0.5,0.6);
glVertex2f(-0.5,0.5);
glVertex2f(-0.6,0.6);
glVertex2f(-0.6,0.7);
glVertex2f(-0.4,0.8);
glVertex2f(-0.3,0.7);
glVertex2f(-0.8,0.4);
glVertex2f(-0.9,0.4);
glVertex2f(-0.9,0.8);
glVertex2f(-0.1,0.6);
glVertex2f(-0.2,0.8);
glVertex2f(-0.9,0.5);

glEnd();


glBegin(GL_POINTS);
glColor3ub(255,255,255);
glVertex2f(0.3,0.6);
glVertex2f(0.3,0.5);
glVertex2f(0.5,0.6);
glVertex2f(0.5,0.5);
glVertex2f(0.6,0.6);
glVertex2f(0.6,0.7);
glVertex2f(0.4,0.8);
glVertex2f(0.3,0.7);
glVertex2f(0.8,0.4);
glVertex2f(0.9,0.4);
glVertex2f(0.9,0.8);
glVertex2f(0.1,0.6);
glVertex2f(0.2,0.8);
glVertex2f(0.9,0.5);

glEnd();
    glBegin(GL_QUADS); //below street
glColor3ub(207, 196, 147);
glVertex2f(1,-.62);
glVertex2f(-1,-.62);
glVertex2f(-1,-1);
glVertex2f(1,-1);
glEnd();

    glBegin(GL_QUADS); //street
glColor3ub(97, 97, 91);
glVertex2f(1,-.25);
glVertex2f(-1,-.25);
glVertex2f(-1,-.72);
glVertex2f(1,-.72);

    glBegin(GL_QUADS); //street upper
glColor3ub(173, 173, 147);
glVertex2f(1,0.05);
glVertex2f(-1,0.05);
glVertex2f(-1,-.25);
glVertex2f(1,-.25);
glEnd();



    glBegin(GL_QUADS); //school
glColor3ub(255,255,255);
glVertex2f(-.28,.5);
glVertex2f(-.75,.5);
glVertex2f(-.9,.4);
glVertex2f(-.38,.4);
glEnd();

    glBegin(GL_QUADS); //school
glColor3ub(168, 62, 80);
glVertex2f(-.38,.4);
glVertex2f(-.9,.4);
glVertex2f(-.9,0);
glVertex2f(-.38,0);
glEnd();

    glBegin(GL_QUADS); //school
glColor3ub(191, 77, 96);
glVertex2f(-.28,.5);
glVertex2f(-.38,.4);
glVertex2f(-.38,0);
glVertex2f(-.28,0);
glEnd();

    glBegin(GL_QUADS); //school
glColor3ub(255,255,255);
glVertex2f(-.5,0);
glVertex2f(-.5,.13);
glVertex2f(-.63,.13);
glVertex2f(-.63,0);
glEnd();

    glBegin(GL_QUADS); //school
glColor3ub(255,255,255);
glVertex2f(-.72,0);
glVertex2f(-.72,.2);
glVertex2f(-.85,.2);
glVertex2f(-.85,0);
glEnd();

    glBegin(GL_QUADS); //school
glColor3ub(255,255,255);
glVertex2f(-.42,.25);
glVertex2f(-.42,.35);
glVertex2f(-.85,.35);
glVertex2f(-.85,.25);
glEnd();

   /* glBegin(GL_QUADS); //Nagordola
glColor3ub(255,255,255);
glVertex2f(0.7,0.0);
glVertex2f(0.65,0.0);
glVertex2f(0.65,0.375);
glVertex2f(0.7,0.375);
glEnd();

*/





glBegin(GL_POLYGON); //Hospital1
glColor3ub(43, 164, 166);
glVertex2f(0.62,0);
glVertex2f(0.62,0.3);
glVertex2f(0.58,0.35);
glVertex2f(0.39,0.35);
glVertex2f(0.39,0.25);
glVertex2f(0.1,0.25);
glVertex2f(0.1,0);

glEnd();


glBegin(GL_POLYGON); //HospitalWindow
glColor3ub(28, 29, 79);
glVertex2f(0.15,0.1);
glVertex2f(0.32,0.1);
glVertex2f(0.32,0.2);
glVertex2f(0.15,0.2);
glEnd();

glBegin(GL_POLYGON); //HospitalDoor
glColor3ub(28, 29, 79);
glVertex2f(0.4,0);
glVertex2f(0.47,0.0);
glVertex2f(0.47,0.25);
glVertex2f(0.4,0.25);
glEnd();



glBegin(GL_LINES); //Roads
    glColor3ub(255,255,255);
    glVertex2f(-.9,-0.5);
    glVertex2f(-.7,-.5);
    glVertex2f(-.4,-0.5);
    glVertex2f(-.6,-.5);

    glVertex2f(-.3,-0.5);
    glVertex2f(-.1,-.5);


    glVertex2f(.2,-0.5);
    glVertex2f(0.0,-.5);

    glVertex2f(.3,-0.5);
    glVertex2f(0.5,-.5);

    glVertex2f(.8,-0.5);
    glVertex2f(0.6,-.5);
    glEnd();

    glBegin(GL_QUADS); //streetlight
glColor3ub(0,0,0);
glVertex2f(-.65,-.25);
glVertex2f(-.65,-.22);
glVertex2f(-.55,-.22);
glVertex2f(-.55,-.25);

glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.6,-.22);
glVertex2f(-.6,-.05);

glVertex2f(.6,-.22);
glVertex2f(.6,-.05);
glEnd();



    glBegin(GL_QUADS); //streetlight
glColor3ub(0,0,0);
glVertex2f(.65,-.25);
glVertex2f(.65,-.22);
glVertex2f(.55,-.22);
glVertex2f(.55,-.25);

glEnd();

 glBegin(GL_QUADS); //streetlight1
glColor3ub(255, 255, 3);
glVertex2f(-.6,-.05);
glVertex2f(-.68,-.08);
glVertex2f(-.68,-.1);
glVertex2f(-.62,-.1);

glEnd();

 glBegin(GL_QUADS); //streetlight2
glColor3ub(255, 255, 3);
glVertex2f(.6,-.05);
glVertex2f(.52,-.08);
glVertex2f(.52,-.1);
glVertex2f(.58,-.1);

glEnd();









glBegin(GL_POLYGON); //ShahidMinar
glColor3ub(238, 240, 165);
glVertex2f(-0.1,0);
glVertex2f(-0.1,.3);
glVertex2f(-0.15,0.3);
glVertex2f(-0.15,0.0);

glEnd();


glBegin(GL_POLYGON); //ShahidMinar
glColor3ub(238, 240, 165);
glVertex2f(-0.17,0);
glVertex2f(-0.17,.2);
glVertex2f(-0.22,0.2);
glVertex2f(-0.22,0);

glEnd();

glBegin(GL_POLYGON); //ShahidMinar
glColor3ub(238, 240, 165);
glVertex2f(-0.08,0);
glVertex2f(-0.08,.2);
glVertex2f(-.03,0.2);
glVertex2f(-.03,0);

glEnd();

         int    i;

GLfloat x=-.125f; GLfloat y=.17f;  GLfloat radius =.05f;
  int    triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
    GLfloat  twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 0, 0);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


                 i;
 x=.85f;  y=.85f;  radius =.07f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

             glBegin(GL_QUADS); //nagordola
glColor3ub(107, 62, 4);
glVertex2f(.85,0);
glVertex2f(.87,.0);
glVertex2f(.87,.4);
glVertex2f(.85,.4);

glEnd();

    glPushMatrix();
glTranslatef(.86,.4,0);





glBegin(GL_TRIANGLES); //nagordola
glColor3ub(201, 119, 12);
glVertex2f(0,0);
glVertex2f(-.2,.2);
glVertex2f(-.2,.1);
glEnd();

glBegin(GL_TRIANGLES); //nagordola
glColor3ub(201, 119, 12);
glVertex2f(0,0);
glVertex2f(.2,.1);
glVertex2f(.2,.2);
glEnd();

glBegin(GL_TRIANGLES); //nagordola
glColor3ub(201, 119, 12);
glVertex2f(0,0);
glVertex2f(.2,-.2);
glVertex2f(0.2,-.1);
glEnd();

glBegin(GL_TRIANGLES); //nagordola
glColor3ub(201, 119, 12);
glVertex2f(0,0);
glVertex2f(-.2,-.1);
glVertex2f(-0.2,-.2);
glEnd();


glBegin(GL_LINES); //nagordola
glColor3ub(0, 0, 0);
glVertex2f(-.2,.1);
glVertex2f(-0.2,0.05);

glVertex2f(.2,.1);
glVertex2f(0.2,0.05);

glVertex2f(.2,-.2);
glVertex2f(0.2,-.25);

glVertex2f(-.2,-.2);
glVertex2f(-.2,-.25);


glEnd();

    glBegin(GL_QUADS); //nagordola
glColor3ub(107, 62, 4);
glVertex2f(.25,0.05);
glVertex2f(.15,0.05);
glVertex2f(.15,-0.05);
glVertex2f(.25,-0.05);

glEnd();

    glBegin(GL_QUADS); //nagordola
glColor3ub(107, 62, 4);
glVertex2f(-.25,0.05);
glVertex2f(-.25,-0.05);
glVertex2f(-.15,-0.05);
glVertex2f(-.15,0.05);

glEnd();

    glBegin(GL_QUADS); //nagordola
glColor3ub(107, 62, 4);
glVertex2f(.25,-0.25);
glVertex2f(.15,-0.25);
glVertex2f(.15,-0.35);
glVertex2f(.25,-0.35);

glEnd();

    glBegin(GL_QUADS); //nagordola
glColor3ub(107, 62, 4);
glVertex2f(-.25,-0.25);
glVertex2f(-.25,-0.35);
glVertex2f(-.15,-0.35);
glVertex2f(-.15,-0.25);

glEnd();


glPopMatrix();



//--------------------------------trees

                 i;
 x=-.9f;  y=-.9f;  radius =.15f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(3, 94, 26);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


                     i;
 x=.9f;  y=-.9f;  radius =.15f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(3, 94, 26);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();



                     i;
 x=-.8f;  y=-.92f;  radius =.1f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(4, 122, 34);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

                         i;
 x=.8f;  y=-.92f;  radius =.1f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(4, 122, 34);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


    i;

     x=-.6f;  y=-.92f;  radius =.15f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 176, 44);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


        i;

     x=.6f;  y=-.92f;  radius =.15f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 176, 44);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


        i;

     x=-.4f;  y=-.95f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(19, 128, 21);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


            i;

     x=.4f;  y=-.95f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(19, 128, 21);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


            i;

     x=-.3f;  y=-.95f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(21, 161, 23);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


                i;

     x=.3f;  y=-.95f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(21, 161, 23);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();



    i;

     x=-.42f;  y=-.97f;  radius =.05f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 176, 44);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


        i;

     x=.42f;  y=-.97f;  radius =.05f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 176, 44);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


                i;

     x=-.1f;  y=-.92f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(8, 71, 9);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

                    i;

     x=.1f;  y=-.92f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(8, 71, 9);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


                    i;

     x=-.25f;  y=-.95f;  radius =.08f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(56, 186, 58);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();



                        i;

     x=.25f;  y=-.95f;  radius =.08f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(56, 186, 58);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


                            i;

     x=.05f;  y=-.95f;  radius =.08f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(29, 163, 31);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();






glFlush();
}





void display3() {
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();





    glBegin(GL_QUADS); //background
glColor3ub(151, 252, 249);
glVertex2f(1,1);
glVertex2f(-1,1);
glVertex2f(-1,-1);
glVertex2f(1,-1);
glEnd();

    glBegin(GL_QUADS); //below street
glColor3ub(207, 196, 147);
glVertex2f(1,-.62);
glVertex2f(-1,-.62);
glVertex2f(-1,-1);
glVertex2f(1,-1);
glEnd();

    glBegin(GL_QUADS); //street
glColor3ub(97, 97, 91);
glVertex2f(1,-.25);
glVertex2f(-1,-.25);
glVertex2f(-1,-.72);
glVertex2f(1,-.72);

    glBegin(GL_QUADS); //street upper
glColor3ub(173, 173, 147);
glVertex2f(1,0.05);
glVertex2f(-1,0.05);
glVertex2f(-1,-.25);
glVertex2f(1,-.25);
glEnd();

      glPushMatrix();
glTranslatef(position2,0.0f, 0.0f);  //cloud

       int i;

GLfloat x=-.8f;  GLfloat y=.8f;  GLfloat radius =.1f;
    int triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     GLfloat twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 172, 168);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

        i;

 x=-.88f;   y=.8f;   radius =.09f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
      twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 172, 168);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

        i;

 x=-.67f;   y=.82f;   radius =.1f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
      twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 172, 168);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();



    glPopMatrix();

    glBegin(GL_QUADS); //school
glColor3ub(255,255,255);
glVertex2f(-.28,.5);
glVertex2f(-.75,.5);
glVertex2f(-.9,.4);
glVertex2f(-.38,.4);
glEnd();

    glBegin(GL_QUADS); //school
glColor3ub(168, 62, 80);
glVertex2f(-.38,.4);
glVertex2f(-.9,.4);
glVertex2f(-.9,0);
glVertex2f(-.38,0);
glEnd();

    glBegin(GL_QUADS); //school
glColor3ub(191, 77, 96);
glVertex2f(-.28,.5);
glVertex2f(-.38,.4);
glVertex2f(-.38,0);
glVertex2f(-.28,0);
glEnd();

    glBegin(GL_QUADS); //school
glColor3ub(255,255,255);
glVertex2f(-.5,0);
glVertex2f(-.5,.13);
glVertex2f(-.63,.13);
glVertex2f(-.63,0);
glEnd();

    glBegin(GL_QUADS); //school
glColor3ub(255,255,255);
glVertex2f(-.72,0);
glVertex2f(-.72,.2);
glVertex2f(-.85,.2);
glVertex2f(-.85,0);
glEnd();

    glBegin(GL_QUADS); //school
glColor3ub(255,255,255);
glVertex2f(-.42,.25);
glVertex2f(-.42,.35);
glVertex2f(-.85,.35);
glVertex2f(-.85,.25);
glEnd();

   /* glBegin(GL_QUADS); //Nagordola
glColor3ub(255,255,255);
glVertex2f(0.7,0.0);
glVertex2f(0.65,0.0);
glVertex2f(0.65,0.375);
glVertex2f(0.7,0.375);
glEnd();

*/





glBegin(GL_POLYGON); //Hospital1
glColor3ub(43, 164, 166);
glVertex2f(0.62,0);
glVertex2f(0.62,0.3);
glVertex2f(0.58,0.35);
glVertex2f(0.39,0.35);
glVertex2f(0.39,0.25);
glVertex2f(0.1,0.25);
glVertex2f(0.1,0);

glEnd();


glBegin(GL_POLYGON); //HospitalWindow
glColor3ub(28, 29, 79);
glVertex2f(0.15,0.1);
glVertex2f(0.32,0.1);
glVertex2f(0.32,0.2);
glVertex2f(0.15,0.2);
glEnd();

glBegin(GL_POLYGON); //HospitalDoor
glColor3ub(28, 29, 79);
glVertex2f(0.4,0);
glVertex2f(0.47,0.0);
glVertex2f(0.47,0.25);
glVertex2f(0.4,0.25);
glEnd();



glBegin(GL_LINES); //Roads
    glColor3ub(255,255,255);
    glVertex2f(-.9,-0.5);
    glVertex2f(-.7,-.5);
    glVertex2f(-.4,-0.5);
    glVertex2f(-.6,-.5);

    glVertex2f(-.3,-0.5);
    glVertex2f(-.1,-.5);


    glVertex2f(.2,-0.5);
    glVertex2f(0.0,-.5);

    glVertex2f(.3,-0.5);
    glVertex2f(0.5,-.5);

    glVertex2f(.8,-0.5);
    glVertex2f(0.6,-.5);
    glEnd();


     glPushMatrix();
glTranslatef(position1, 0.0f,0.0f);

glBegin(GL_POLYGON); //Bus
glColor3ub(212, 55, 79);
glVertex2f(-0.1,-0.5);
glVertex2f(-0.1,-0.4);
glVertex2f(-0.12,-0.39);
glVertex2f(-0.12,-0.35);
glVertex2f(-0.5,-0.35);
glVertex2f(-0.5,-0.5);

glEnd();

glBegin(GL_POLYGON); //BusWindow1
glColor3ub(56, 50, 51);
glVertex2f(-0.3,-0.4);
glVertex2f(-0.45,-0.4);
glVertex2f(-0.45,-0.45);
glVertex2f(-0.3,-0.45);


glEnd();

glBegin(GL_POLYGON); //BusWindow2
glColor3ub(56, 50, 51);
glVertex2f(-0.22,-0.4);
glVertex2f(-0.25,-0.4);
glVertex2f(-0.25,-0.5);
glVertex2f(-0.22,-0.5);


glEnd();

glBegin(GL_POLYGON); //BusWindow3
glColor3ub(56, 50, 51);
glVertex2f(-0.15,-0.4);
glVertex2f(-0.2,-0.4);
glVertex2f(-0.2,-0.45);
glVertex2f(-0.15,-0.45);


glEnd();


//BusWheel

 i;
 x=-.15f;  y=-.5f;  radius =.025f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


     i;
 x=-.15f;  y=-.5f;  radius =.009f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


         i;
 x=-.4f;  y=-.5f;  radius =.025f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

             i;
 x=-.4f;  y=-.5f;  radius =.009f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
glPopMatrix();

  glPushMatrix();
glTranslatef(position2,0.0f,0.0f);

glBegin(GL_POLYGON); //Car
glColor3ub(232,226,37);
glVertex2f(0.3,-0.6);
glVertex2f(0.3,-0.66);
glVertex2f(0.55,-0.66);
glVertex2f(0.55,-0.6);
glVertex2f(0.5,-0.55);
glVertex2f(0.4,-0.55);

glEnd();


glBegin(GL_LINES); //BusWindow3
glColor3ub(0, 0, 0);
glVertex2f(0.3,-0.6);
glVertex2f(0.55,-0.6);

glEnd();


         i;
 x=.35f;  y=-.66f;  radius =.025f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

             i;
 x=.35f;  y=-.66f;  radius =.009f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


             i;
 x=.5f;  y=-.66f;  radius =.025f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

             i;
 x=.5f;  y=-.66f;  radius =.009f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

 glPopMatrix();

glBegin(GL_POLYGON); //ShahidMinar
glColor3ub(238, 240, 165);
glVertex2f(-0.1,0);
glVertex2f(-0.1,.3);
glVertex2f(-0.15,0.3);
glVertex2f(-0.15,0.0);

glEnd();


glBegin(GL_POLYGON); //ShahidMinar
glColor3ub(238, 240, 165);
glVertex2f(-0.17,0);
glVertex2f(-0.17,.2);
glVertex2f(-0.22,0.2);
glVertex2f(-0.22,0);

glEnd();

glBegin(GL_POLYGON); //ShahidMinar
glColor3ub(238, 240, 165);
glVertex2f(-0.08,0);
glVertex2f(-0.08,.2);
glVertex2f(-.03,0.2);
glVertex2f(-.03,0);

glEnd();

             i;
 x=-.125f;  y=.17f;  radius =.05f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 0, 0);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();




    glBegin(GL_QUADS); //streetlight
glColor3ub(0,0,0);
glVertex2f(-.65,-.25);
glVertex2f(-.65,-.22);
glVertex2f(-.55,-.22);
glVertex2f(-.55,-.25);

glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.6,-.22);
glVertex2f(-.6,-.05);

glVertex2f(.6,-.22);
glVertex2f(.6,-.05);
glEnd();



    glBegin(GL_QUADS); //streetlight
glColor3ub(0,0,0);
glVertex2f(.65,-.25);
glVertex2f(.65,-.22);
glVertex2f(.55,-.22);
glVertex2f(.55,-.25);

glEnd();

 glBegin(GL_QUADS); //streetlight1
glColor3ub(0,0,0);
glVertex2f(-.6,-.05);
glVertex2f(-.68,-.08);
glVertex2f(-.68,-.1);
glVertex2f(-.62,-.1);

glEnd();

 glBegin(GL_QUADS); //streetlight2
glColor3ub(0,0,0);
glVertex2f(.6,-.05);
glVertex2f(.52,-.08);
glVertex2f(.52,-.1);
glVertex2f(.58,-.1);

glEnd();


 glPushMatrix();
glTranslatef(position4,0.0f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.5,.6);
glVertex2f(-.55,.65);

glVertex2f(-.5,.6);
glVertex2f(-.45,.65);
glEnd();
 glPopMatrix();


         glBegin(GL_QUADS); //nagordola
glColor3ub(107, 62, 4);
glVertex2f(.85,0);
glVertex2f(.87,.0);
glVertex2f(.87,.4);
glVertex2f(.85,.4);

glEnd();

glPushMatrix();
glTranslatef(.86,.4,0);
glRotatef(j,0,0.0,0.1);





glBegin(GL_TRIANGLES); //nagordola
glColor3ub(201, 119, 12);
glVertex2f(0,0);
glVertex2f(-.2,.2);
glVertex2f(-.2,.1);
glEnd();

glBegin(GL_TRIANGLES); //nagordola
glColor3ub(201, 119, 12);
glVertex2f(0,0);
glVertex2f(.2,.1);
glVertex2f(.2,.2);
glEnd();

glBegin(GL_TRIANGLES); //nagordola
glColor3ub(201, 119, 12);
glVertex2f(0,0);
glVertex2f(.2,-.2);
glVertex2f(0.2,-.1);
glEnd();

glBegin(GL_TRIANGLES); //nagordola
glColor3ub(201, 119, 12);
glVertex2f(0,0);
glVertex2f(-.2,-.1);
glVertex2f(-0.2,-.2);
glEnd();


glBegin(GL_LINES); //nagordola
glColor3ub(0, 0, 0);
glVertex2f(-.2,.1);
glVertex2f(-0.2,0.05);

glVertex2f(.2,.1);
glVertex2f(0.2,0.05);

glVertex2f(.2,-.2);
glVertex2f(0.2,-.25);

glVertex2f(-.2,-.2);
glVertex2f(-.2,-.25);


glEnd();

    glBegin(GL_QUADS); //nagordola
glColor3ub(107, 62, 4);
glVertex2f(.25,0.05);
glVertex2f(.15,0.05);
glVertex2f(.15,-0.05);
glVertex2f(.25,-0.05);

glEnd();

    glBegin(GL_QUADS); //nagordola
glColor3ub(107, 62, 4);
glVertex2f(-.25,0.05);
glVertex2f(-.25,-0.05);
glVertex2f(-.15,-0.05);
glVertex2f(-.15,0.05);

glEnd();

    glBegin(GL_QUADS); //nagordola
glColor3ub(107, 62, 4);
glVertex2f(.25,-0.25);
glVertex2f(.15,-0.25);
glVertex2f(.15,-0.35);
glVertex2f(.25,-0.35);

glEnd();

    glBegin(GL_QUADS); //nagordola
glColor3ub(107, 62, 4);
glVertex2f(-.25,-0.25);
glVertex2f(-.25,-0.35);
glVertex2f(-.15,-0.35);
glVertex2f(-.15,-0.25);

glEnd();


glPopMatrix();

 j+=0.1f;



              i;
 x=.85f;  y=.85f;  radius =.07f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 3);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

//--------------------------------trees

                 i;
 x=-.9f;  y=-.9f;  radius =.15f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(3, 94, 26);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


                     i;
 x=.9f;  y=-.9f;  radius =.15f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(3, 94, 26);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();



                     i;
 x=-.8f;  y=-.92f;  radius =.1f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(4, 122, 34);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

                         i;
 x=.8f;  y=-.92f;  radius =.1f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(4, 122, 34);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


    i;

     x=-.6f;  y=-.92f;  radius =.15f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 176, 44);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


        i;

     x=.6f;  y=-.92f;  radius =.15f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 176, 44);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


        i;

     x=-.4f;  y=-.95f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(19, 128, 21);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


            i;

     x=.4f;  y=-.95f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(19, 128, 21);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


            i;

     x=-.3f;  y=-.95f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(21, 161, 23);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


                i;

     x=.3f;  y=-.95f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(21, 161, 23);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();



    i;

     x=-.42f;  y=-.97f;  radius =.05f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 176, 44);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


        i;

     x=.42f;  y=-.97f;  radius =.05f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 176, 44);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


                i;

     x=-.1f;  y=-.92f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(8, 71, 9);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

                    i;

     x=.1f;  y=-.92f;  radius =.12f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(8, 71, 9);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


                    i;

     x=-.25f;  y=-.95f;  radius =.08f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(56, 186, 58);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();



                        i;

     x=.25f;  y=-.95f;  radius =.08f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(56, 186, 58);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


                            i;

     x=.05f;  y=-.95f;  radius =.08f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(29, 163, 31);
        glVertex2f(x , y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


              glPushMatrix();
glTranslatef(0.0f, position2,0.0f);

 glBegin(GL_LINES);  //Line1
glColor3ub(255,255,255);

glVertex2f(-0.95,.95);
glVertex2f(-0.9,.9);

glVertex2f(-0.95,0.75);
glVertex2f(-0.9,0.7);

glVertex2f(-0.95,0.5);
glVertex2f(-0.9,0.45);

glVertex2f(-0.95,0.3);
glVertex2f(-0.9,0.25);

glVertex2f(-0.95,0.1);
glVertex2f(-0.9,0.05);

glVertex2f(-0.95,-0.1);
glVertex2f(-0.9,-0.15);

glVertex2f(-0.95,-0.3);
glVertex2f(-0.9,-0.35);

glVertex2f(-0.95,-0.5);
glVertex2f(-0.9,-0.55);

glVertex2f(-0.95,-0.7);
glVertex2f(-0.9,-0.75);

glVertex2f(-0.95,-0.9);
glVertex2f(-0.9,-.95);


glVertex2f(-0.85,.95);
glVertex2f(-0.8,.9);

glVertex2f(-0.85,0.75);
glVertex2f(-0.8,0.7);

glVertex2f(-0.85,0.5);
glVertex2f(-0.8,0.45);

glVertex2f(-0.85,0.3);
glVertex2f(-0.8,0.25);

glVertex2f(-0.85,0.1);
glVertex2f(-0.8,0.05);

glVertex2f(-0.85,-0.1);
glVertex2f(-0.8,-0.15);

glVertex2f(-0.85,-0.3);
glVertex2f(-0.8,-0.35);

glVertex2f(-0.85,-0.5);
glVertex2f(-0.8,-0.55);

glVertex2f(-0.85,-0.7);
glVertex2f(-0.8,-0.75);

glVertex2f(-0.85,-0.9);
glVertex2f(-0.8,-.95);

glVertex2f(-0.75,.95);
glVertex2f(-0.7,.9);

glVertex2f(-0.75,0.75);
glVertex2f(-0.7,0.7);

glVertex2f(-0.75,0.5);
glVertex2f(-0.7,0.45);

glVertex2f(-0.75,0.3);
glVertex2f(-0.7,0.25);

glVertex2f(-0.75,0.1);
glVertex2f(-0.7,0.05);

glVertex2f(-0.75,-0.1);
glVertex2f(-0.7,-0.15);

glVertex2f(-0.75,-0.3);
glVertex2f(-0.7,-0.35);

glVertex2f(-0.75,-0.5);
glVertex2f(-0.7,-0.55);

glVertex2f(-0.75,-0.7);
glVertex2f(-0.7,-0.75);

glVertex2f(-0.65,-0.9);
glVertex2f(-0.6,-.95);

glVertex2f(-0.65,0.75);
glVertex2f(-0.6,0.7);

glVertex2f(-0.65,0.5);
glVertex2f(-0.6,0.45);

glVertex2f(-0.65,0.3);
glVertex2f(-0.6,0.25);

glVertex2f(-0.65,0.1);
glVertex2f(-0.6,0.05);

glVertex2f(-0.65,-0.1);
glVertex2f(-0.6,-0.15);

glVertex2f(-0.65,-0.3);
glVertex2f(-0.6,-0.35);

glVertex2f(-0.65,-0.5);
glVertex2f(-0.6,-0.55);

glVertex2f(-0.65,-0.7);
glVertex2f(-0.6,-0.75);

glVertex2f(-0.55,-0.9);
glVertex2f(-0.5,-.95);

glVertex2f(-0.55,-0.9);
glVertex2f(-0.5,-.95);

glVertex2f(-0.55,.95);
glVertex2f(-0.5,.9);

glVertex2f(-0.55,0.3);
glVertex2f(-0.5,0.25);

glVertex2f(-0.55,0.1);
glVertex2f(-0.5,0.05);

glVertex2f(-0.55,-0.1);
glVertex2f(-0.5,-0.15);

glVertex2f(-0.55,-0.3);
glVertex2f(-0.5,-0.35);

glVertex2f(-0.55,-0.5);
glVertex2f(-0.5,-0.55);

glVertex2f(-0.55,-0.7);
glVertex2f(-0.5,-0.75);

glVertex2f(-0.45,-0.9);
glVertex2f(-0.4,-.95);

glVertex2f(-0.45,0.75);
glVertex2f(-0.4,0.7);

glVertex2f(-0.45,0.5);
glVertex2f(-0.4,0.45);

glVertex2f(-0.45,0.3);
glVertex2f(-0.4,0.25);

glVertex2f(-0.45,0.1);
glVertex2f(-0.4,0.05);

glVertex2f(-0.45,-0.1);
glVertex2f(-0.4,-0.15);

glVertex2f(-0.45,-0.3);
glVertex2f(-0.4,-0.35);

glVertex2f(-0.45,-0.5);
glVertex2f(-0.4,-0.55);

glVertex2f(-0.45,-0.7);
glVertex2f(-0.4,-0.75);

glVertex2f(-0.45,-0.9);
glVertex2f(-0.4,-.95);

glVertex2f(-0.35,0.75);
glVertex2f(-0.3,0.7);

glVertex2f(-0.35,0.5);
glVertex2f(-0.3,0.45);

glVertex2f(-0.35,-0.1);
glVertex2f(-0.3,-0.15);

glVertex2f(-0.35,-0.3);
glVertex2f(-0.3,-0.35);

glVertex2f(-0.35,-0.7);
glVertex2f(-0.3,-0.75);


glVertex2f(-0.25,.95);
glVertex2f(-0.2,.9);

glVertex2f(-0.25,0.75);
glVertex2f(-0.2,0.7);

glVertex2f(-0.25,0.5);
glVertex2f(-0.2,0.45);

glVertex2f(-0.25,0.3);
glVertex2f(-0.2,0.25);

glVertex2f(-0.25,0.1);
glVertex2f(-0.2,0.05);

glVertex2f(-0.25,-0.1);
glVertex2f(-0.2,-0.15);

glVertex2f(-0.25,-0.3);
glVertex2f(-0.2,-0.35);

glVertex2f(-0.25,-0.5);
glVertex2f(-0.2,-0.55);

glVertex2f(-0.25,-0.7);
glVertex2f(-0.2,-0.75);

glVertex2f(-0.15,-0.9);
glVertex2f(-0.1,-.95);

glVertex2f(-0.15,.95);
glVertex2f(-0.1,.9);

glVertex2f(-0.15,0.75);
glVertex2f(-0.1,0.7);

glVertex2f(-0.15,0.5);
glVertex2f(-0.1,0.45);

glVertex2f(-0.15,0.3);
glVertex2f(-0.1,0.25);

glVertex2f(-0.15,0.1);
glVertex2f(-0.1,0.05);

glVertex2f(-0.15,-0.1);
glVertex2f(-0.1,-0.15);

glVertex2f(-0.15,-0.3);
glVertex2f(-0.1,-0.35);

glVertex2f(-0.15,-0.5);
glVertex2f(-0.1,-0.55);

glVertex2f(-0.15,-0.7);
glVertex2f(-0.1,-0.75);

glVertex2f(-0.05,-0.9);
glVertex2f(0.0,-.95);

glVertex2f(-0.05,-0.9);
glVertex2f(0.0,-.95);

glVertex2f(-0.05,.95);
glVertex2f(0.0,.9);

glVertex2f(-0.05,0.75);
glVertex2f(0.0,0.7);

glVertex2f(-0.05,0.5);
glVertex2f(0.0,0.45);

glVertex2f(-0.05,0.3);
glVertex2f(0.0,0.25);

glVertex2f(-0.05,0.1);
glVertex2f(0.0,0.05);

glVertex2f(-0.05,-0.1);
glVertex2f(0.0,-0.15);

glVertex2f(-0.05,-0.3);
glVertex2f(0.0,-0.35);

glVertex2f(-0.05,-0.5);
glVertex2f(0.0,-0.55);

glVertex2f(-0.05,-0.7);
glVertex2f(0.0,-0.75);

glVertex2f(0.05,0.75);
glVertex2f(0.1,0.7);

glVertex2f(0.05,0.5);
glVertex2f(0.1,0.45);

glVertex2f(0.05,0.3);
glVertex2f(0.1,0.25);

glVertex2f(0.05,0.1);
glVertex2f(0.1,0.05);

glVertex2f(0.05,-0.1);
glVertex2f(0.1,-0.15);

glVertex2f(0.05,-0.3);
glVertex2f(0.1,-0.35);

glVertex2f(0.05,-0.5);
glVertex2f(0.1,-0.55);

glVertex2f(0.05,-0.7);
glVertex2f(0.1,-0.75);


glVertex2f(0.15,0.75);
glVertex2f(0.2,0.7);

glVertex2f(0.15,0.5);
glVertex2f(0.2,0.45);

glVertex2f(0.15,0.3);
glVertex2f(0.2,0.25);

glVertex2f(0.15,0.1);
glVertex2f(0.2,0.05);

glVertex2f(0.15,-0.1);
glVertex2f(0.2,-0.15);

glVertex2f(0.15,-0.3);
glVertex2f(0.2,-0.35);

glVertex2f(0.15,-0.5);
glVertex2f(0.2,-0.55);

glVertex2f(0.15,-0.7);
glVertex2f(0.2,-0.75);

glVertex2f(0.15,-0.9);
glVertex2f(0.2,-.95);

glVertex2f(0.25,.95);
glVertex2f(0.3,.9);

glVertex2f(0.25,0.75);
glVertex2f(0.3,0.7);

glVertex2f(0.25,0.5);
glVertex2f(0.3,0.45);

glVertex2f(0.25,0.3);
glVertex2f(0.3,0.25);

glVertex2f(0.25,0.1);
glVertex2f(0.3,0.05);

glVertex2f(0.25,-0.1);
glVertex2f(0.3,-0.15);

glVertex2f(0.25,-0.3);
glVertex2f(0.3,-0.35);

glVertex2f(0.25,-0.5);
glVertex2f(0.3,-0.55);

glVertex2f(0.25,-0.7);
glVertex2f(0.3,-0.75);

glVertex2f(0.25,-0.9);
glVertex2f(0.3,-.95);

glVertex2f(0.35,.95);
glVertex2f(0.4,.9);

glVertex2f(0.35,0.75);
glVertex2f(0.4,0.7);

glVertex2f(0.35,0.5);
glVertex2f(0.4,0.45);

glVertex2f(0.35,0.3);
glVertex2f(0.4,0.25);

glVertex2f(0.35,0.1);
glVertex2f(0.4,0.05);

glVertex2f(0.35,-0.1);
glVertex2f(0.4,-0.15);

glVertex2f(0.35,-0.3);
glVertex2f(0.4,-0.35);

glVertex2f(0.35,-0.5);
glVertex2f(0.4,-0.55);

glVertex2f(0.35,-0.7);
glVertex2f(0.4,-0.75);

glVertex2f(0.35,-0.9);
glVertex2f(0.4,-.95);

glVertex2f(0.45,.95);
glVertex2f(0.5,.9);

glVertex2f(0.45,0.75);
glVertex2f(0.5,0.7);

glVertex2f(0.45,0.5);
glVertex2f(0.5,0.45);

glVertex2f(0.45,0.3);
glVertex2f(0.5,0.25);

glVertex2f(0.45,0.1);
glVertex2f(0.5,0.05);

glVertex2f(0.45,-0.1);
glVertex2f(0.5,-0.15);

glVertex2f(0.45,-0.3);
glVertex2f(0.5,-0.35);

glVertex2f(0.45,-0.5);
glVertex2f(0.5,-0.55);

glVertex2f(0.45,-0.7);
glVertex2f(0.5,-0.75);

glVertex2f(0.45,-0.9);
glVertex2f(0.5,-.95);

glVertex2f(0.55,.95);
glVertex2f(0.6,.9);

glVertex2f(0.55,0.75);
glVertex2f(0.6,0.7);

glVertex2f(0.55,0.5);
glVertex2f(0.6,0.45);

glVertex2f(0.55,0.3);
glVertex2f(0.6,0.25);

glVertex2f(0.55,0.1);
glVertex2f(0.6,0.05);

glVertex2f(0.55,-0.1);
glVertex2f(0.6,-0.15);

glVertex2f(0.55,-0.3);
glVertex2f(0.6,-0.35);

glVertex2f(0.55,-0.5);
glVertex2f(0.6,-0.55);

glVertex2f(0.55,-0.7);
glVertex2f(0.6,-0.75);

glVertex2f(0.55,-0.9);
glVertex2f(0.6,-.95);


glVertex2f(0.65,.95);
glVertex2f(0.7,.9);

glVertex2f(0.65,0.75);
glVertex2f(0.7,0.7);

glVertex2f(0.65,0.5);
glVertex2f(0.7,0.45);

glVertex2f(0.65,0.3);
glVertex2f(0.7,0.25);

glVertex2f(0.65,0.1);
glVertex2f(0.7,0.05);

glVertex2f(0.65,-0.1);
glVertex2f(0.7,-0.15);

glVertex2f(0.65,-0.3);
glVertex2f(0.7,-0.35);

glVertex2f(0.65,-0.5);
glVertex2f(0.7,-0.55);

glVertex2f(0.65,-0.7);
glVertex2f(0.7,-0.75);

glVertex2f(0.65,-0.9);
glVertex2f(0.7,-.95);

glVertex2f(0.75,.95);
glVertex2f(0.8,.9);

glVertex2f(0.75,0.75);
glVertex2f(0.8,0.7);

glVertex2f(0.75,0.5);
glVertex2f(0.8,0.45);

glVertex2f(0.75,0.3);
glVertex2f(0.8,0.25);

glVertex2f(0.75,0.1);
glVertex2f(0.8,0.05);

glVertex2f(0.75,-0.1);
glVertex2f(0.8,-0.15);

glVertex2f(0.75,-0.3);
glVertex2f(0.8,-0.35);

glVertex2f(0.75,-0.5);
glVertex2f(0.8,-0.55);

glVertex2f(0.75,-0.7);
glVertex2f(0.8,-0.75);

glVertex2f(0.75,-0.9);
glVertex2f(0.8,-.95);

glVertex2f(0.85,.95);
glVertex2f(0.9,.9);

glVertex2f(0.85,0.75);
glVertex2f(0.9,0.7);

glVertex2f(0.85,0.5);
glVertex2f(0.9,0.45);

glVertex2f(0.85,0.3);
glVertex2f(0.9,0.25);

glVertex2f(0.85,0.1);
glVertex2f(0.9,0.05);

glVertex2f(0.85,-0.1);
glVertex2f(0.9,-0.15);

glVertex2f(0.85,-0.3);
glVertex2f(0.9,-0.35);

glVertex2f(0.85,-0.5);
glVertex2f(0.9,-0.55);

glVertex2f(0.85,-0.7);
glVertex2f(0.9,-0.75);

glVertex2f(0.85,-0.9);
glVertex2f(0.9,-.95);

glEnd();

    glPopMatrix();


glFlush();

}

void sound()
{

    PlaySound("DAY.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}

void sound2()
{

    PlaySound("crick.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}

void sound3()
{
    PlaySound("bird.wav",NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}

void sound4()
{

    PlaySound("rain and bird", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}


void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
glutDisplayFunc(display2);

sound2();

			}
			if (button == GLUT_RIGHT_BUTTON)
	{
	    glutDisplayFunc(display);
	    sound();
	   			}
}

void SpecialInput(int key, int x, int y)
{
switch(key)
{case GLUT_KEY_UP: //day view
//speed = .7;
glutDisplayFunc(display);
sound();
break;
case GLUT_KEY_DOWN: // night view
//speed = .3;
glutDisplayFunc(display2);
sound2();
break;
case GLUT_KEY_LEFT: //evening view
glutDisplayFunc(display1);
sound3();

break;
case GLUT_KEY_RIGHT:
//speed2=0.05;
glutDisplayFunc(display3);
sound4();
break;}

}




int main(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutCreateWindow("City View"); // Create a window with the given title
    glutInitWindowSize(320, 320);   // Set the window's initial width & height
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutIdleFunc(Idle);
    //init();
   // glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutSpecialFunc(SpecialInput);


     //glutTimerFunc(100, update1, 0);
     //glutTimerFunc(100, update2, 0);
     //sound();

   glutTimerFunc(100, update1, 0);
 glutTimerFunc(100, update2,0);
  glutTimerFunc(100, update4,0);
 sound();

    glutMainLoop();           // Enter the event-processing loop
    return 0;
}


