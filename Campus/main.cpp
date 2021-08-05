#include<cstdio>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846


GLfloat speedSky1 = 0.01f;
GLfloat speedBird = 0.01f;
GLfloat speedFish1 = 0.01f;
GLfloat speedBird1 = 0.02f;


GLfloat positionSky1= 0.0f;
GLfloat positionBird=0.0f;
GLfloat positionFish1=0.0f;
GLfloat positionBir1=0.0f;


void updateBird1(int value) {

    if(positionBir1 >1.0)
        positionBir1 =-1.0f;

   positionBir1 += speedBird1;

	glutPostRedisplay();


	glutTimerFunc(100, updateBird1, 0);
}

void updatefish1(int value)
{
    if(positionFish1 >0.50)
        positionFish1 =-0.50f;

    positionFish1 += speedFish1;

glutPostRedisplay();


glutTimerFunc(100, updatefish1, 0);
}


void updateSky1(int value)
{
    if(positionSky1 >1.50)
        positionSky1 =-2.0f;

    positionSky1 += speedSky1;

glutPostRedisplay();


glutTimerFunc(100, updateSky1, 0);
}
GLfloat position3 = 0.0f;
GLfloat speed3 = 0.1f;
void update3(int value) {
    if(position3 <-1.0)
        position3=1.0f;
    position3 -= speed3;
	glutPostRedisplay();

	glutTimerFunc(100, update3, 0);
}
void updateBird(int value) {

    if(positionBird <-1.50)
        positionBird = 1.0f;

    positionBird -= speedBird;

glutPostRedisplay();


glutTimerFunc(100, updateBird, 0);
}

void display() {
glClearColor(0, 51, 102,1.0f); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(1.5); // Clear the color buffer (background)

    glBegin(GL_QUADS);
    glColor3ub(255, 204, 102);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glEnd();

    GLfloat x2=.2f; GLfloat y2=.23f; GLfloat radius2 =.36f;     //Circle of black border//
int lineAmount2 = 100;
GLfloat twicePi2 = 2.0f * PI;

///green ground start
glBegin(GL_QUADS);

        glColor3ub(0, 255,0);
        glVertex2f(1,0);
        glVertex2f(-1,0);
        glVertex2f(-1,-1);
        glVertex2f(1,-1);

        glEnd();
    /// green ground close



glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 0, 0);
for(int i = 0; i <= lineAmount2;i++) {
glVertex2f(
   x2 + (radius2 * cos(i *  twicePi2 / lineAmount2)),
   y2 + (radius2* sin(i * twicePi2 / lineAmount2))
);
}
glEnd();

    GLfloat x1=.2f; GLfloat y1=.23f; GLfloat radius1 =.35f;       // Blue circle//
int lineAmount1 = 100;
GLfloat twicePi1 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(153, 204, 255);
for(int i = 0; i <= lineAmount1;i++) {
glVertex2f(
   x1+ (radius1 * cos(i *  twicePi1 / lineAmount1)),
   y1 + (radius1* sin(i * twicePi1 / lineAmount1))
);
}
glEnd();

    glBegin(GL_QUADS);              //Bottom side Blue rectangle //
    glColor3ub(153, 204, 255);
    glVertex2f(-.13,0.0);
    glVertex2f(-.13,-.15);
    glVertex2f(.55,0.0);
    glVertex2f(.55,-.15);
    glEnd();

    glBegin(GL_LINES);              //Bottom side rectangle's black border//
    glColor3ub(0,0,0);
    glVertex2f(-.13,-0.01);
    glVertex2f(-.13,-.15);
    glVertex2f(-.13,-.15);
    glVertex2f(.55,-.15);
    glVertex2f(.55,-0.01);
    glVertex2f(.55,-.15);
    glVertex2f(.55,-0.01);
    glVertex2f(-.13,-.01);
    glEnd();

    glBegin(GL_LINES);              //Middle side of globe's black border//
    glColor3ub(0,0,0);
    glVertex2f(-.06,-0.01);
    glVertex2f(-.06,.47);
    glVertex2f(.12,-.01);
    glVertex2f(.12,.58);
    glVertex2f(.31,-0.01);
    glVertex2f(.31,.57);
    glVertex2f(.46,-0.01);
    glVertex2f(.46,.47);
    glEnd();

    glBegin(GL_QUADS);               //1st dark blue rectangle in the middle of globe//
    glColor3ub(0, 0, 102);
    glVertex2f(-.06,0.47);
    glVertex2f(.46,.47);
    glVertex2f(.51,.4);
    glVertex2f(-.11,.4);
    glEnd();

    glBegin(GL_QUADS);               //2nd dark blue rectangle in the middle of globe//
    glColor3ub(0, 0, 102);
    glVertex2f(-.14,0.33);
    glVertex2f(.54,.33);
    glVertex2f(.56,.26);
    glVertex2f(-.16,.26);
    glEnd();

    glBegin(GL_QUADS);               //3rd dark blue rectangle in the middle of globe//
    glColor3ub(0, 0, 102);
    glVertex2f(-.15,0.19);
    glVertex2f(.55,.19);
    glVertex2f(.54,.12);
    glVertex2f(-.14,.12);
    glEnd();

    glBegin(GL_QUADS);               //1st umbrella on 1st quadrant//
    glColor3ub(255, 255, 204);
    glVertex2f(.52,0.19);
    glVertex2f(1.0,.19);
    glVertex2f(.88,.04);
    glVertex2f(.4,.04);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(204, 153, 0);
    glVertex2f(.52,0.17);
    glVertex2f(1.0,.17);
    glVertex2f(.88,0.0);
    glVertex2f(.4,.00);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 204);
    glVertex2f(.43,0.08);
    glVertex2f(.92,.08);
    glVertex2f(.93,.1);
    glVertex2f(.45,.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 204);
    glVertex2f(.56,.06);
    glVertex2f(.58,0.06);
    glVertex2f(.52,0.01);
    glVertex2f(.5,0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 204);
    glVertex2f(.52,.01);
    glVertex2f(.8,0.01);
    glVertex2f(.8,0.0);
    glVertex2f(.5,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 204);
    glVertex2f(.8,.01);
    glVertex2f(.78,0.01);
    glVertex2f(.81,0.06);
    glVertex2f(.83,0.06);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 204);
    glVertex2f(.83,.06);
    glVertex2f(.83,0.08);
    glVertex2f(.56,0.08);
    glVertex2f(.56,0.06);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 102, 51);
    glVertex2f(.53,0.1);
    glVertex2f(.55,0.1);
    glVertex2f(.63,0.17);
    glVertex2f(.6,0.17);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 102, 51);
    glVertex2f(.73,0.1);
    glVertex2f(.75,0.1);
    glVertex2f(.8,0.17);
    glVertex2f(.78,0.17);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 102, 51);
    glVertex2f(.85,0.1);
    glVertex2f(.87,0.1);
    glVertex2f(.93,0.17);
    glVertex2f(.91,0.17);
    glEnd();

    glBegin(GL_QUADS);            //annex 6's upper side//
    glColor3ub(255, 255,255);
    glVertex2f(.56,0.19);
    glVertex2f(.63,0.19);
    glVertex2f(1.0,0.33);
    glVertex2f(1.0,0.4);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.56,.19);
    glVertex2f(1.0,.4);
    glVertex2f(.63,.19);
    glVertex2f(1.0,.33);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(153, 102, 51);
    glVertex2f(.63,.19);
    glVertex2f(1.0,.19);
    glVertex2f(1.0,.33);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255,255,255);
    glVertex2f(.75,.19);
    glVertex2f(.97,.19);
    glVertex2f(.97,.28);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.75,.19);
    glVertex2f(.97,.28);
    glVertex2f(.97,.28);
    glVertex2f(.97,.19);
    glEnd();

    ///////**********//////// Rafa's 1st Quadrant is FINISH here///////*******//////////
////////////////////////////////Noman's code start here//////////////////////////////////

    ///sky code open

    int i;

GLfloat x=.3f; GLfloat y=.18f; GLfloat radius =.02f;
int triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
GLfloat twicePi = 2.0f * PI;

    glPushMatrix();
glTranslatef(positionSky1,-0.1*positionSky1,0.0f);

x=-.8f; y=.85f;  radius =.09f;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(214, 234, 248);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();



x=-.6f; y=.85f;  radius =.09f;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(214, 234, 248 );
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();


x=-.7f; y=.9f;  radius =.09f;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(214, 234, 248);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();
////




glPopMatrix();



    ///sky code close

    ///bird code open
    glPushMatrix();
glTranslatef(positionBird,-.15*positionBird,0.0f);

        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(.7,.65);
        glVertex2f(.75,.69);

        glVertex2f(.75,.69);
        glVertex2f(.7,.7);

        glEnd();
        //glTranslatef(positionBird,0.0f,0.0f);
        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(.8,.68);
        glVertex2f(.85,.72);

        glVertex2f(.85,.72);
        glVertex2f(.8,.73);

        glEnd();

        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(.7,.75);
        glVertex2f(.75,.79);

        glVertex2f(.75,.79);
        glVertex2f(.7,.8);

        glEnd();

    glPopMatrix();

    glEnd();
        //glTranslatef(positionBird,0.0f,0.0f);


    //glPopMatrix();
    ///bird code close



glBegin(GL_QUADS);///top front d building
glColor3ub(171, 178, 185);
        glVertex2f(-.572,0.1);
        glVertex2f(-.572,.236);
    glColor3ub(213, 219, 219 );
        glVertex2f(-.96,.472);
        glVertex2f(-.96,0.2);
    glEnd();

    glBegin(GL_QUADS);///top front windows d building
glColor3ub(171, 178, 185);
        glVertex2f(-.94,0.432);
        glVertex2f(-.94,.392);
    glColor3ub(23, 32, 42 );
    glVertex2f(-.59,0.194);
        glVertex2f(-.59,.22);

    glEnd();

    glBegin(GL_QUADS);///top front windows d building
glColor3ub(171, 178, 185);
        glVertex2f(-.94,0.36);
        glVertex2f(-.94,.32);
    glColor3ub(23, 32, 42 );
    glVertex2f(-.59,0.152);
        glVertex2f(-.59,.176);

    glEnd();

    glBegin(GL_QUADS);///top front windows d building
glColor3ub(171, 178, 185);
        glVertex2f(-.94,0.28);
        glVertex2f(-.94,.24);
    glColor3ub(23, 32, 42 );
    glVertex2f(-.59,0.112);
        glVertex2f(-.59,.136);

    glEnd();



    glBegin(GL_QUADS);///top left side d building
glColor3ub(213, 219, 219);


    //
        glVertex2f(-1,.472);
        glVertex2f(-1,.2);
        glColor3ub(171, 178, 185);
        glVertex2f(-.96,0.2);
        glVertex2f(-.96,.472);
    glEnd();



    glBegin(GL_QUADS);/// middle front d building
glColor3ub(128, 139, 150);
        glVertex2f(-0.5,-0.06);
        glVertex2f(-0.5,0.072);
        glColor3ub(215, 219, 221);
        glVertex2f(-.84,0.22);
        glVertex2f(-0.84,0.0);

glEnd();


glBegin(GL_QUADS);/// middle front window d building
glColor3ub(171, 178, 185);;
        glVertex2f(-0.82,0.18);
        glVertex2f(-0.82,0.144);
        glColor3ub(23, 32, 42 );
        glVertex2f(-.504,0.016);
        glVertex2f(-0.504,0.04);

glEnd();

glBegin(GL_QUADS);/// middle front window d building
glColor3ub(171, 178, 185);;
        glVertex2f(-0.82,0.112);
        glVertex2f(-0.82,0.074);
        glColor3ub(23, 32, 42 );
        glVertex2f(-.504,-0.02);
        glVertex2f(-0.504,0.0);

glEnd();

glBegin(GL_QUADS);/// middle front window d building
glColor3ub(171, 178, 185);;
        glVertex2f(-0.82,0.112);
        glVertex2f(-0.82,0.074);
        glColor3ub(23, 32, 42 );
        glVertex2f(-.504,-0.02);
        glVertex2f(-0.504,0.0);

glEnd();

glBegin(GL_QUADS);/// middle front window d building
glColor3ub(171, 178, 185);;
        glVertex2f(-0.82,0.045);
        glVertex2f(-0.82,0.004);
        glColor3ub(23, 32, 42 );
        glVertex2f(-0.504,-0.056);
        glVertex2f(-.504,-0.038);


glEnd();

glBegin(GL_QUADS);///middle left d building

glColor3ub(128, 139, 150);
        glVertex2f(-.84,0);
        glVertex2f(-.84,0.22);
     glColor3ub(215, 219, 221);
        glVertex2f(-1,0.24);
        glVertex2f(-1,0);

    glEnd();
    glBegin(GL_QUADS);///bellow front d building
glColor3ub(191, 201, 202);
        glVertex2f(-0.78,0);
   glVertex2f(-0.78,-0.24);
   glColor3ub(86, 101, 115);
   glVertex2f(-0.46,-0.25);
   glVertex2f(-0.46,-0.06);

glEnd();
glBegin(GL_QUADS);/// bellow front window d building
glColor3ub(171, 178, 185);;

        glVertex2f(-0.76,-0.09);
        glVertex2f(-0.76,-0.04);
        glColor3ub(23, 32, 42 );
        glVertex2f(-0.48,-0.09);
        glVertex2f(-.48,-0.134);


glEnd();

glBegin(GL_QUADS);/// bellow front window d building
glColor3ub(171, 178, 185);;

        glVertex2f(-0.76,-0.19);
        glVertex2f(-0.76,-0.12);


        glColor3ub(23, 32, 42 );
        glVertex2f(-0.48,-0.164);
        glVertex2f(-.48,-0.214);


glEnd();

glBegin(GL_QUADS);/// bellow left d building
glColor3ub(86, 101, 115);
        glVertex2f(-1,-0.224);
        glVertex2f(-0.78,-0.24);
        glColor3ub(191, 201, 202);
        glVertex2f(-.78,-0);
        glVertex2f(-1,0.03);
    glEnd();

    /// d building close

    ///street beside lake start left

    glBegin(GL_QUADS);

    glColor3ub(169, 50, 38);

    glVertex2f(-1.48,-1);
    glVertex2f(-0.12,-0.14);
    glVertex2f(0.11,-0.14);
    glVertex2f(-0.6,-1);
    glEnd();

    ///street beside lake left close

    ///street beside lake rigth start
    glBegin(GL_QUADS);

    glVertex2f(1.28,-1);
    glVertex2f(.1,-0.14);
    glVertex2f(0.52,-0.14);
    glVertex2f(1.9,-1);
    glEnd();


    ///street beside lake right close



    ///lake water start
     glBegin(GL_QUADS);

    glColor3ub(21, 67, 96);
    glVertex2f(1,-1);
    glVertex2f(-0.14,-1);
    glColor3ub(171, 235, 198);
    glVertex2f(0.155,-0.14);
    glVertex2f(0.23,-0.14);

    glEnd();
    ///lek water close

    ///fish1 start
        glPushMatrix();

glTranslatef(0.153*positionFish1,positionFish1,0.0f);

//int i;

x=0.0f;  y=-1.0f;  radius =.02f;
triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(245, 176, 65);
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

glTranslatef(0.2*positionFish1,positionFish1,0.0f);

//int i;

x=0.25f;  y=-0.970f;  radius =.02f;
triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(245, 176, 65);
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

glTranslatef(0.092*positionFish1,positionFish1,0.0f);

//int i;

x=0.13f;  y=-1.0f;  radius =.02f;
triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(245, 176, 65);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

glPopMatrix();

///fish one close


    ///lake view

    glBegin(GL_QUADS);
    glColor3ub(52, 152, 219);
    glVertex2f(-0.52,-1);
    glVertex2f(-0.32,-1);
    glVertex2f(0.14,-0.14);
    glVertex2f(0.12,-0.14);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(36, 113, 163);
    glVertex2f(-0.14,-1);
    glVertex2f(-0.32,-1);
    glVertex2f(0.14,-0.14);
    glVertex2f(0.155,-0.14);
    glEnd();


    ///lake fountain

    glBegin(GL_POLYGON);
    glColor3ub(241, 148, 138);
    glVertex2f(0.168,-0.4);
    glVertex2f(0.168,-0.24);
    glVertex2f(0.26,-0.16);



    //glColor3ub(123, 36, 28);
    glVertex2f(0.42,-.16);
    glVertex2f(0.5,-0.24);
    glVertex2f(0.5,-0.4);
    glEnd();

    glBegin(GL_TRIANGLES);
     glColor3ub(231, 76, 60);
    glVertex2f(0.23,-0.16);
    glVertex2f(0.328,-0.078);
    glVertex2f(0.45,-0.16);
    glEnd();

    ///lake fountain end

    ///lake bridge

    glBegin(GL_QUADS);
     glColor3ub(52, 152, 219);
    glVertex2f(-0.23,-0.356);
    glVertex2f(0.5,-0.356);
    glVertex2f(0.6,-0.42);
    glVertex2f(-0.3,-0.42);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(52, 152, 219);
    glVertex2f(-0.3,-0.42);
    glVertex2f(-0.3,-0.47);
    glColor3ub(214, 234, 248);
    glVertex2f(0.6,-0.47);
    glVertex2f(0.6,-0.42);
    glEnd();

    ///lec bredge end

    ///lek viewstart

    glBegin(GL_QUADS);
    glColor3ub(36, 113, 163);
    glVertex2f(0.8,-1);
    glVertex2f(1,-1);
    glVertex2f(0.4,-0.42);
    glVertex2f(0.4,-0.5);

    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(52, 152, 219);
    glVertex2f(0.36,-0.356);
    glVertex2f(0.4,-0.42);
    glVertex2f(1,-1);
    glVertex2f(1,-0.85);
    glEnd();

    /// lek view end

    ///founten on water start

    x=0.255f;  y=-0.850f;  radius =.08f;
triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(29, 131, 72);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=0.255f;  y=-0.80f;  radius =.03f;
triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(236, 112, 99);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();
////////////

x=0.255f;  y=-0.550f;  radius =.04f;
triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(29, 131, 72);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=0.255f;  y=-0.520f;  radius =.02f;
triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(236, 112, 99);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

    ///founten on water close


////////////////// noman finished here

///onti started

    glBegin(GL_QUADS);
    glColor3ub(51, 51, 0);
    glVertex2f(0.59,-0.09);
    glVertex2f(1,-0.09);      //table on right side
    glVertex2f(1, -0.19);
    glVertex2f(0.8,-0.19);
    glEnd();



   glBegin(GL_QUADS);
   glColor3ub(51,51,0);
   glVertex2f(1,-0.19);
   glVertex2f(0.98,-0.19);    //table stand 1 (right side)
   glVertex2f(0.98,-0.32);
   glVertex2f(1,-0.32);
   glEnd();


    glBegin(GL_QUADS);
   glColor3ub(51,51,0);
   glVertex2f(0.60, -0.09);
   glVertex2f(0.62, -0.10);    //table stand 2 (right side)
   glVertex2f(0.62,-0.23);
   glVertex2f(0.6,-0.23);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51,51,0);
   glVertex2f(0.8,-0.19);
   glVertex2f(0.82, -0.19);    //table stand 3 (right side)
   glVertex2f(0.82,-0.32);
   glVertex2f(0.8,-0.32);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51, 51, 0);
   glVertex2f(0.64,-0.10);
   glVertex2f(0.64, -0.01);    //chair 1 (right side)
   glVertex2f(0.73,-0.01);
   glVertex2f(0.73,-0.10);
   glEnd();

    glBegin(GL_QUADS);
   glColor3ub(51,51,0);
   glVertex2f(0.64, -0.09);
   glVertex2f(0.66, -0.10);    //chair 1 stand 1 (right side)
   glVertex2f(0.66,-0.18);
   glVertex2f(0.64,-0.18);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51,51,0);
   glVertex2f(0.71, -0.10);
   glVertex2f(0.73, -0.10);    //chair 1 stand 2 (right side)
   glVertex2f(0.73,-0.17);
   glVertex2f(0.71,-0.17);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51, 51, 0);
   glVertex2f(0.79,-0.10);
   glVertex2f(0.79, -0.01);    //chair 2 (right side)
   glVertex2f(0.88,-0.01);
   glVertex2f(0.88,-0.10);
   glEnd();


   glBegin(GL_QUADS);
   glColor3ub(51,51,0);
   glVertex2f(0.88, -0.18);
   glVertex2f(0.88, -0.23);    //chair 2 stand 1 (right side)
   glVertex2f(0.86,-0.23);
   glVertex2f(0.86,-0.18);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51,51,0);
   glVertex2f(0.82,-0.19);
   glVertex2f(0.83, -0.19);    //chair 2 stand 2 (right side)
   glVertex2f(0.83,-0.23);
   glVertex2f(0.82,-0.23);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51, 51, 0);
   glVertex2f(0.94,-0.10);
   glVertex2f(0.94, -0.01);    //chair 3 (right side)
   glVertex2f(1,-0.01);
   glVertex2f(1,-0.10);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51, 51, 0);
   glVertex2f(0.94,-0.10);
   glVertex2f(0.96, -0.10);    //chair 3 stand 1 (right side)
   glVertex2f(0.96,-0.23);
   glVertex2f(0.94,-0.23);
   glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 0);
    glVertex2f(0.62,-0.10);
    glVertex2f(1,-0.10);      //table upper light shade (right side)
    glVertex2f(1, -0.17);
    glVertex2f(0.82,-0.17);
    glEnd();

    ///onti stopped

    //grass circles
    ///Zilani's part strt

///Bird one start
glPushMatrix();
 glTranslatef(positionBir1,positionBir1, 0.0f);
	glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 153);//bird
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(-0.7f, -0.7f);
    glVertex2f(-0.85f, -0.8f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 102, 153);
    glVertex2f(-0.85f, -0.7f);
    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.8f, -0.63f);
    glVertex2f(-0.9f, -0.6f);
    //glVertex2f(-0.7f, -0.7f);

    glEnd();
    x=-0.7f; y=-0.7f;radius =.04f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 102, 153);
		glVertex2f(x, y); // Cloud 3.2
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
	///cloudAnother
int f;
int triangleAmount00 = 20; //# of triangles used to draw circle

	GLfloat twicePi00 = 2.0f * PI;

	GLfloat x00=-0.8f; GLfloat y00=0.6f; GLfloat radius00 =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x00, y00); // Cloud 1
		for(i = 0; i <= triangleAmount00;i++) {
			glVertex2f(
		            x00 + (radius00 * cos(i *  twicePi00 / triangleAmount00)),
			    y00 + (radius00 * sin(i * twicePi00 / triangleAmount00))
			);
		}
	glEnd();
	x=-0.6f; y=0.6f;radius =.17f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 2
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.4f; y=0.6f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 3
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glLoadIdentity();
    glTranslatef(0.5,0.5,0);
    glScalef(0.5,0.5,0);
	x=-0.8f; y=0.6f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 1.1
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.6f; y=0.6f;radius =.17f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 2.1
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.4f; y=0.6f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 3.1
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glLoadIdentity();
	///anotherCloud close
	///zilani' part close

///Bird one close
///zilani's part done

     ///RAFA'S part///
  glLoadIdentity();
   GLfloat x201=0.03f; GLfloat y201=-.2f; GLfloat radius201 =.05f;     ///1st grass//
int lineAmount201 = 100;
GLfloat twicePi201 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount201;i++) {
glVertex2f(
   x201 + (radius201 * cos(i *  twicePi201 / lineAmount201)),
   y201 + (radius201* sin(i * twicePi201 / lineAmount201))
);
}
glEnd();

     GLfloat x202=-0.08f; GLfloat y202=-.26f; GLfloat radius202 =.1f;     ///2nd grass//
int lineAmount202 = 100;
GLfloat twicePi202= 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount202;i++) {
glVertex2f(
   x202 + (radius202 * cos(i *  twicePi201 / lineAmount202)),
   y202 + (radius202* sin(i * twicePi202 / lineAmount202))
);
}
glEnd();
GLfloat x203=-0.27f; GLfloat y203=-.5f; GLfloat radius203 =.1f;     ///3rd grass//
int lineAmount203 = 100;
GLfloat twicePi203= 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount203;i++) {
glVertex2f(
   x203 + (radius203* cos(i *  twicePi203 / lineAmount203)),
   y203 + (radius203* sin(i * twicePi203 / lineAmount203))
);
}
glEnd();
     GLfloat x300=-0.33f; GLfloat y300=-.63f; GLfloat radius300 =.08f;     ///4th grass//
int lineAmount300 = 100;
GLfloat twicePi300 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount300;i++) {
glVertex2f(
   x300 + (radius300* cos(i *  twicePi300 / lineAmount300)),
   y300+ (radius300* sin(i * twicePi300 / lineAmount300))
);
}
glEnd();
     GLfloat x301=-0.48f; GLfloat y301=-.75f; GLfloat radius301 =.13f;     ///5th grass//
int lineAmount301 = 100;
GLfloat twicePi301 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount301;i++) {
glVertex2f(
   x301 + (radius301 * cos(i *  twicePi301 / lineAmount301)),
   y301 + (radius301* sin(i * twicePi301 / lineAmount301))
);
}
glEnd();

GLfloat x302=-0.56f; GLfloat y302=-.93f; GLfloat radius302 =.1f;     ///6th grass//
int lineAmount302 = 100;
GLfloat twicePi302 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount302;i++) {
glVertex2f(
   x302 + (radius302 * cos(i *  twicePi302 / lineAmount302)),
   y302 + (radius302* sin(i * twicePi302 / lineAmount302))
);
}
glEnd();

GLfloat x303=0.61f; GLfloat y303=-.43f; GLfloat radius303 =.1f;     ///7th grass//
int lineAmount303 = 100;
GLfloat twicePi303 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount303;i++) {
glVertex2f(
   x303 + (radius303 * cos(i *  twicePi303 / lineAmount303)),
   y303 + (radius303* sin(i * twicePi303 / lineAmount303))
);
}
glEnd();

GLfloat x304=0.7f; GLfloat y304=-.53f; GLfloat radius304 =.07f;     ///8th grass//
int lineAmount304 = 100;
GLfloat twicePi304 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount304;i++) {
glVertex2f(
   x304 + (radius304 * cos(i *  twicePi304 / lineAmount304)),
   y304 + (radius304* sin(i * twicePi304 / lineAmount304))
);
}
glEnd();

    GLfloat x305=0.83f; GLfloat y305=-.6f; GLfloat radius305 =.1f;     ///9th grass//
int lineAmount305 = 100;
GLfloat twicePi305 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount305;i++) {
glVertex2f(
   x305 + (radius305 * cos(i *  twicePi305 / lineAmount305)),
   y305 + (radius305* sin(i * twicePi305 / lineAmount305))
);
}
glEnd();

        GLfloat x306=0.9f; GLfloat y306=-.7f; GLfloat radius306 =.06f;     ///10th grass//
int lineAmount306 = 100;
GLfloat twicePi306 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount306;i++) {
glVertex2f(
   x306 + (radius306 * cos(i *  twicePi306 / lineAmount306)),
   y306 + (radius306* sin(i * twicePi306 / lineAmount306))
);
}
glEnd();

GLfloat x307=1.0f; GLfloat y307=-.78f; GLfloat radius307 =.1f;     ///11th grass//
int lineAmount307= 100;
GLfloat twicePi307 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount307;i++) {
glVertex2f(
   x307 + (radius307 * cos(i *  twicePi307 / lineAmount307)),
   y307 + (radius307* sin(i * twicePi307 / lineAmount307))
);
}
glEnd();

GLfloat x402=-0.4f;GLfloat y402=0.8f;GLfloat radius402 =.1f;
  int triangleAmount402 = 20; //# of triangles used to draw circle
	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi402= 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 51, 0);
		glVertex2f(x402, y402); //
		for(int i = 0; i <= triangleAmount402;i++) {
			glVertex2f(
		            x402 + (radius402 * cos(i *  twicePi402 / triangleAmount402)),
			    y402 + (radius402 * sin(i * twicePi402 / triangleAmount402))
			);
		}
	glEnd();
/// Rafa's part finish///

//grass circle ends
 ///onti's part


    glLineWidth(3.5);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.15, -0.12);
    glVertex2f(-0.30,-0.15);      //Umbrella_1 lower part Left side
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.45, -0.12);
    glVertex2f(-0.30,-0.15);      //Umbrella_1 lower part Left side
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(115, 77, 38);
    glVertex2f(-0.30, -0.15);
    glVertex2f(-0.30,-0.35);      //Umbrella_1 stand Left side
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(255, 153, 51);
    glVertex2f(-0.60, -0.20);
    glVertex2f(-0.28,-0.20);      //Umbrella_2 Left side
    glVertex2f(-0.28,-0.24);
    glVertex2f(-0.60,-0.24);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.60, -0.24);
    glVertex2f(-0.44,-0.27);      //Umbrella_2 lower part Left side
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.28, -0.24);
    glVertex2f(-0.44,-0.27);      //Umbrella_2 lower part Left side
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(115, 77, 38);
    glVertex2f(-0.44, -0.27);
    glVertex2f(-0.44,-0.49);      //Umbrella_2 stand Left side
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 153, 51);
    glVertex2f(-0.38, -0.28);
    glVertex2f(-0.38,-0.32);      //Umbrella_3 Left side
    glVertex2f(-0.88,-0.32);
    glVertex2f(-0.88,-0.28);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.88, -0.32);
    glVertex2f(-0.63,-0.35);      //Umbrella_3 lower part Left side
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.38, -0.32);
    glVertex2f(-0.63,-0.35);      //Umbrella_3 lower part Left side
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(115, 77, 38);
    glVertex2f(-0.63, -0.35);
    glVertex2f(-0.63,-0.58);      //Umbrella_3 stand Left side
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 153, 51);
    glVertex2f(-0.15, -0.08);
    glVertex2f(-0.15,-0.12);      //Umbrella_3 Left side
    glVertex2f(-0.45,-0.12);
    glVertex2f(-0.45,-0.08);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 51, 0);
    glVertex2f(-1,-0.595);
    glVertex2f(-0.59,-0.595);      //bench on left side
    glVertex2f(-0.78, -0.69);
    glVertex2f(-1.0,-0.69);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 51, 0);
    glVertex2f(-1,-0.595);
    glVertex2f(-1,-0.45);      //bench upper part on left side
    glVertex2f(-0.78, -0.45);
    glVertex2f(-0.78,-0.69);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(115, 77, 38);
    glVertex2f(-1,-0.69);        //bench color shading
    glVertex2f(-0.78,-0.595);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(115, 77, 38);
    glVertex2f(-1.0,-0.56);        //bench color shading
    glVertex2f(-0.78,-0.49);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(51, 51, 0);
    glVertex2f(-1.0,-0.69);
    glVertex2f(-0.98,-0.69);      //bench stand 1 left side
    glVertex2f(-0.98, -0.77);
    glVertex2f(-1.0, -0.77);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51,51,0);
    glVertex2f(-0.78, -0.69);
    glVertex2f(-0.80,-0.69);      //bench stand 2 left side
    glVertex2f(-0.80,-0.77);
    glVertex2f(-0.78,-0.77);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 51, 0);
    glVertex2f(-0.59,-0.595);
    glVertex2f(-0.61,-0.595);      //bench stand 3 left side
    glVertex2f(-0.61, -0.66);
    glVertex2f(-0.59,-0.66);
    glEnd();

glFlush();
}
///onti's part done

///Rafa's part//
 void disback(int val)
{
    glutDisplayFunc(display);
}
void morning()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1,1,1, 1.0f);
    glBegin(GL_QUADS);
    glColor3ub(255, 179, 179);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glEnd();

    GLfloat x2=.2f; GLfloat y2=.23f; GLfloat radius2 =.36f;     //Circle of black border//
int lineAmount2 = 100;
GLfloat twicePi2 = 2.0f * PI;

///green ground start
glBegin(GL_QUADS);

        glColor3ub(0, 255,0);
        glVertex2f(1,0);
        glVertex2f(-1,0);
        glVertex2f(-1,-1);
        glVertex2f(1,-1);

        glEnd();
    /// green ground close



glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 0, 0);
for(int i = 0; i <= lineAmount2;i++) {
glVertex2f(
   x2 + (radius2 * cos(i *  twicePi2 / lineAmount2)),
   y2 + (radius2* sin(i * twicePi2 / lineAmount2))
);
}
glEnd();

    GLfloat x1=.2f; GLfloat y1=.23f; GLfloat radius1 =.35f;       // Blue circle//
int lineAmount1 = 100;
GLfloat twicePi1 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(153, 204, 255);
for(int i = 0; i <= lineAmount1;i++) {
glVertex2f(
   x1+ (radius1 * cos(i *  twicePi1 / lineAmount1)),
   y1 + (radius1* sin(i * twicePi1 / lineAmount1))
);
}
glEnd();

    glBegin(GL_QUADS);              //Bottom side Blue rectangle //
    glColor3ub(153, 204, 255);
    glVertex2f(-.13,0.0);
    glVertex2f(-.13,-.15);
    glVertex2f(.55,0.0);
    glVertex2f(.55,-.15);
    glEnd();

    glBegin(GL_LINES);              //Bottom side rectangle's black border//
    glColor3ub(0,0,0);
    glVertex2f(-.13,-0.01);
    glVertex2f(-.13,-.15);
    glVertex2f(-.13,-.15);
    glVertex2f(.55,-.15);
    glVertex2f(.55,-0.01);
    glVertex2f(.55,-.15);
    glVertex2f(.55,-0.01);
    glVertex2f(-.13,-.01);
    glEnd();

    glBegin(GL_LINES);              //Middle side of globe's black border//
    glColor3ub(0,0,0);
    glVertex2f(-.06,-0.01);
    glVertex2f(-.06,.47);
    glVertex2f(.12,-.01);
    glVertex2f(.12,.58);
    glVertex2f(.31,-0.01);
    glVertex2f(.31,.57);
    glVertex2f(.46,-0.01);
    glVertex2f(.46,.47);
    glEnd();

    glBegin(GL_QUADS);               //1st dark blue rectangle in the middle of globe//
    glColor3ub(0, 0, 102);
    glVertex2f(-.06,0.47);
    glVertex2f(.46,.47);
    glVertex2f(.51,.4);
    glVertex2f(-.11,.4);
    glEnd();

    glBegin(GL_QUADS);               //2nd dark blue rectangle in the middle of globe//
    glColor3ub(0, 0, 102);
    glVertex2f(-.14,0.33);
    glVertex2f(.54,.33);
    glVertex2f(.56,.26);
    glVertex2f(-.16,.26);
    glEnd();

    glBegin(GL_QUADS);               //3rd dark blue rectangle in the middle of globe//
    glColor3ub(0, 0, 102);
    glVertex2f(-.15,0.19);
    glVertex2f(.55,.19);
    glVertex2f(.54,.12);
    glVertex2f(-.14,.12);
    glEnd();

    glBegin(GL_QUADS);               //1st umbrella on 1st quadrant//
    glColor3ub(255, 255, 204);
    glVertex2f(.52,0.19);
    glVertex2f(1.0,.19);
    glVertex2f(.88,.04);
    glVertex2f(.4,.04);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(204, 153, 0);
    glVertex2f(.52,0.17);
    glVertex2f(1.0,.17);
    glVertex2f(.88,0.0);
    glVertex2f(.4,.00);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 204);
    glVertex2f(.43,0.08);
    glVertex2f(.92,.08);
    glVertex2f(.93,.1);
    glVertex2f(.45,.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 204);
    glVertex2f(.56,.06);
    glVertex2f(.58,0.06);
    glVertex2f(.52,0.01);
    glVertex2f(.5,0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 204);
    glVertex2f(.52,.01);
    glVertex2f(.8,0.01);
    glVertex2f(.8,0.0);
    glVertex2f(.5,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 204);
    glVertex2f(.8,.01);
    glVertex2f(.78,0.01);
    glVertex2f(.81,0.06);
    glVertex2f(.83,0.06);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 204);
    glVertex2f(.83,.06);
    glVertex2f(.83,0.08);
    glVertex2f(.56,0.08);
    glVertex2f(.56,0.06);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 102, 51);
    glVertex2f(.53,0.1);
    glVertex2f(.55,0.1);
    glVertex2f(.63,0.17);
    glVertex2f(.6,0.17);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 102, 51);
    glVertex2f(.73,0.1);
    glVertex2f(.75,0.1);
    glVertex2f(.8,0.17);
    glVertex2f(.78,0.17);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 102, 51);
    glVertex2f(.85,0.1);
    glVertex2f(.87,0.1);
    glVertex2f(.93,0.17);
    glVertex2f(.91,0.17);
    glEnd();

    glBegin(GL_QUADS);            //annex 6's upper side//
    glColor3ub(255, 255,255);
    glVertex2f(.56,0.19);
    glVertex2f(.63,0.19);
    glVertex2f(1.0,0.33);
    glVertex2f(1.0,0.4);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.56,.19);
    glVertex2f(1.0,.4);
    glVertex2f(.63,.19);
    glVertex2f(1.0,.33);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(153, 102, 51);
    glVertex2f(.63,.19);
    glVertex2f(1.0,.19);
    glVertex2f(1.0,.33);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255,255,255);
    glVertex2f(.75,.19);
    glVertex2f(.97,.19);
    glVertex2f(.97,.28);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.75,.19);
    glVertex2f(.97,.28);
    glVertex2f(.97,.28);
    glVertex2f(.97,.19);
    glEnd();

    ///////**********//////// Rafa's 1st Quadrant is FINISH here///////*******//////////
////////////////////////////////Noman's code start here//////////////////////////////////

    ///sky code open

    int i;

GLfloat x=.3f; GLfloat y=.18f; GLfloat radius =.02f;
int triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
GLfloat twicePi = 2.0f * PI;

    glPushMatrix();
glTranslatef(positionSky1,-0.1*positionSky1,0.0f);

x=-.8f; y=.85f;  radius =.09f;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(214, 234, 248);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();



x=-.6f; y=.85f;  radius =.09f;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(214, 234, 248 );
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();


x=-.7f; y=.9f;  radius =.09f;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(214, 234, 248);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();
////




glPopMatrix();



    ///sky code close

    ///bird code open
    glPushMatrix();
glTranslatef(positionBird,-.15*positionBird,0.0f);

        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(.7,.65);
        glVertex2f(.75,.69);

        glVertex2f(.75,.69);
        glVertex2f(.7,.7);

        glEnd();
        //glTranslatef(positionBird,0.0f,0.0f);
        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(.8,.68);
        glVertex2f(.85,.72);

        glVertex2f(.85,.72);
        glVertex2f(.8,.73);

        glEnd();

        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(.7,.75);
        glVertex2f(.75,.79);

        glVertex2f(.75,.79);
        glVertex2f(.7,.8);

        glEnd();

    glPopMatrix();

    glEnd();
        //glTranslatef(positionBird,0.0f,0.0f);


    //glPopMatrix();
    ///bird code close



glBegin(GL_QUADS);///top front d building
glColor3ub(171, 178, 185);
        glVertex2f(-.572,0.1);
        glVertex2f(-.572,.236);
    glColor3ub(213, 219, 219 );
        glVertex2f(-.96,.472);
        glVertex2f(-.96,0.2);
    glEnd();

    glBegin(GL_QUADS);///top front windows d building
glColor3ub(171, 178, 185);
        glVertex2f(-.94,0.432);
        glVertex2f(-.94,.392);
    glColor3ub(23, 32, 42 );
    glVertex2f(-.59,0.194);
        glVertex2f(-.59,.22);

    glEnd();

    glBegin(GL_QUADS);///top front windows d building
glColor3ub(171, 178, 185);
        glVertex2f(-.94,0.36);
        glVertex2f(-.94,.32);
    glColor3ub(23, 32, 42 );
    glVertex2f(-.59,0.152);
        glVertex2f(-.59,.176);

    glEnd();

    glBegin(GL_QUADS);///top front windows d building
glColor3ub(171, 178, 185);
        glVertex2f(-.94,0.28);
        glVertex2f(-.94,.24);
    glColor3ub(23, 32, 42 );
    glVertex2f(-.59,0.112);
        glVertex2f(-.59,.136);

    glEnd();



    glBegin(GL_QUADS);///top left side d building
glColor3ub(213, 219, 219);


    //
        glVertex2f(-1,.472);
        glVertex2f(-1,.2);
        glColor3ub(171, 178, 185);
        glVertex2f(-.96,0.2);
        glVertex2f(-.96,.472);
    glEnd();



    glBegin(GL_QUADS);/// middle front d building
glColor3ub(128, 139, 150);
        glVertex2f(-0.5,-0.06);
        glVertex2f(-0.5,0.072);
        glColor3ub(215, 219, 221);
        glVertex2f(-.84,0.22);
        glVertex2f(-0.84,0.0);

glEnd();


glBegin(GL_QUADS);/// middle front window d building
glColor3ub(171, 178, 185);;
        glVertex2f(-0.82,0.18);
        glVertex2f(-0.82,0.144);
        glColor3ub(23, 32, 42 );
        glVertex2f(-.504,0.016);
        glVertex2f(-0.504,0.04);

glEnd();

glBegin(GL_QUADS);/// middle front window d building
glColor3ub(171, 178, 185);;
        glVertex2f(-0.82,0.112);
        glVertex2f(-0.82,0.074);
        glColor3ub(23, 32, 42 );
        glVertex2f(-.504,-0.02);
        glVertex2f(-0.504,0.0);

glEnd();

glBegin(GL_QUADS);/// middle front window d building
glColor3ub(171, 178, 185);;
        glVertex2f(-0.82,0.112);
        glVertex2f(-0.82,0.074);
        glColor3ub(23, 32, 42 );
        glVertex2f(-.504,-0.02);
        glVertex2f(-0.504,0.0);

glEnd();

glBegin(GL_QUADS);/// middle front window d building
glColor3ub(171, 178, 185);;
        glVertex2f(-0.82,0.045);
        glVertex2f(-0.82,0.004);
        glColor3ub(23, 32, 42 );
        glVertex2f(-0.504,-0.056);
        glVertex2f(-.504,-0.038);


glEnd();

glBegin(GL_QUADS);///middle left d building

glColor3ub(128, 139, 150);
        glVertex2f(-.84,0);
        glVertex2f(-.84,0.22);
     glColor3ub(215, 219, 221);
        glVertex2f(-1,0.24);
        glVertex2f(-1,0);

    glEnd();
    glBegin(GL_QUADS);///bellow front d building
glColor3ub(191, 201, 202);
        glVertex2f(-0.78,0);
   glVertex2f(-0.78,-0.24);
   glColor3ub(86, 101, 115);
   glVertex2f(-0.46,-0.25);
   glVertex2f(-0.46,-0.06);

glEnd();
glBegin(GL_QUADS);/// bellow front window d building
glColor3ub(171, 178, 185);;

        glVertex2f(-0.76,-0.09);
        glVertex2f(-0.76,-0.04);
        glColor3ub(23, 32, 42 );
        glVertex2f(-0.48,-0.09);
        glVertex2f(-.48,-0.134);


glEnd();

glBegin(GL_QUADS);/// bellow front window d building
glColor3ub(171, 178, 185);;

        glVertex2f(-0.76,-0.19);
        glVertex2f(-0.76,-0.12);


        glColor3ub(23, 32, 42 );
        glVertex2f(-0.48,-0.164);
        glVertex2f(-.48,-0.214);


glEnd();

glBegin(GL_QUADS);/// bellow left d building
glColor3ub(86, 101, 115);
        glVertex2f(-1,-0.224);
        glVertex2f(-0.78,-0.24);
        glColor3ub(191, 201, 202);
        glVertex2f(-.78,-0);
        glVertex2f(-1,0.03);
    glEnd();

    /// d building close

    ///street beside lake start left

    glBegin(GL_QUADS);

    glColor3ub(169, 50, 38);

    glVertex2f(-1.48,-1);
    glVertex2f(-0.12,-0.14);
    glVertex2f(0.11,-0.14);
    glVertex2f(-0.6,-1);
    glEnd();

    ///street beside lake left close

    ///street beside lake rigth start
    glBegin(GL_QUADS);

    glVertex2f(1.28,-1);
    glVertex2f(.1,-0.14);
    glVertex2f(0.52,-0.14);
    glVertex2f(1.9,-1);
    glEnd();


    ///street beside lake right close



    ///lake water start
     glBegin(GL_QUADS);

    glColor3ub(21, 67, 96);
    glVertex2f(1,-1);
    glVertex2f(-0.14,-1);
    glColor3ub(171, 235, 198);
    glVertex2f(0.155,-0.14);
    glVertex2f(0.23,-0.14);

    glEnd();
    ///lek water close

    ///fish1 start
        glPushMatrix();

glTranslatef(0.153*positionFish1,positionFish1,0.0f);

//int i;

x=0.0f;  y=-1.0f;  radius =.02f;
triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(245, 176, 65);
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

glTranslatef(0.2*positionFish1,positionFish1,0.0f);

//int i;

x=0.25f;  y=-0.970f;  radius =.02f;
triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(245, 176, 65);
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

glTranslatef(0.092*positionFish1,positionFish1,0.0f);

//int i;

x=0.13f;  y=-1.0f;  radius =.02f;
triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(245, 176, 65);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

glPopMatrix();

///fish one close


    ///lake view

    glBegin(GL_QUADS);
    glColor3ub(52, 152, 219);
    glVertex2f(-0.52,-1);
    glVertex2f(-0.32,-1);
    glVertex2f(0.14,-0.14);
    glVertex2f(0.12,-0.14);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(36, 113, 163);
    glVertex2f(-0.14,-1);
    glVertex2f(-0.32,-1);
    glVertex2f(0.14,-0.14);
    glVertex2f(0.155,-0.14);
    glEnd();


    ///lake fountain

    glBegin(GL_POLYGON);
    glColor3ub(241, 148, 138);
    glVertex2f(0.168,-0.4);
    glVertex2f(0.168,-0.24);
    glVertex2f(0.26,-0.16);



    //glColor3ub(123, 36, 28);
    glVertex2f(0.42,-.16);
    glVertex2f(0.5,-0.24);
    glVertex2f(0.5,-0.4);
    glEnd();

    glBegin(GL_TRIANGLES);
     glColor3ub(231, 76, 60);
    glVertex2f(0.23,-0.16);
    glVertex2f(0.328,-0.078);
    glVertex2f(0.45,-0.16);
    glEnd();

    ///lake fountain end

    ///lake bridge

    glBegin(GL_QUADS);
     glColor3ub(52, 152, 219);
    glVertex2f(-0.23,-0.356);
    glVertex2f(0.5,-0.356);
    glVertex2f(0.6,-0.42);
    glVertex2f(-0.3,-0.42);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(52, 152, 219);
    glVertex2f(-0.3,-0.42);
    glVertex2f(-0.3,-0.47);
    glColor3ub(214, 234, 248);
    glVertex2f(0.6,-0.47);
    glVertex2f(0.6,-0.42);
    glEnd();

    ///lec bredge end

    ///lek viewstart

    glBegin(GL_QUADS);
    glColor3ub(36, 113, 163);
    glVertex2f(0.8,-1);
    glVertex2f(1,-1);
    glVertex2f(0.4,-0.42);
    glVertex2f(0.4,-0.5);

    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(52, 152, 219);
    glVertex2f(0.36,-0.356);
    glVertex2f(0.4,-0.42);
    glVertex2f(1,-1);
    glVertex2f(1,-0.85);
    glEnd();

    /// lek view end

    ///founten on water start

    x=0.255f;  y=-0.850f;  radius =.08f;
triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(29, 131, 72);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=0.255f;  y=-0.80f;  radius =.03f;
triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(236, 112, 99);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();
////////////

x=0.255f;  y=-0.550f;  radius =.04f;
triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(29, 131, 72);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=0.255f;  y=-0.520f;  radius =.02f;
triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(236, 112, 99);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

    ///founten on water close


////////////////// noman finished here

///onti started

    glBegin(GL_QUADS);
    glColor3ub(51, 51, 0);
    glVertex2f(0.59,-0.09);
    glVertex2f(1,-0.09);      //table on right side
    glVertex2f(1, -0.19);
    glVertex2f(0.8,-0.19);
    glEnd();



   glBegin(GL_QUADS);
   glColor3ub(51,51,0);
   glVertex2f(1,-0.19);
   glVertex2f(0.98,-0.19);    //table stand 1 (right side)
   glVertex2f(0.98,-0.32);
   glVertex2f(1,-0.32);
   glEnd();


    glBegin(GL_QUADS);
   glColor3ub(51,51,0);
   glVertex2f(0.60, -0.09);
   glVertex2f(0.62, -0.10);    //table stand 2 (right side)
   glVertex2f(0.62,-0.23);
   glVertex2f(0.6,-0.23);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51,51,0);
   glVertex2f(0.8,-0.19);
   glVertex2f(0.82, -0.19);    //table stand 3 (right side)
   glVertex2f(0.82,-0.32);
   glVertex2f(0.8,-0.32);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51, 51, 0);
   glVertex2f(0.64,-0.10);
   glVertex2f(0.64, -0.01);    //chair 1 (right side)
   glVertex2f(0.73,-0.01);
   glVertex2f(0.73,-0.10);
   glEnd();

    glBegin(GL_QUADS);
   glColor3ub(51,51,0);
   glVertex2f(0.64, -0.09);
   glVertex2f(0.66, -0.10);    //chair 1 stand 1 (right side)
   glVertex2f(0.66,-0.18);
   glVertex2f(0.64,-0.18);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51,51,0);
   glVertex2f(0.71, -0.10);
   glVertex2f(0.73, -0.10);    //chair 1 stand 2 (right side)
   glVertex2f(0.73,-0.17);
   glVertex2f(0.71,-0.17);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51, 51, 0);
   glVertex2f(0.79,-0.10);
   glVertex2f(0.79, -0.01);    //chair 2 (right side)
   glVertex2f(0.88,-0.01);
   glVertex2f(0.88,-0.10);
   glEnd();


   glBegin(GL_QUADS);
   glColor3ub(51,51,0);
   glVertex2f(0.88, -0.18);
   glVertex2f(0.88, -0.23);    //chair 2 stand 1 (right side)
   glVertex2f(0.86,-0.23);
   glVertex2f(0.86,-0.18);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51,51,0);
   glVertex2f(0.82,-0.19);
   glVertex2f(0.83, -0.19);    //chair 2 stand 2 (right side)
   glVertex2f(0.83,-0.23);
   glVertex2f(0.82,-0.23);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51, 51, 0);
   glVertex2f(0.94,-0.10);
   glVertex2f(0.94, -0.01);    //chair 3 (right side)
   glVertex2f(1,-0.01);
   glVertex2f(1,-0.10);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51, 51, 0);
   glVertex2f(0.94,-0.10);
   glVertex2f(0.96, -0.10);    //chair 3 stand 1 (right side)
   glVertex2f(0.96,-0.23);
   glVertex2f(0.94,-0.23);
   glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 0);
    glVertex2f(0.62,-0.10);
    glVertex2f(1,-0.10);      //table upper light shade (right side)
    glVertex2f(1, -0.17);
    glVertex2f(0.82,-0.17);
    glEnd();

    ///onti stopped

    //grass circles

     ///RAFA'S part///
  glLoadIdentity();
   GLfloat x201=0.03f; GLfloat y201=-.2f; GLfloat radius201 =.05f;     ///1st grass//
int lineAmount201 = 100;
GLfloat twicePi201 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount201;i++) {
glVertex2f(
   x201 + (radius201 * cos(i *  twicePi201 / lineAmount201)),
   y201 + (radius201* sin(i * twicePi201 / lineAmount201))
);
}
glEnd();

     GLfloat x202=-0.08f; GLfloat y202=-.26f; GLfloat radius202 =.1f;     ///2nd grass//
int lineAmount202 = 100;
GLfloat twicePi202= 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount202;i++) {
glVertex2f(
   x202 + (radius202 * cos(i *  twicePi201 / lineAmount202)),
   y202 + (radius202* sin(i * twicePi202 / lineAmount202))
);
}
glEnd();
GLfloat x203=-0.27f; GLfloat y203=-.5f; GLfloat radius203 =.1f;     ///3rd grass//
int lineAmount203 = 100;
GLfloat twicePi203= 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount203;i++) {
glVertex2f(
   x203 + (radius203* cos(i *  twicePi203 / lineAmount203)),
   y203 + (radius203* sin(i * twicePi203 / lineAmount203))
);
}
glEnd();
     GLfloat x300=-0.33f; GLfloat y300=-.63f; GLfloat radius300 =.08f;     ///4th grass//
int lineAmount300 = 100;
GLfloat twicePi300 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount300;i++) {
glVertex2f(
   x300 + (radius300* cos(i *  twicePi300 / lineAmount300)),
   y300+ (radius300* sin(i * twicePi300 / lineAmount300))
);
}
glEnd();
     GLfloat x301=-0.48f; GLfloat y301=-.75f; GLfloat radius301 =.13f;     ///5th grass//
int lineAmount301 = 100;
GLfloat twicePi301 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount301;i++) {
glVertex2f(
   x301 + (radius301 * cos(i *  twicePi301 / lineAmount301)),
   y301 + (radius301* sin(i * twicePi301 / lineAmount301))
);
}
glEnd();

GLfloat x302=-0.56f; GLfloat y302=-.93f; GLfloat radius302 =.1f;     ///6th grass//
int lineAmount302 = 100;
GLfloat twicePi302 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount302;i++) {
glVertex2f(
   x302 + (radius302 * cos(i *  twicePi302 / lineAmount302)),
   y302 + (radius302* sin(i * twicePi302 / lineAmount302))
);
}
glEnd();

GLfloat x303=0.61f; GLfloat y303=-.43f; GLfloat radius303 =.1f;     ///7th grass//
int lineAmount303 = 100;
GLfloat twicePi303 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount303;i++) {
glVertex2f(
   x303 + (radius303 * cos(i *  twicePi303 / lineAmount303)),
   y303 + (radius303* sin(i * twicePi303 / lineAmount303))
);
}
glEnd();

GLfloat x304=0.7f; GLfloat y304=-.53f; GLfloat radius304 =.07f;     ///8th grass//
int lineAmount304 = 100;
GLfloat twicePi304 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount304;i++) {
glVertex2f(
   x304 + (radius304 * cos(i *  twicePi304 / lineAmount304)),
   y304 + (radius304* sin(i * twicePi304 / lineAmount304))
);
}
glEnd();

    GLfloat x305=0.83f; GLfloat y305=-.6f; GLfloat radius305 =.1f;     ///9th grass//
int lineAmount305 = 100;
GLfloat twicePi305 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount305;i++) {
glVertex2f(
   x305 + (radius305 * cos(i *  twicePi305 / lineAmount305)),
   y305 + (radius305* sin(i * twicePi305 / lineAmount305))
);
}
glEnd();

        GLfloat x306=0.9f; GLfloat y306=-.7f; GLfloat radius306 =.06f;     ///10th grass//
int lineAmount306 = 100;
GLfloat twicePi306 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount306;i++) {
glVertex2f(
   x306 + (radius306 * cos(i *  twicePi306 / lineAmount306)),
   y306 + (radius306* sin(i * twicePi306 / lineAmount306))
);
}
glEnd();

GLfloat x307=1.0f; GLfloat y307=-.78f; GLfloat radius307 =.1f;     ///11th grass//
int lineAmount307= 100;
GLfloat twicePi307 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount307;i++) {
glVertex2f(
   x307 + (radius307 * cos(i *  twicePi307 / lineAmount307)),
   y307 + (radius307* sin(i * twicePi307 / lineAmount307))
);
}
glEnd();
/// Rafa's part finish///

//grass circle ends
 ///onti's part


    glLineWidth(3.5);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.15, -0.12);
    glVertex2f(-0.30,-0.15);      //Umbrella_1 lower part Left side
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.45, -0.12);
    glVertex2f(-0.30,-0.15);      //Umbrella_1 lower part Left side
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(115, 77, 38);
    glVertex2f(-0.30, -0.15);
    glVertex2f(-0.30,-0.35);      //Umbrella_1 stand Left side
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(255, 153, 51);
    glVertex2f(-0.60, -0.20);
    glVertex2f(-0.28,-0.20);      //Umbrella_2 Left side
    glVertex2f(-0.28,-0.24);
    glVertex2f(-0.60,-0.24);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.60, -0.24);
    glVertex2f(-0.44,-0.27);      //Umbrella_2 lower part Left side
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.28, -0.24);
    glVertex2f(-0.44,-0.27);      //Umbrella_2 lower part Left side
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(115, 77, 38);
    glVertex2f(-0.44, -0.27);
    glVertex2f(-0.44,-0.49);      //Umbrella_2 stand Left side
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 153, 51);
    glVertex2f(-0.38, -0.28);
    glVertex2f(-0.38,-0.32);      //Umbrella_3 Left side
    glVertex2f(-0.88,-0.32);
    glVertex2f(-0.88,-0.28);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.88, -0.32);
    glVertex2f(-0.63,-0.35);      //Umbrella_3 lower part Left side
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.38, -0.32);
    glVertex2f(-0.63,-0.35);      //Umbrella_3 lower part Left side
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(115, 77, 38);
    glVertex2f(-0.63, -0.35);
    glVertex2f(-0.63,-0.58);      //Umbrella_3 stand Left side
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 153, 51);
    glVertex2f(-0.15, -0.08);
    glVertex2f(-0.15,-0.12);      //Umbrella_3 Left side
    glVertex2f(-0.45,-0.12);
    glVertex2f(-0.45,-0.08);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 51, 0);
    glVertex2f(-1,-0.595);
    glVertex2f(-0.59,-0.595);      //bench on left side
    glVertex2f(-0.78, -0.69);
    glVertex2f(-1.0,-0.69);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 51, 0);
    glVertex2f(-1,-0.595);
    glVertex2f(-1,-0.45);      //bench upper part on left side
    glVertex2f(-0.78, -0.45);
    glVertex2f(-0.78,-0.69);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(115, 77, 38);
    glVertex2f(-1,-0.69);        //bench color shading
    glVertex2f(-0.78,-0.595);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(115, 77, 38);
    glVertex2f(-1.0,-0.56);        //bench color shading
    glVertex2f(-0.78,-0.49);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(51, 51, 0);
    glVertex2f(-1.0,-0.69);
    glVertex2f(-0.98,-0.69);      //bench stand 1 left side
    glVertex2f(-0.98, -0.77);
    glVertex2f(-1.0, -0.77);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51,51,0);
    glVertex2f(-0.78, -0.69);
    glVertex2f(-0.80,-0.69);      //bench stand 2 left side
    glVertex2f(-0.80,-0.77);
    glVertex2f(-0.78,-0.77);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 51, 0);
    glVertex2f(-0.59,-0.595);
    glVertex2f(-0.61,-0.595);      //bench stand 3 left side
    glVertex2f(-0.61, -0.66);
    glVertex2f(-0.59,-0.66);
    glEnd();
    GLfloat x402=-0.4f;GLfloat y402=0.8f;GLfloat radius402 =.1f;
  int triangleAmount402 = 20; //# of triangles used to draw circle
	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi402= 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 51, 0);
		glVertex2f(x402, y402); //
		for(int i = 0; i <= triangleAmount402;i++) {
			glVertex2f(
		            x402 + (radius402 * cos(i *  twicePi402 / triangleAmount402)),
			    y402 + (radius402 * sin(i * twicePi402 / triangleAmount402))
			);
		}
	glEnd();
		///cloudAnother
int f;
int triangleAmount00 = 20; //# of triangles used to draw circle

	GLfloat twicePi00 = 2.0f * PI;

	GLfloat x00=-0.8f; GLfloat y00=0.6f; GLfloat radius00 =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x00, y00); // Cloud 1
		for(i = 0; i <= triangleAmount00;i++) {
			glVertex2f(
		            x00 + (radius00 * cos(i *  twicePi00 / triangleAmount00)),
			    y00 + (radius00 * sin(i * twicePi00 / triangleAmount00))
			);
		}
	glEnd();
	x=-0.6f; y=0.6f;radius =.17f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 2
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.4f; y=0.6f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 3
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glLoadIdentity();
    glTranslatef(0.5,0.5,0);
    glScalef(0.5,0.5,0);
	x=-0.8f; y=0.6f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 1.1
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.6f; y=0.6f;radius =.17f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 2.1
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.4f; y=0.6f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 3.1
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glLoadIdentity();
	///anotherCloud close
	///zilani' part close
    glutTimerFunc(3000,disback,0);
    glFlush();
}



void morning_demo(int val) {

 glutDisplayFunc(morning);


}
void disback1(int val)
{
    glutDisplayFunc(morning);
}
void night()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0,0,0, 1.0f);

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 102);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glEnd();
    GLfloat x2=.2f; GLfloat y2=.23f; GLfloat radius2 =.36f;     //Circle of black border//
int lineAmount2 = 100;
GLfloat twicePi2 = 2.0f * PI;

///green ground start
glBegin(GL_QUADS);

        glColor3ub(0, 255,0);
        glVertex2f(1,0);
        glVertex2f(-1,0);
        glVertex2f(-1,-1);
        glVertex2f(1,-1);

        glEnd();
    /// green ground close



glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 0, 0);
for(int i = 0; i <= lineAmount2;i++) {
glVertex2f(
   x2 + (radius2 * cos(i *  twicePi2 / lineAmount2)),
   y2 + (radius2* sin(i * twicePi2 / lineAmount2))
);
}
glEnd();

    GLfloat x1=.2f; GLfloat y1=.23f; GLfloat radius1 =.35f;       // Blue circle//
int lineAmount1 = 100;
GLfloat twicePi1 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(153, 204, 255);
for(int i = 0; i <= lineAmount1;i++) {
glVertex2f(
   x1+ (radius1 * cos(i *  twicePi1 / lineAmount1)),
   y1 + (radius1* sin(i * twicePi1 / lineAmount1))
);
}
glEnd();

    glBegin(GL_QUADS);              //Bottom side Blue rectangle //
    glColor3ub(153, 204, 255);
    glVertex2f(-.13,0.0);
    glVertex2f(-.13,-.15);
    glVertex2f(.55,0.0);
    glVertex2f(.55,-.15);
    glEnd();

    glBegin(GL_LINES);              //Bottom side rectangle's black border//
    glColor3ub(0,0,0);
    glVertex2f(-.13,-0.01);
    glVertex2f(-.13,-.15);
    glVertex2f(-.13,-.15);
    glVertex2f(.55,-.15);
    glVertex2f(.55,-0.01);
    glVertex2f(.55,-.15);
    glVertex2f(.55,-0.01);
    glVertex2f(-.13,-.01);
    glEnd();

    glBegin(GL_LINES);              //Middle side of globe's black border//
    glColor3ub(0,0,0);
    glVertex2f(-.06,-0.01);
    glVertex2f(-.06,.47);
    glVertex2f(.12,-.01);
    glVertex2f(.12,.58);
    glVertex2f(.31,-0.01);
    glVertex2f(.31,.57);
    glVertex2f(.46,-0.01);
    glVertex2f(.46,.47);
    glEnd();

    glBegin(GL_QUADS);               //1st dark blue rectangle in the middle of globe//
    glColor3ub(0, 0, 102);
    glVertex2f(-.06,0.47);
    glVertex2f(.46,.47);
    glVertex2f(.51,.4);
    glVertex2f(-.11,.4);
    glEnd();

    glBegin(GL_QUADS);               //2nd dark blue rectangle in the middle of globe//
    glColor3ub(0, 0, 102);
    glVertex2f(-.14,0.33);
    glVertex2f(.54,.33);
    glVertex2f(.56,.26);
    glVertex2f(-.16,.26);
    glEnd();

    glBegin(GL_QUADS);               //3rd dark blue rectangle in the middle of globe//
    glColor3ub(0, 0, 102);
    glVertex2f(-.15,0.19);
    glVertex2f(.55,.19);
    glVertex2f(.54,.12);
    glVertex2f(-.14,.12);
    glEnd();

    glBegin(GL_QUADS);               //1st umbrella on 1st quadrant//
    glColor3ub(255, 255, 204);
    glVertex2f(.52,0.19);
    glVertex2f(1.0,.19);
    glVertex2f(.88,.04);
    glVertex2f(.4,.04);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(204, 153, 0);
    glVertex2f(.52,0.17);
    glVertex2f(1.0,.17);
    glVertex2f(.88,0.0);
    glVertex2f(.4,.00);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 204);
    glVertex2f(.43,0.08);
    glVertex2f(.92,.08);
    glVertex2f(.93,.1);
    glVertex2f(.45,.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 204);
    glVertex2f(.56,.06);
    glVertex2f(.58,0.06);
    glVertex2f(.52,0.01);
    glVertex2f(.5,0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 204);
    glVertex2f(.52,.01);
    glVertex2f(.8,0.01);
    glVertex2f(.8,0.0);
    glVertex2f(.5,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 204);
    glVertex2f(.8,.01);
    glVertex2f(.78,0.01);
    glVertex2f(.81,0.06);
    glVertex2f(.83,0.06);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 204);
    glVertex2f(.83,.06);
    glVertex2f(.83,0.08);
    glVertex2f(.56,0.08);
    glVertex2f(.56,0.06);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 102, 51);
    glVertex2f(.53,0.1);
    glVertex2f(.55,0.1);
    glVertex2f(.63,0.17);
    glVertex2f(.6,0.17);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 102, 51);
    glVertex2f(.73,0.1);
    glVertex2f(.75,0.1);
    glVertex2f(.8,0.17);
    glVertex2f(.78,0.17);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 102, 51);
    glVertex2f(.85,0.1);
    glVertex2f(.87,0.1);
    glVertex2f(.93,0.17);
    glVertex2f(.91,0.17);
    glEnd();

    glBegin(GL_QUADS);            //annex 6's upper side//
    glColor3ub(255, 255,255);
    glVertex2f(.56,0.19);
    glVertex2f(.63,0.19);
    glVertex2f(1.0,0.33);
    glVertex2f(1.0,0.4);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.56,.19);
    glVertex2f(1.0,.4);
    glVertex2f(.63,.19);
    glVertex2f(1.0,.33);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(153, 102, 51);
    glVertex2f(.63,.19);
    glVertex2f(1.0,.19);
    glVertex2f(1.0,.33);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255,255,255);
    glVertex2f(.75,.19);
    glVertex2f(.97,.19);
    glVertex2f(.97,.28);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.75,.19);
    glVertex2f(.97,.28);
    glVertex2f(.97,.28);
    glVertex2f(.97,.19);
    glEnd();

    ///////**********//////// Rafa's 1st Quadrant is FINISH here///////*******//////////
////////////////////////////////Noman's code start here//////////////////////////////////

    ///sky code open

    int i;

GLfloat x=.3f; GLfloat y=.18f; GLfloat radius =.02f;
int triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
GLfloat twicePi = 2.0f * PI;

    glPushMatrix();
glTranslatef(positionSky1,-0.1*positionSky1,0.0f);

x=-.8f; y=.85f;  radius =.09f;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(214, 234, 248);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();



x=-.6f; y=.85f;  radius =.09f;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(214, 234, 248 );
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();


x=-.7f; y=.9f;  radius =.09f;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(214, 234, 248);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();
////




glPopMatrix();



    ///sky code close

    ///bird code open
    glPushMatrix();
glTranslatef(positionBird,-.15*positionBird,0.0f);

        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(.7,.65);
        glVertex2f(.75,.69);

        glVertex2f(.75,.69);
        glVertex2f(.7,.7);

        glEnd();
        //glTranslatef(positionBird,0.0f,0.0f);
        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(.8,.68);
        glVertex2f(.85,.72);

        glVertex2f(.85,.72);
        glVertex2f(.8,.73);

        glEnd();

        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(.7,.75);
        glVertex2f(.75,.79);

        glVertex2f(.75,.79);
        glVertex2f(.7,.8);

        glEnd();

    glPopMatrix();

    glEnd();
        //glTranslatef(positionBird,0.0f,0.0f);


    //glPopMatrix();
    ///bird code close



glBegin(GL_QUADS);///top front d building
glColor3ub(171, 178, 185);
        glVertex2f(-.572,0.1);
        glVertex2f(-.572,.236);
    glColor3ub(213, 219, 219 );
        glVertex2f(-.96,.472);
        glVertex2f(-.96,0.2);
    glEnd();

    glBegin(GL_QUADS);///top front windows d building
glColor3ub(171, 178, 185);
        glVertex2f(-.94,0.432);
        glVertex2f(-.94,.392);
    glColor3ub(23, 32, 42 );
    glVertex2f(-.59,0.194);
        glVertex2f(-.59,.22);

    glEnd();

    glBegin(GL_QUADS);///top front windows d building
glColor3ub(171, 178, 185);
        glVertex2f(-.94,0.36);
        glVertex2f(-.94,.32);
    glColor3ub(23, 32, 42 );
    glVertex2f(-.59,0.152);
        glVertex2f(-.59,.176);

    glEnd();

    glBegin(GL_QUADS);///top front windows d building
glColor3ub(171, 178, 185);
        glVertex2f(-.94,0.28);
        glVertex2f(-.94,.24);
    glColor3ub(23, 32, 42 );
    glVertex2f(-.59,0.112);
        glVertex2f(-.59,.136);

    glEnd();



    glBegin(GL_QUADS);///top left side d building
glColor3ub(213, 219, 219);


    //
        glVertex2f(-1,.472);
        glVertex2f(-1,.2);
        glColor3ub(171, 178, 185);
        glVertex2f(-.96,0.2);
        glVertex2f(-.96,.472);
    glEnd();



    glBegin(GL_QUADS);/// middle front d building
glColor3ub(128, 139, 150);
        glVertex2f(-0.5,-0.06);
        glVertex2f(-0.5,0.072);
        glColor3ub(215, 219, 221);
        glVertex2f(-.84,0.22);
        glVertex2f(-0.84,0.0);

glEnd();


glBegin(GL_QUADS);/// middle front window d building
glColor3ub(171, 178, 185);;
        glVertex2f(-0.82,0.18);
        glVertex2f(-0.82,0.144);
        glColor3ub(23, 32, 42 );
        glVertex2f(-.504,0.016);
        glVertex2f(-0.504,0.04);

glEnd();

glBegin(GL_QUADS);/// middle front window d building
glColor3ub(171, 178, 185);;
        glVertex2f(-0.82,0.112);
        glVertex2f(-0.82,0.074);
        glColor3ub(23, 32, 42 );
        glVertex2f(-.504,-0.02);
        glVertex2f(-0.504,0.0);

glEnd();

glBegin(GL_QUADS);/// middle front window d building
glColor3ub(171, 178, 185);;
        glVertex2f(-0.82,0.112);
        glVertex2f(-0.82,0.074);
        glColor3ub(23, 32, 42 );
        glVertex2f(-.504,-0.02);
        glVertex2f(-0.504,0.0);

glEnd();

glBegin(GL_QUADS);/// middle front window d building
glColor3ub(171, 178, 185);;
        glVertex2f(-0.82,0.045);
        glVertex2f(-0.82,0.004);
        glColor3ub(23, 32, 42 );
        glVertex2f(-0.504,-0.056);
        glVertex2f(-.504,-0.038);


glEnd();

glBegin(GL_QUADS);///middle left d building

glColor3ub(128, 139, 150);
        glVertex2f(-.84,0);
        glVertex2f(-.84,0.22);
     glColor3ub(215, 219, 221);
        glVertex2f(-1,0.24);
        glVertex2f(-1,0);

    glEnd();
    glBegin(GL_QUADS);///bellow front d building
glColor3ub(191, 201, 202);
        glVertex2f(-0.78,0);
   glVertex2f(-0.78,-0.24);
   glColor3ub(86, 101, 115);
   glVertex2f(-0.46,-0.25);
   glVertex2f(-0.46,-0.06);

glEnd();
glBegin(GL_QUADS);/// bellow front window d building
glColor3ub(171, 178, 185);;

        glVertex2f(-0.76,-0.09);
        glVertex2f(-0.76,-0.04);
        glColor3ub(23, 32, 42 );
        glVertex2f(-0.48,-0.09);
        glVertex2f(-.48,-0.134);


glEnd();

glBegin(GL_QUADS);/// bellow front window d building
glColor3ub(171, 178, 185);;

        glVertex2f(-0.76,-0.19);
        glVertex2f(-0.76,-0.12);


        glColor3ub(23, 32, 42 );
        glVertex2f(-0.48,-0.164);
        glVertex2f(-.48,-0.214);


glEnd();

glBegin(GL_QUADS);/// bellow left d building
glColor3ub(86, 101, 115);
        glVertex2f(-1,-0.224);
        glVertex2f(-0.78,-0.24);
        glColor3ub(191, 201, 202);
        glVertex2f(-.78,-0);
        glVertex2f(-1,0.03);
    glEnd();

    /// d building close

    ///street beside lake start left

    glBegin(GL_QUADS);

    glColor3ub(169, 50, 38);

    glVertex2f(-1.48,-1);
    glVertex2f(-0.12,-0.14);
    glVertex2f(0.11,-0.14);
    glVertex2f(-0.6,-1);
    glEnd();

    ///street beside lake left close

    ///street beside lake rigth start
    glBegin(GL_QUADS);

    glVertex2f(1.28,-1);
    glVertex2f(.1,-0.14);
    glVertex2f(0.52,-0.14);
    glVertex2f(1.9,-1);
    glEnd();


    ///street beside lake right close



    ///lake water start
     glBegin(GL_QUADS);

    glColor3ub(21, 67, 96);
    glVertex2f(1,-1);
    glVertex2f(-0.14,-1);
    glColor3ub(171, 235, 198);
    glVertex2f(0.155,-0.14);
    glVertex2f(0.23,-0.14);

    glEnd();
    ///lek water close

    ///fish1 start
        glPushMatrix();

glTranslatef(0.153*positionFish1,positionFish1,0.0f);

//int i;

x=0.0f;  y=-1.0f;  radius =.02f;
triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(245, 176, 65);
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

glTranslatef(0.2*positionFish1,positionFish1,0.0f);

//int i;

x=0.25f;  y=-0.970f;  radius =.02f;
triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(245, 176, 65);
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

glTranslatef(0.092*positionFish1,positionFish1,0.0f);

//int i;

x=0.13f;  y=-1.0f;  radius =.02f;
triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(245, 176, 65);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

glPopMatrix();

///fish one close


    ///lake view

    glBegin(GL_QUADS);
    glColor3ub(52, 152, 219);
    glVertex2f(-0.52,-1);
    glVertex2f(-0.32,-1);
    glVertex2f(0.14,-0.14);
    glVertex2f(0.12,-0.14);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(36, 113, 163);
    glVertex2f(-0.14,-1);
    glVertex2f(-0.32,-1);
    glVertex2f(0.14,-0.14);
    glVertex2f(0.155,-0.14);
    glEnd();


    ///lake fountain

    glBegin(GL_POLYGON);
    glColor3ub(241, 148, 138);
    glVertex2f(0.168,-0.4);
    glVertex2f(0.168,-0.24);
    glVertex2f(0.26,-0.16);



    //glColor3ub(123, 36, 28);
    glVertex2f(0.42,-.16);
    glVertex2f(0.5,-0.24);
    glVertex2f(0.5,-0.4);
    glEnd();

    glBegin(GL_TRIANGLES);
     glColor3ub(231, 76, 60);
    glVertex2f(0.23,-0.16);
    glVertex2f(0.328,-0.078);
    glVertex2f(0.45,-0.16);
    glEnd();

    ///lake fountain end

    ///lake bridge

    glBegin(GL_QUADS);
     glColor3ub(52, 152, 219);
    glVertex2f(-0.23,-0.356);
    glVertex2f(0.5,-0.356);
    glVertex2f(0.6,-0.42);
    glVertex2f(-0.3,-0.42);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(52, 152, 219);
    glVertex2f(-0.3,-0.42);
    glVertex2f(-0.3,-0.47);
    glColor3ub(214, 234, 248);
    glVertex2f(0.6,-0.47);
    glVertex2f(0.6,-0.42);
    glEnd();

    ///lec bredge end

    ///lek viewstart

    glBegin(GL_QUADS);
    glColor3ub(36, 113, 163);
    glVertex2f(0.8,-1);
    glVertex2f(1,-1);
    glVertex2f(0.4,-0.42);
    glVertex2f(0.4,-0.5);

    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(52, 152, 219);
    glVertex2f(0.36,-0.356);
    glVertex2f(0.4,-0.42);
    glVertex2f(1,-1);
    glVertex2f(1,-0.85);
    glEnd();

    /// lek view end

    ///founten on water start

    x=0.255f;  y=-0.850f;  radius =.08f;
triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(29, 131, 72);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=0.255f;  y=-0.80f;  radius =.03f;
triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(236, 112, 99);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();
////////////

x=0.255f;  y=-0.550f;  radius =.04f;
triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(29, 131, 72);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=0.255f;  y=-0.520f;  radius =.02f;
triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
        glColor3ub(236, 112, 99);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

    ///founten on water close


////////////////// noman finished here

///onti started

    glBegin(GL_QUADS);
    glColor3ub(51, 51, 0);
    glVertex2f(0.59,-0.09);
    glVertex2f(1,-0.09);      //table on right side
    glVertex2f(1, -0.19);
    glVertex2f(0.8,-0.19);
    glEnd();



   glBegin(GL_QUADS);
   glColor3ub(51,51,0);
   glVertex2f(1,-0.19);
   glVertex2f(0.98,-0.19);    //table stand 1 (right side)
   glVertex2f(0.98,-0.32);
   glVertex2f(1,-0.32);
   glEnd();


    glBegin(GL_QUADS);
   glColor3ub(51,51,0);
   glVertex2f(0.60, -0.09);
   glVertex2f(0.62, -0.10);    //table stand 2 (right side)
   glVertex2f(0.62,-0.23);
   glVertex2f(0.6,-0.23);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51,51,0);
   glVertex2f(0.8,-0.19);
   glVertex2f(0.82, -0.19);    //table stand 3 (right side)
   glVertex2f(0.82,-0.32);
   glVertex2f(0.8,-0.32);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51, 51, 0);
   glVertex2f(0.64,-0.10);
   glVertex2f(0.64, -0.01);    //chair 1 (right side)
   glVertex2f(0.73,-0.01);
   glVertex2f(0.73,-0.10);
   glEnd();

    glBegin(GL_QUADS);
   glColor3ub(51,51,0);
   glVertex2f(0.64, -0.09);
   glVertex2f(0.66, -0.10);    //chair 1 stand 1 (right side)
   glVertex2f(0.66,-0.18);
   glVertex2f(0.64,-0.18);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51,51,0);
   glVertex2f(0.71, -0.10);
   glVertex2f(0.73, -0.10);    //chair 1 stand 2 (right side)
   glVertex2f(0.73,-0.17);
   glVertex2f(0.71,-0.17);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51, 51, 0);
   glVertex2f(0.79,-0.10);
   glVertex2f(0.79, -0.01);    //chair 2 (right side)
   glVertex2f(0.88,-0.01);
   glVertex2f(0.88,-0.10);
   glEnd();


   glBegin(GL_QUADS);
   glColor3ub(51,51,0);
   glVertex2f(0.88, -0.18);
   glVertex2f(0.88, -0.23);    //chair 2 stand 1 (right side)
   glVertex2f(0.86,-0.23);
   glVertex2f(0.86,-0.18);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51,51,0);
   glVertex2f(0.82,-0.19);
   glVertex2f(0.83, -0.19);    //chair 2 stand 2 (right side)
   glVertex2f(0.83,-0.23);
   glVertex2f(0.82,-0.23);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51, 51, 0);
   glVertex2f(0.94,-0.10);
   glVertex2f(0.94, -0.01);    //chair 3 (right side)
   glVertex2f(1,-0.01);
   glVertex2f(1,-0.10);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51, 51, 0);
   glVertex2f(0.94,-0.10);
   glVertex2f(0.96, -0.10);    //chair 3 stand 1 (right side)
   glVertex2f(0.96,-0.23);
   glVertex2f(0.94,-0.23);
   glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 0);
    glVertex2f(0.62,-0.10);
    glVertex2f(1,-0.10);      //table upper light shade (right side)
    glVertex2f(1, -0.17);
    glVertex2f(0.82,-0.17);
    glEnd();

    ///onti stopped

    //grass circles

     ///RAFA'S part///
  glLoadIdentity();
   GLfloat x201=0.03f; GLfloat y201=-.2f; GLfloat radius201 =.05f;     ///1st grass//
int lineAmount201 = 100;
GLfloat twicePi201 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount201;i++) {
glVertex2f(
   x201 + (radius201 * cos(i *  twicePi201 / lineAmount201)),
   y201 + (radius201* sin(i * twicePi201 / lineAmount201))
);
}
glEnd();

     GLfloat x202=-0.08f; GLfloat y202=-.26f; GLfloat radius202 =.1f;     ///2nd grass//
int lineAmount202 = 100;
GLfloat twicePi202= 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount202;i++) {
glVertex2f(
   x202 + (radius202 * cos(i *  twicePi201 / lineAmount202)),
   y202 + (radius202* sin(i * twicePi202 / lineAmount202))
);
}
glEnd();
GLfloat x203=-0.27f; GLfloat y203=-.5f; GLfloat radius203 =.1f;     ///3rd grass//
int lineAmount203 = 100;
GLfloat twicePi203= 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount203;i++) {
glVertex2f(
   x203 + (radius203* cos(i *  twicePi203 / lineAmount203)),
   y203 + (radius203* sin(i * twicePi203 / lineAmount203))
);
}
glEnd();
     GLfloat x300=-0.33f; GLfloat y300=-.63f; GLfloat radius300 =.08f;     ///4th grass//
int lineAmount300 = 100;
GLfloat twicePi300 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount300;i++) {
glVertex2f(
   x300 + (radius300* cos(i *  twicePi300 / lineAmount300)),
   y300+ (radius300* sin(i * twicePi300 / lineAmount300))
);
}
glEnd();
     GLfloat x301=-0.48f; GLfloat y301=-.75f; GLfloat radius301 =.13f;     ///5th grass//
int lineAmount301 = 100;
GLfloat twicePi301 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount301;i++) {
glVertex2f(
   x301 + (radius301 * cos(i *  twicePi301 / lineAmount301)),
   y301 + (radius301* sin(i * twicePi301 / lineAmount301))
);
}
glEnd();

GLfloat x302=-0.56f; GLfloat y302=-.93f; GLfloat radius302 =.1f;     ///6th grass//
int lineAmount302 = 100;
GLfloat twicePi302 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount302;i++) {
glVertex2f(
   x302 + (radius302 * cos(i *  twicePi302 / lineAmount302)),
   y302 + (radius302* sin(i * twicePi302 / lineAmount302))
);
}
glEnd();

GLfloat x303=0.61f; GLfloat y303=-.43f; GLfloat radius303 =.1f;     ///7th grass//
int lineAmount303 = 100;
GLfloat twicePi303 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount303;i++) {
glVertex2f(
   x303 + (radius303 * cos(i *  twicePi303 / lineAmount303)),
   y303 + (radius303* sin(i * twicePi303 / lineAmount303))
);
}
glEnd();

GLfloat x304=0.7f; GLfloat y304=-.53f; GLfloat radius304 =.07f;     ///8th grass//
int lineAmount304 = 100;
GLfloat twicePi304 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount304;i++) {
glVertex2f(
   x304 + (radius304 * cos(i *  twicePi304 / lineAmount304)),
   y304 + (radius304* sin(i * twicePi304 / lineAmount304))
);
}
glEnd();

    GLfloat x305=0.83f; GLfloat y305=-.6f; GLfloat radius305 =.1f;     ///9th grass//
int lineAmount305 = 100;
GLfloat twicePi305 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount305;i++) {
glVertex2f(
   x305 + (radius305 * cos(i *  twicePi305 / lineAmount305)),
   y305 + (radius305* sin(i * twicePi305 / lineAmount305))
);
}
glEnd();

        GLfloat x306=0.9f; GLfloat y306=-.7f; GLfloat radius306 =.06f;     ///10th grass//
int lineAmount306 = 100;
GLfloat twicePi306 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount306;i++) {
glVertex2f(
   x306 + (radius306 * cos(i *  twicePi306 / lineAmount306)),
   y306 + (radius306* sin(i * twicePi306 / lineAmount306))
);
}
glEnd();

GLfloat x307=1.0f; GLfloat y307=-.78f; GLfloat radius307 =.1f;     ///11th grass//
int lineAmount307= 100;
GLfloat twicePi307 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 0);
for(int i = 0; i <= lineAmount307;i++) {
glVertex2f(
   x307 + (radius307 * cos(i *  twicePi307 / lineAmount307)),
   y307 + (radius307* sin(i * twicePi307 / lineAmount307))
);
}
glEnd();
/// Rafa's part finish///

//grass circle ends
 ///onti's part


    glLineWidth(3.5);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.15, -0.12);
    glVertex2f(-0.30,-0.15);      //Umbrella_1 lower part Left side
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.45, -0.12);
    glVertex2f(-0.30,-0.15);      //Umbrella_1 lower part Left side
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(115, 77, 38);
    glVertex2f(-0.30, -0.15);
    glVertex2f(-0.30,-0.35);      //Umbrella_1 stand Left side
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(255, 153, 51);
    glVertex2f(-0.60, -0.20);
    glVertex2f(-0.28,-0.20);      //Umbrella_2 Left side
    glVertex2f(-0.28,-0.24);
    glVertex2f(-0.60,-0.24);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.60, -0.24);
    glVertex2f(-0.44,-0.27);      //Umbrella_2 lower part Left side
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.28, -0.24);
    glVertex2f(-0.44,-0.27);      //Umbrella_2 lower part Left side
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(115, 77, 38);
    glVertex2f(-0.44, -0.27);
    glVertex2f(-0.44,-0.49);      //Umbrella_2 stand Left side
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 153, 51);
    glVertex2f(-0.38, -0.28);
    glVertex2f(-0.38,-0.32);      //Umbrella_3 Left side
    glVertex2f(-0.88,-0.32);
    glVertex2f(-0.88,-0.28);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.88, -0.32);
    glVertex2f(-0.63,-0.35);      //Umbrella_3 lower part Left side
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.38, -0.32);
    glVertex2f(-0.63,-0.35);      //Umbrella_3 lower part Left side
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(115, 77, 38);
    glVertex2f(-0.63, -0.35);
    glVertex2f(-0.63,-0.58);      //Umbrella_3 stand Left side
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 153, 51);
    glVertex2f(-0.15, -0.08);
    glVertex2f(-0.15,-0.12);      //Umbrella_3 Left side
    glVertex2f(-0.45,-0.12);
    glVertex2f(-0.45,-0.08);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 51, 0);
    glVertex2f(-1,-0.595);
    glVertex2f(-0.59,-0.595);      //bench on left side
    glVertex2f(-0.78, -0.69);
    glVertex2f(-1.0,-0.69);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 51, 0);
    glVertex2f(-1,-0.595);
    glVertex2f(-1,-0.45);      //bench upper part on left side
    glVertex2f(-0.78, -0.45);
    glVertex2f(-0.78,-0.69);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(115, 77, 38);
    glVertex2f(-1,-0.69);        //bench color shading
    glVertex2f(-0.78,-0.595);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(115, 77, 38);
    glVertex2f(-1.0,-0.56);        //bench color shading
    glVertex2f(-0.78,-0.49);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(51, 51, 0);
    glVertex2f(-1.0,-0.69);
    glVertex2f(-0.98,-0.69);      //bench stand 1 left side
    glVertex2f(-0.98, -0.77);
    glVertex2f(-1.0, -0.77);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51,51,0);
    glVertex2f(-0.78, -0.69);
    glVertex2f(-0.80,-0.69);      //bench stand 2 left side
    glVertex2f(-0.80,-0.77);
    glVertex2f(-0.78,-0.77);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 51, 0);
    glVertex2f(-0.59,-0.595);
    glVertex2f(-0.61,-0.595);      //bench stand 3 left side
    glVertex2f(-0.61, -0.66);
    glVertex2f(-0.59,-0.66);
    glEnd();
    GLfloat x402=-0.4f;GLfloat y402=0.8f;GLfloat radius402 =.1f;
  int triangleAmount402 = 20; //# of triangles used to draw circle
	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi402= 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x402, y402); //
		for(int i = 0; i <= triangleAmount402;i++) {
			glVertex2f(
		            x402 + (radius402 * cos(i *  twicePi402 / triangleAmount402)),
			    y402 + (radius402 * sin(i * twicePi402 / triangleAmount402))
			);
		}
	glEnd();
    glutTimerFunc(4000,disback1,0);

    glPointSize(3);
    glBegin(GL_POINTS);
	glColor3ub(255,255,255);// stars
    glVertex2f(-0.7f, 0.8f);
    glVertex2f(-0.8f, 0.7f);
    glVertex2f(-0.9f, 0.9f);
    glVertex2f(-0.6f, 0.8f);
    glVertex2f(-0.5f, .9f);
    glVertex2f(-0.2f, 0.8f);
    glVertex2f(-0.3f, 0.6f);
    glVertex2f(-0.1f, 0.9f);
    glVertex2f(-0.0f, 0.8f);
    glVertex2f(0.1f, 0.8f);
    glVertex2f(0.2, 0.8f);
    glVertex2f(0.3f, 1.0f);
    glVertex2f(0.4f, 0.9f);
    glVertex2f(0.5f, 1.0f);
    glVertex2f(0.6f, 0.9f);
    glVertex2f(0.7f, 0.9f);
    glVertex2f(0.8f, 0.8f);
    glEnd();
    	///cloudAnother
int f;
int triangleAmount00 = 20; //# of triangles used to draw circle

	GLfloat twicePi00 = 2.0f * PI;

	GLfloat x00=-0.8f; GLfloat y00=0.6f; GLfloat radius00 =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x00, y00); // Cloud 1
		for(i = 0; i <= triangleAmount00;i++) {
			glVertex2f(
		            x00 + (radius00 * cos(i *  twicePi00 / triangleAmount00)),
			    y00 + (radius00 * sin(i * twicePi00 / triangleAmount00))
			);
		}
	glEnd();
	x=-0.6f; y=0.6f;radius =.17f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 2
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.4f; y=0.6f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 3
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glLoadIdentity();
    glTranslatef(0.5,0.5,0);
    glScalef(0.5,0.5,0);
	x=-0.8f; y=0.6f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 1.1
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.6f; y=0.6f;radius =.17f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 2.1
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.4f; y=0.6f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 3.1
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glLoadIdentity();
	///anotherCloud close
	///zilani' part close
    glPushMatrix();
    glTranslatef(0.0,position3,0.0);
	glBegin(GL_LINES);          //rains..///
	glColor3ub(0,0,0);
	glLoadIdentity();
	glVertex2f(-.9,.8);
	glVertex2f(-.9,.7);
	glVertex2f(-.9,.5);
	glVertex2f(-.9,.4);
	glVertex2f(-.9,.2);
	glVertex2f(-.9,.1);
	glVertex2f(-.7,.8);
	glVertex2f(-.7,.7);
	glVertex2f(-.7,.5);
	glVertex2f(-.7,.4);
	glVertex2f(-.7,.2);
	glVertex2f(-.7,.1);
	glVertex2f(-.5,.8);
	glVertex2f(-.5,.7);
	glVertex2f(-.5,.5);
	glVertex2f(-.5,.4);
	glVertex2f(-.5,.2);
	glVertex2f(-.5,.1);
	glVertex2f(-.3,.8);
	glVertex2f(-.3,.7);
	glVertex2f(-.3,.5);
	glVertex2f(-.3,.4);
	glVertex2f(-.3,.2);
	glVertex2f(-.3,.1);
	glVertex2f(-.1,.8);
	glVertex2f(-.1,.7);
	glVertex2f(-.1,.5);
	glVertex2f(-.1,.4);
	glVertex2f(-.1,.2);
	glVertex2f(-.1,.1);
	glVertex2f(.2,.8);
	glVertex2f(.2,.7);
	glVertex2f(.2,.5);
	glVertex2f(.2,.4);
	glVertex2f(.2,.2);
	glVertex2f(.2,.1);
	glVertex2f(.4,.8);
	glVertex2f(.4,.7);
	glVertex2f(.4,.5);
	glVertex2f(.4,.4);
	glVertex2f(.4,.2);
	glVertex2f(.4,.1);
    glVertex2f(.6,.8);
	glVertex2f(.6,.7);
	glVertex2f(.6,.5);
	glVertex2f(.6,.4);
	glVertex2f(.6,.2);
	glVertex2f(.6,.1);
	glVertex2f(.8,.8);
	glVertex2f(.8,.7);
	glVertex2f(.8,.5);
	glVertex2f(.8,.4);
	glVertex2f(.8,.2);
	glVertex2f(.8,.1);


	glEnd();
	glPopMatrix();
    glFlush();
}
void night_demo(int val) {

 glutDisplayFunc(night);


}
void sound()
{

    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME);
    PlaySound("a.wav", NULL,SND_ASYNC|SND_FILENAME);

}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(700,700);
    glutCreateWindow("AIUB Campus View");
    glutDisplayFunc(morning);
    glutDisplayFunc(night);
    ///sky,bird move open
    glutTimerFunc(100, updateSky1, 0);
    glutTimerFunc(100, updateBird, 0);
    ///sky.bird move close
    glutTimerFunc(100, update3, 0);
    sound();
    ///fish move
    glutTimerFunc(100, updatefish1, 0);
     glutTimerFunc(100, updateBird1, 0);
    //glutTimerFunc(100, updatefish2, 0);


    glutMainLoop();
    return 0;

}

