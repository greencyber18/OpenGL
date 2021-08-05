
#include <windows.h>  // for MS Windows
#include<GL/glut.h> // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
#include<cstdio>
#include <GL/gl.h>

void dis();

GLfloat i = 0.0f;
GLfloat position1 = 0.0f;
GLfloat speed1 = 0.01f;

GLfloat position2 = 0.0f;
GLfloat speed2 = 0.02f;

GLfloat position3 = 0.0f;
GLfloat speed3 = 0.02f;
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

void update3(int value) {

    if(position3 >1.0)
        position3 = -1.0f;

    position3 += speed3;

	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);
}
void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}


void display4(int val) {

 glutDisplayFunc(dis);


}

void display3() {
	glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);





////////////////////////

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-1.0,-0.6);
glVertex2f(-1.0,-1.0);
glVertex2f(1.0,-1.0);
glVertex2f(1.0,-0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(71, 60, 60);

glVertex2f(1.0,-0.6);
glVertex2f(-1.0,-0.6);
glVertex2f(-1.0,0.0);
glVertex2f(1.0,0.0);

glEnd();

glBegin(GL_QUADS);
glColor3ub(18, 18, 71);


glVertex2f(-1.0,0.0);
glVertex2f(1.0,0.0);
glVertex2f(1.0,1.0);
glVertex2f(-1.0,1.0);


glEnd();

//other code

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


glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(-0.9,-0.76);
glVertex2f(-0.9,-0.84);
glVertex2f(-0.5,-0.84);
glVertex2f(-0.5,-0.76);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(-0.3,-0.76);
glVertex2f(-0.3,-0.84);
glVertex2f(0.4,-0.84);
glVertex2f(0.4,-0.76);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(0.5,-0.76);
glVertex2f(0.5,-0.84);
glVertex2f(0.8,-0.84);
glVertex2f(0.8,-0.76);
glEnd();

glBegin(GL_QUADS);
glColor3ub(112, 22, 16);
glVertex2f(-0.05,0.0);
glVertex2f(-0.05,-0.5);
glVertex2f(0.875,-0.5);
glVertex2f(0.875,0.0);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.25,-0.3);
glVertex2f(0.25,-0.5);
glVertex2f(0.6,-0.5);
glVertex2f(0.6,-0.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub(112, 22, 16);
glVertex2f(0.125,0.0);
glVertex2f(0.7,0.0);
glVertex2f(0.7,0.3);
glVertex2f(0.125,0.3);
glEnd();

glBegin(GL_QUADS); //
glColor3ub(78, 99, 97);
glVertex2f(0.3,0.3);
glVertex2f(0.55,0.3);
glVertex2f(0.55,0.8);
glVertex2f(0.3,0.8);

glEnd();

glBegin(GL_QUADS);
glColor3ub(130, 116, 116);
glVertex2f(0.55,0.8);
glVertex2f(0.3,0.8);
glVertex2f(0.3,0.76);
glVertex2f(0.55,0.76);

glEnd();




glBegin(GL_QUADS);
glColor3ub(78, 99, 97);

glVertex2f(0.55,0.8);
glVertex2f(0.7375,0.9);
glVertex2f(0.1125,0.9);
glVertex2f(0.3,0.8);

glEnd();

//Plane Starts
//glPushMatrix();
//glTranslatef(position1,position1, 0.0f);
glBegin(GL_QUADS);
glColor3ub(108, 122, 120);

glVertex2f(-0.25,-0.4);
glVertex2f(-0.4,-0.34);
glVertex2f(-0.875,-0.46);
glVertex2f(-0.85,-0.52);


glEnd();

/* glTranslatef(0.0,0.8,0.0);

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);

glVertex2f(-0.25,-0.4);
glVertex2f(-0.4,-0.34);
glVertex2f(-0.875,-0.46);
glVertex2f(-0.85,-0.52);


glEnd();
*/
glBegin(GL_TRIANGLES);
glColor3ub(108, 122, 120);

glVertex2f(-0.775,-0.47);
glVertex2f(-0.925,-0.3);
glVertex2f(-0.875,-0.46);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);

glVertex2f(-0.525,-0.42);
glVertex2f(-0.55,-0.4);
glVertex2f(-0.575,-0.42);
glVertex2f(-0.55,-0.44);


glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);

glVertex2f(-0.625,-0.44);
glVertex2f(-0.65,-0.42);
glVertex2f(-0.675,-0.44);
glVertex2f(-0.65,-0.46);

glEnd(); //Plane End
glPopMatrix();

/*
int i;
GLfloat x=-.4f; GLfloat y=.6f; GLfloat radius =.2f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(245, 215, 28);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

*/

glBegin(GL_QUADS);
glColor3ub(78, 99, 97);
glVertex2f(-0.25,-0.2);
glVertex2f(-0.25,-0.16);
glVertex2f(-0.5,-0.16);
glVertex2f(-0.5,-0.2);
glEnd();

glBegin(GL_QUADS);
glColor3ub(78, 99, 97);
glVertex2f(-0.35,-0.2);
glVertex2f(-0.35,0.55);
glVertex2f(-0.4,0.55);
glVertex2f(-0.4,-0.2);


glEnd();

         glPushMatrix();
        glTranslatef(-0.375,0.5,0);
glRotatef(i,0.0,0.0,0.1);

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);

glVertex2f(0,0);
glVertex2f(-0.300,-0.18);
glVertex2f(-0.250,-0.22);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);

glVertex2f(0,0);
glVertex2f(-0.05,0.3);
glVertex2f(0.01,0.35);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);

glVertex2f(0,0);
glVertex2f(0.21,-0.2);
glVertex2f(0.215,-0.3);
glEnd();

  glPopMatrix();//glPopMatrix pops the top matrix off the stack
    i+=0.1f;

//glutTimerFunc(4000,display4,0);
	glFlush();


}
void display2(int val)
{
     glutDisplayFunc(display3);
}

void display() {
	glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);





////////////////////////
//other code

glPushMatrix();
glTranslatef(position2,0.0f, 0.0f);
GLfloat x4=-.2f; GLfloat y4=.8f; GLfloat radius4 =.1f;
	int triangleAmount4 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;
        glColor3f(1,1,1);
    	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x4, y4); // center of circle
		for(int i = 0; i <= triangleAmount4;i++) {
			glVertex2f(
		            x4 + (radius4 * cos(i *  twicePi4 / triangleAmount4)),
			    y4 + (radius4 * sin(i * twicePi4 / triangleAmount4))
			);
		}
	glEnd();
GLfloat x5=-.3f; GLfloat y5=.8f; GLfloat radius5 =.1f;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;

    	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x5, y5); // center of circle
		for(int i = 0; i <= triangleAmount5;i++) {
			glVertex2f(
		            x5 + (radius5 * cos(i *  twicePi5 / triangleAmount5)),
			    y5 + (radius5 * sin(i * twicePi5 / triangleAmount5))
			);
		}
	glEnd();


	GLfloat x6=-.4f; GLfloat y6=.8f; GLfloat radius6 =.1f;
	int triangleAmount6 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;
glColor3f(1,1,1);
    	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6, y6); // center of circle
		for(int i = 0; i <= triangleAmount6;i++) {
			glVertex2f(
		            x6 + (radius6 * cos(i *  twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(i * twicePi6 / triangleAmount6))
			);
		}
	glEnd();

	glPopMatrix();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-1.0,-0.6);
glVertex2f(-1.0,-1.0);
glVertex2f(1.0,-1.0);
glVertex2f(1.0,-0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(121, 128, 120);

glVertex2f(1.0,-0.6);
glVertex2f(-1.0,-0.6);
glVertex2f(-1.0,0.0);
glVertex2f(1.0,0.0);

glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(-0.9,-0.76);
glVertex2f(-0.9,-0.84);
glVertex2f(-0.5,-0.84);
glVertex2f(-0.5,-0.76);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(-0.3,-0.76);
glVertex2f(-0.3,-0.84);
glVertex2f(0.4,-0.84);
glVertex2f(0.4,-0.76);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(0.5,-0.76);
glVertex2f(0.5,-0.84);
glVertex2f(0.8,-0.84);
glVertex2f(0.8,-0.76);
glEnd();

glBegin(GL_QUADS);
glColor3ub(112, 22, 16);
glVertex2f(-0.05,0.0);
glVertex2f(-0.05,-0.5);
glVertex2f(0.875,-0.5);
glVertex2f(0.875,0.0);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.25,-0.3);
glVertex2f(0.25,-0.5);
glVertex2f(0.6,-0.5);
glVertex2f(0.6,-0.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub(112, 22, 16);
glVertex2f(0.125,0.0);
glVertex2f(0.7,0.0);
glVertex2f(0.7,0.3);
glVertex2f(0.125,0.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(0.3,0.3);
glVertex2f(0.55,0.3);
glVertex2f(0.55,0.8);
glVertex2f(0.3,0.8);

glEnd();

glBegin(GL_QUADS);
glColor3ub(130, 116, 116);
glVertex2f(0.55,0.8);
glVertex2f(0.3,0.8);
glVertex2f(0.3,0.76);
glVertex2f(0.55,0.76);

glEnd();




glBegin(GL_QUADS);
glColor3ub(255, 255, 255);

glVertex2f(0.55,0.8);
glVertex2f(0.7375,0.9);
glVertex2f(0.1125,0.9);
glVertex2f(0.3,0.8);

glEnd();

//Plane Starts
glPushMatrix();
glTranslatef(position1,position1, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255, 255, 255);

glVertex2f(-0.25,-0.4);
glVertex2f(-0.4,-0.34);
glVertex2f(-0.875,-0.46);
glVertex2f(-0.85,-0.52);


glEnd();

/* glTranslatef(0.0,0.8,0.0);

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);

glVertex2f(-0.25,-0.4);
glVertex2f(-0.4,-0.34);
glVertex2f(-0.875,-0.46);
glVertex2f(-0.85,-0.52);


glEnd();
*/
glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255);

glVertex2f(-0.775,-0.47);
glVertex2f(-0.925,-0.3);
glVertex2f(-0.875,-0.46);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);

glVertex2f(-0.525,-0.42);
glVertex2f(-0.55,-0.4);
glVertex2f(-0.575,-0.42);
glVertex2f(-0.55,-0.44);


glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);

glVertex2f(-0.625,-0.44);
glVertex2f(-0.65,-0.42);
glVertex2f(-0.675,-0.44);
glVertex2f(-0.65,-0.46);

glEnd(); //Plane End
glPopMatrix();

/*
int i;
GLfloat x=-.4f; GLfloat y=.6f; GLfloat radius =.2f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(245, 215, 28);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

*/

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(-0.25,-0.2);
glVertex2f(-0.25,-0.16);
glVertex2f(-0.5,-0.16);
glVertex2f(-0.5,-0.2);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(-0.35,-0.2);
glVertex2f(-0.35,0.55);
glVertex2f(-0.4,0.55);
glVertex2f(-0.4,-0.2);


glEnd();

         glPushMatrix();
        glTranslatef(-0.375,0.5,0);
glRotatef(i,0.0,0.0,0.1);

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);

glVertex2f(0,0);
glVertex2f(-0.300,-0.18);
glVertex2f(-0.250,-0.22);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);

glVertex2f(0,0);
glVertex2f(-0.05,0.3);
glVertex2f(0.01,0.35);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);

glVertex2f(0,0);
glVertex2f(0.21,-0.2);
glVertex2f(0.215,-0.3);
glEnd();

  glPopMatrix();//glPopMatrix pops the top matrix off the stack
    i+=0.1f;


glPushMatrix();
glTranslatef(position3,0.0f, 0.0f);
glBegin(GL_LINES);
glColor3ub(0,0,0);

glVertex2f(-0.8,0.9);
glVertex2f(-0.75,0.8);
glVertex2f(-0.75,0.8);
glVertex2f(-0.7,0.9);
glEnd();


glBegin(GL_LINES);
glColor3ub(0,0,0);

glVertex2f(-0.6,0.9);
glVertex2f(-0.55,0.8);
glVertex2f(-0.55,0.8);
glVertex2f(-0.5,0.9);
glEnd();
glPopMatrix();

//glutTimerFunc(10000,display2,2);

	glFlush();


}

void sound()
{

    PlaySound("707.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}

void sound2()
{

    PlaySound("crick.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}
/*void SpecialInput(int key, int x, int y)
{
switch(key)
{case GLUT_KEY_UP:
speed1=.2;
break;
case GLUT_KEY_DOWN:

break;
case GLUT_KEY_LEFT:

break;
case GLUT_KEY_RIGHT:
    speed1=0.0;
break;
}
}

*/
void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
glutDisplayFunc(display3);
sound2();

			}
			if (button == GLUT_RIGHT_BUTTON)
	{
	    glutDisplayFunc(display);
	    sound();			}
}







/*
void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'a':
    speed2 = 0.0f;
    break;
case 'w':
    speed2 = 0.1f;
    break;

        case 'c':
            speed3 = 0.3f;
    break;
            case 'v':
                speed3 = 0.0f;
    break;

	}
} */

void dis()
{
       glutDisplayFunc(display);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
glutDisplayFunc(dis);
	 // Register display callback handler for window re-paint

    glutIdleFunc(Idle);

glutMouseFunc(handleMouse);
    glutTimerFunc(100, update1, 0);
     glutTimerFunc(100, update3, 0);
       glutTimerFunc(100, update2, 0);

sound();
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
