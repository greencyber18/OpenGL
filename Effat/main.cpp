#include <windows.h>  // for MS Windows
#include<GL/glut.h> // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
#include<cstdio>
#include <GL/gl.h>




GLfloat j = 0.0f;

GLfloat position = 0.0f;
GLfloat speed = 0.1f;
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.1f;
void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}


void update1(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed;

glutPostRedisplay();


glutTimerFunc(100, update1, 0);
}
void update2(int value) {

   if(position2>1.0)
        position2 = -1.0f;

    position2 += speed2;

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}

void display() {
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);





    glBegin(GL_QUADS);
glColor3ub(60, 148, 59);
glVertex2f(1,-0.25);
glVertex2f(-1,-0.25);
glVertex2f(-1,-1);
glVertex2f(1,-1);
glEnd();
/*
    glBegin(GL_QUADS);
glColor3ub(60, 148, 59);
glVertex2f(1,0.4);
glVertex2f(-1,.4);
glVertex2f(-1,1);
glVertex2f(1,1);
glEnd();

*/
    glBegin(GL_QUADS);
glColor3ub(56, 54, 54);
glVertex2f(1,0.4);
glVertex2f(-1,.4);
glVertex2f(-1,-.25);
glVertex2f(1,-.25);
glEnd();
/*
    glBegin(GL_QUADS);
glColor3ub(56, 54, 54);
glVertex2f(.3,1);
glVertex2f(-.3,1);
glVertex2f(-.3,.4);
glVertex2f(.3,.4);
glEnd();
*/
    glBegin(GL_QUADS);
glColor3ub(56, 54, 54);
glVertex2f(.3,-.25);
glVertex2f(-.3,-.25);
glVertex2f(-.3,-1);
glVertex2f(.3,-1);
glEnd();

 /*   glBegin(GL_QUADS);//road
glColor3ub(255, 255, 255);
glVertex2f(.025,.9);
glVertex2f(-.025,.9);
glVertex2f(-.025,.75);
glVertex2f(.025,.75);
glEnd();



    glBegin(GL_QUADS);
glColor3ub(255, 255, 255); //road
glVertex2f(.025,.6);
glVertex2f(-.025,.6);
glVertex2f(-.025,.45);
glVertex2f(.025,.45);
glEnd();
*/
   glBegin(GL_QUADS);
glColor3ub(255, 255, 255); //road
glVertex2f(.025,.3);
glVertex2f(-.025,.3);
glVertex2f(-.025,.15);
glVertex2f(.025,.15);
glEnd();

   glBegin(GL_QUADS);
glColor3ub(255, 255, 255); //road
glVertex2f(.025,0);
glVertex2f(-.025,0);
glVertex2f(-.025,-.15);
glVertex2f(.025,-.15);
glEnd();

   glBegin(GL_QUADS);
glColor3ub(255, 255, 255); //road
glVertex2f(.025,-.3);
glVertex2f(-.025,-.3);
glVertex2f(-.025,-.45);
glVertex2f(.025,-.45);
glEnd();

   glBegin(GL_QUADS);
glColor3ub(255, 255, 255); //road
glVertex2f(.025,-.6);
glVertex2f(-.025,-.6);
glVertex2f(-.025,-.75);
glVertex2f(.025,-.75);
glEnd();

   glBegin(GL_QUADS);
glColor3ub(255, 255, 255); //road
glVertex2f(.025,-.9);
glVertex2f(-.025,-.9);
glVertex2f(-.025,-1);
glVertex2f(.025,-1);
glEnd();



glPushMatrix();
glTranslatef(position,0.0f, 0.0f);

     glBegin(GL_QUADS);//plane
glColor3ub(227, 11, 11);
glVertex2f(.05,.05);
glVertex2f(-.9,.05);
glVertex2f(-.85,0);
glVertex2f(0,0);
glEnd();

     glBegin(GL_QUADS);//plane
glColor3ub(255, 255, 255);
glVertex2f(-.75,.05);
glVertex2f(-.75,.2);
glVertex2f(-.9,.1);
glVertex2f(-.9,.05);
glEnd();

     glBegin(GL_QUADS);//plane
glColor3ub(255, 255, 255);
glVertex2f(-.75,.2);
glVertex2f(-.75,.05);
glVertex2f(.05,.05);
glVertex2f(0,.2);
glEnd();

     glBegin(GL_QUADS);//plane
glColor3ub(255, 255, 255);
glVertex2f(0,.2);
glVertex2f(0,0);
glVertex2f(.2,.15);
glVertex2f(.2,.2);
glEnd();

     glBegin(GL_QUADS);//plane
glColor3ub(227, 11, 11);
glVertex2f(0,.15);
glVertex2f(.1,0);
glVertex2f(.15,0);
glVertex2f(.1,.15);
glEnd();

     glBegin(GL_QUADS);//plane
glColor3ub(227, 11, 11);
glVertex2f(0,.2);
glVertex2f(.15,.2);
glVertex2f(.2,.35);
glVertex2f(.15,.35);
glEnd();

     glBegin(GL_QUADS);//plane
glColor3ub(227, 11, 11);
glVertex2f(-.5,.2);
glVertex2f(-.3,.2);
glVertex2f(-.25,.35);
glVertex2f(-.2,.35);
glEnd();

    glBegin(GL_QUADS);//plane
glColor3ub(227, 11, 11);
glVertex2f(-.1,.1);
glVertex2f(-.1,.15);
glVertex2f(-.2,.15);
glVertex2f(-.2,.1);
glEnd();

    glBegin(GL_QUADS);//plane
glColor3ub(227, 11, 11);
glVertex2f(-.25,.1);
glVertex2f(-.25,.15);
glVertex2f(-.35,.15);
glVertex2f(-.35,.1);
glEnd();

    glBegin(GL_QUADS);//plane
glColor3ub(227, 11, 11);
glVertex2f(-.4,.1);
glVertex2f(-.4,.15);
glVertex2f(-.5,.15);
glVertex2f(-.5,.1);
glEnd();

    glBegin(GL_QUADS);//plane
glColor3ub(0, 0,0);
glVertex2f(-.6,.1);
glVertex2f(-.6,.15);
glVertex2f(-.7,.15);
glVertex2f(-.75,.1);
glEnd();





int    i;

GLfloat x=-.25f;  GLfloat y=-.05f; GLfloat  radius =.05f;
  int   triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     GLfloat twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(194, 192, 192);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

       i;

 x=-.4f;  y=-.05f;  radius =.05f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(194, 192, 192);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

           i;

 x=-.4f;  y=-.05f;  radius =.025f;
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

 x=-.25f;  y=-.05f;  radius =.025f;
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

glBegin(GL_TRIANGLES);
glColor3ub(245, 95, 95);
glVertex2f(-.15,-.1);
glVertex2f(-.3,.05);
glVertex2f(-.5,.05);
glEnd();


           i;


 x=-.75f;  y=-.05f;  radius =.05f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(194, 192, 192);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

        i;

 x=-.75f;  y=-.05f;  radius =.025f;
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

    glPopMatrix();

        glBegin(GL_QUADS);//tower
glColor3ub(156, 152, 158);
glVertex2f(.6,-1);
glVertex2f(.6,.25);
glVertex2f(.5,.25);
glVertex2f(.5,-1);
glEnd();

    glBegin(GL_QUADS);//tower
glColor3ub(179, 0, 255);
glVertex2f(.3,.35);
glVertex2f(.35,.25);
glVertex2f(.75,.25);
glVertex2f(.8,.35);
glEnd();

    glBegin(GL_QUADS);//tower
glColor3ub(179, 0, 255);
glVertex2f(.3,.35);
glVertex2f(.8,.35);
glVertex2f(.75,.4);
glVertex2f(.35,.4);
glEnd();

    glBegin(GL_QUADS);//tower
glColor3ub(21, 12, 891);
glVertex2f(.45,.4);
glVertex2f(.65,.4);
glVertex2f(.65,.5);
glVertex2f(.45,.5);
glEnd();

 i;
 x=0.55f;  y=0.55f;  radius =.05f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(179, 0, 255);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

     i;
 x=0.8f;  y=0.8f;  radius =.15f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 247, 0);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

  glPushMatrix();
glTranslatef(position,0.0f, 0.0f);  //cloud
         i;
 x=-0.9f;  y=0.8f;  radius =.15f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

             i;  //cloud
 x=-0.75f;  y=0.75f;  radius =.15f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

                 i;
 x=-0.55f;  y=0.85f;  radius =.15f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

                     i;
 x=-0.55f;  y=0.65f;  radius =.15f;
     triangleAmount = 20; //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
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
glTranslatef(position2,0.0f, 0.0f);

    glBegin(GL_LINES); //bird
    glColor3ub(0, 0, 0);
    glVertex2f(-.3,.8);
    glVertex2f(-.25,.7);
    glEnd();

    glBegin(GL_LINES); //bird
    glColor3ub(0, 0, 0);
    glVertex2f(-.2,.8);
    glVertex2f(-.25,.7);
    glEnd();


glPopMatrix();



    glBegin(GL_QUADS);//windmill
glColor3ub(18, 15, 89);
glVertex2f(-.7,-.25);
glVertex2f(-.75,-.25);
glVertex2f(-.75,-1);
glVertex2f(-.7,-1);
glEnd();


glPushMatrix();
glTranslatef(-.75,-.25,0);
glRotatef(j,0,0.0,0.1);





glBegin(GL_TRIANGLES);
glColor3ub(182, 240, 240);
glVertex2f(0,0);
glVertex2f(.5,-.05);
glVertex2f(.5,0);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(182, 240, 240);
glVertex2f(0,0);
glVertex2f(-.45,-.3);
glVertex2f(-.4,-.35);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(182, 240, 240);
glVertex2f(0,0);
glVertex2f(-.15,.5);
glVertex2f(-.2,.45);
glEnd();


glPopMatrix();


    j+=0.1f;


glFlush();
}



int main(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutCreateWindow("airport view"); // Create a window with the given title
    glutInitWindowSize(320, 320);   // Set the window's initial width & height
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutIdleFunc(Idle);

     glutTimerFunc(100, update1, 0);
     glutTimerFunc(100, update2, 0);






    glutMainLoop();           // Enter the event-processing loop
    return 0;
}

