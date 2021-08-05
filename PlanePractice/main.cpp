
#include <windows.h>  // for MS Windows
#include<GL/glut.h> // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
#include<cstdio>
#include <GL/gl.h>





void display() {
	glClearColor(.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);





////////////////////////
//other code

glBegin(GL_QUADS);
glColor3ub(255, 0, 64);
glVertex2f(0.5,0.2);
glVertex2f(0.5,0.4);
glVertex2f(0.2,0.4);
glVertex2f(0.2,0.2);
glEnd();

/* glBegin(GL_QUADS);
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

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);

glVertex2f(-0.25,-0.4);
glVertex2f(-0.4,-0.34);
glVertex2f(-0.875,-0.46);
glVertex2f(-0.85,-0.52);


glEnd();

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

glEnd();

*/
int i;
GLfloat x=-.4f; GLfloat y=.4f; GLfloat radius =.3f;
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


	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint



	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
