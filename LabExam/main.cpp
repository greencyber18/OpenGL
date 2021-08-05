
#include <windows.h>  // for MS Windows
#include<GL/glut.h> // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
#include<cstdio>
#include <GL/gl.h>


GLfloat position1 = 0.0f;
GLfloat speed1 = 0.00f;



void update(int value) {

    if(position1 <-1.0)
        position1 += 1.0f;

    position1 -= speed1;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}



void display() {
	glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS);
glColor3ub(18, 18, 71);


glVertex2f(-1.0,-0.6);
glVertex2f(1.0,-0.6);
glVertex2f(1.0,1.0);
glVertex2f(-1.0,1.0);


glEnd();
 glBegin(GL_QUADS);  //Filed
glColor3ub(58, 148, 52);


glVertex2f(-1.0,-0.6);
glVertex2f(-1.0,-1.0);
glVertex2f(1.0,-1.0);
glVertex2f(1.0,-0.6);


glEnd();


////////////////////////
//other code
glBegin(GL_POLYGON);  //Full
glColor3ub(153, 204, 255);

glVertex2f(-0.875,0.4);
glVertex2f(-0.875,-0.7);
glVertex2f(0.625,-0.7);
glVertex2f(0.625,0.8);
glVertex2f(-0.5,0.8);
glEnd();


glBegin(GL_POLYGON);  //DoorLock
glColor3ub(152, 156, 155);

glVertex2f(-0.5,-0.3);
glVertex2f(-0.5,-0.7);
glVertex2f(0.625,-0.7);
glVertex2f(0.625,-0.2);
glVertex2f(-0.5,-0.2);
glEnd();



glBegin(GL_POLYGON);  //DoorLock
glColor3ub(191, 201, 201);

glVertex2f(-0.5,0.1);
glVertex2f(-0.5,-0.3);
glVertex2f(-0.5,-0.2);
glVertex2f(0.625,-0.2);
glVertex2f(0.625,0.2);
glVertex2f(-0.5,0.2);
glEnd();


glBegin(GL_LINES);  //DoorLock
glColor3ub(0,0,0);

glVertex2f(-0.5,0.8);
glVertex2f(-0.5,-0.7);

glEnd();


glBegin(GL_QUADS);  //DoorLock
glColor3ub(191, 201, 201);

glVertex2f(-0.25,0.2);
glVertex2f(-0.25,0.8);
glVertex2f(-0.5,0.8);
glVertex2f(-0.5,0.1);


glEnd();



glBegin(GL_QUADS);  //GGlass 1
glColor3ub(55, 112, 204);

glVertex2f(-0.45,-0.00);
glVertex2f(-0.45,-0.12);
glVertex2f(0.6,-0.12);
glVertex2f(0.6,-0.00);


glEnd();




glBegin(GL_LINES);  //Line1
glColor3ub(0,0,0);

glVertex2f(-0.325,-0.00);
glVertex2f(-0.325,-0.12);
glVertex2f(-0.225,-0.00);
glVertex2f(-0.225,-0.12);
glVertex2f(-0.125,-0.00);
glVertex2f(-0.125,-0.12);
glVertex2f(-0.025,-0.00);
glVertex2f(-0.025,-0.12);
glVertex2f(0.1,0.00);
glVertex2f(0.1,-0.12);
glVertex2f(0.2,-0.00);
glVertex2f(0.2,-0.12);
glVertex2f(0.3,-0.00);
glVertex2f(0.3,-0.12);
glVertex2f(0.4,-0.00);
glVertex2f(0.4,-0.12);

glVertex2f(0.5,-0.00);
glVertex2f(0.5,-0.12);


glEnd();



glBegin(GL_QUADS);  //DoorLock
glColor3ub(55, 112, 204);

glVertex2f(-0.45,0.06);
glVertex2f(0.6,0.06);
glVertex2f(0.6,0.18);
glVertex2f(-0.45,0.18);


glEnd();


glBegin(GL_LINES);  //Line1
glColor3ub(0,0,0);


glVertex2f(-0.325,0.06);
glVertex2f(-0.325,0.18);

glVertex2f(-0.225,0.06);
glVertex2f(-0.225,0.18);
glVertex2f(-0.125,0.06);
glVertex2f(-0.125,0.18);
glVertex2f(-0.025,0.06);
glVertex2f(-0.025,0.18);
glVertex2f(0.1,0.06);
glVertex2f(0.1,0.18);
glVertex2f(0.2,0.06);
glVertex2f(0.2,0.18);
glVertex2f(0.3,0.06);
glVertex2f(0.3,0.18);
glVertex2f(0.4,0.06);
glVertex2f(0.4,0.18);

glVertex2f(0.5,0.06);
glVertex2f(0.5,0.18);
glEnd();


glBegin(GL_QUADS);  //DoorLock
glColor3ub(191, 201, 201);

glVertex2f(-0.425,0.4);
glVertex2f(-0.425,0.2);
glVertex2f(0.625,0.2);
glVertex2f(0.625,0.4);


glEnd();



glBegin(GL_QUADS);  //DoorLock
glColor3ub(55, 112, 204);

glVertex2f(-0.45,0.34);
glVertex2f(-0.45,0.23);
glVertex2f(0.6,0.23);
glVertex2f(0.6,0.34);


glEnd();

glBegin(GL_LINES);  //Line1
glColor3ub(0,0,0);


glVertex2f(-0.325,0.34);
glVertex2f(-0.325,0.23);
glVertex2f(-0.225,0.34);
glVertex2f(-0.225,0.23);
glVertex2f(-0.125,0.34);
glVertex2f(-0.125,0.23);
glVertex2f(-0.025,0.34);
glVertex2f(-0.025,0.23);
glVertex2f(0.1,0.34);
glVertex2f(0.1,0.23);
glVertex2f(0.2,0.34);
glVertex2f(0.2,0.23);
glVertex2f(0.3,0.34);
glVertex2f(0.3,0.23);
glVertex2f(0.4,0.34);
glVertex2f(0.4,0.23);
glVertex2f(0.5,0.34);
glVertex2f(0.5,0.23);


glEnd();



glBegin(GL_QUADS);  //DoorLock
glColor3ub(191, 201, 201);

glVertex2f(-0.25,0.7);
glVertex2f(-0.425,0.6);
glVertex2f(0.625,0.6);
glVertex2f(0.625,0.7);


glEnd();

glBegin(GL_QUADS);
glColor3ub(191, 201, 201);

glVertex2f(-0.25,0.55);
glVertex2f(-0.425,0.45);
glVertex2f(0.625,0.45);
glVertex2f(0.625,0.55);


glEnd();


glBegin(GL_QUADS);
glColor3ub(97, 255, 255);

glVertex2f(-0.45,-0.26);
glVertex2f(-0.45,-0.64);
glVertex2f(0.6,-0.64);
glVertex2f(0.6,-0.26);


glEnd();


glBegin(GL_LINES);
glColor3ub(0,0,0);

glVertex2f(-0.45,-0.45);
glVertex2f(0.6,-0.45);



glVertex2f(-0.15,-0.45);
glVertex2f(-0.15,-0.64);


glVertex2f(-0.05,-0.45);
glVertex2f(-0.05,-0.64);

glVertex2f(0.15,-0.45);
glVertex2f(0.15,-0.64);
glEnd();

glBegin(GL_QUADS);  //Full
glColor3ub(153, 204, 255);

glVertex2f(-0.5,0.34);
glVertex2f(-0.5,-0.7);
glVertex2f(-0.35,-0.7);
glVertex2f(-0.35,0.34);

glEnd();

glBegin(GL_QUADS);  //Full
glColor3ub(153, 204, 255);



glVertex2f(-0.35,0.0);
glVertex2f(-0.35,-0.7);

glVertex2f(-0.25,-0.7);
glVertex2f(-0.25,0.0);


glEnd();

glBegin(GL_QUADS);  //Full
glColor3ub(153, 204, 255);



glVertex2f(0.625,-0.2);
glVertex2f(0.625,-0.7);

glVertex2f(0.95,-0.7);
glVertex2f(0.95,-0.2);


glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);

glVertex2f(0.625,-0.45);
glVertex2f(0.95,-0.45);
glVertex2f(0.725,-0.45);
glVertex2f(0.725,-0.7);
glVertex2f(0.9,-0.45);
glVertex2f(0.9,-0.7);
 glEnd();



           glPushMatrix();
glTranslatef(0.0f, position1,0.0f);

 glBegin(GL_LINES);  //Line1
glColor3ub(0, 0, 0);

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
void SpecialInput(int key, int x, int y)
{
switch(key)
{case GLUT_KEY_UP:
speed1=0.3;
break;
case GLUT_KEY_DOWN:

break;
case GLUT_KEY_LEFT:

break;
case GLUT_KEY_RIGHT:

break;
}
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutSpecialFunc(SpecialInput);
   glutTimerFunc(100, update, 0);



	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
