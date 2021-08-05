
#include <windows.h>  // for MS Windows
#include<GL/glut.h> // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
#include<cstdio>
#include <GL/gl.h>





void display() {
	glClearColor(0.0f, 1.0f, 1.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);


     glBegin(GL_LINES);
glColor3ub(0, 0, 255);
glVertex2f(-0.9f,0.4f);
glVertex2f(-0.86f,0.55f);
glVertex2f(-0.86f,0.55f);
glVertex2f(-0.82f,0.4f);
glVertex2f(-0.88,0.49f);
glVertex2f(-0.84,0.49f);

//A

glVertex2f(-0.8f,0.55f);
glVertex2f(-0.75f,0.55f);

glVertex2f(-0.7f,0.4f);
glVertex2f(-0.75f,0.4f);
glVertex2f(-0.775,0.55f);
glVertex2f(-0.775,0.4f);


//I

glVertex2f(-0.72f,0.55f);
glVertex2f(-0.72f,0.4f);

glVertex2f(-0.72f,0.4f);
glVertex2f(-0.67,0.4f);

glVertex2f(-0.67,0.4f);
glVertex2f(-0.67,0.55f);
//U


glVertex2f(-0.63f,0.55f);
glVertex2f(-0.63f,0.4f);

glVertex2f(-0.63f,0.55f);
glVertex2f(-0.6,0.5f);


glVertex2f(-0.6,0.5);
glVertex2f(-0.63f,0.48f);


glVertex2f(-0.63f,0.48f);
glVertex2f(-0.6f,0.44f);

glVertex2f(-0.6f,0.44f);
glVertex2f(-0.63f,0.4f);

glEnd();
glBegin(GL_QUADS);
	glColor3ub(25, 148, 37);
	glVertex2f(-1.0,0.0);
	glVertex2f(-1.0,-1.0);
	glVertex2f(1.0,-1.0);
	glVertex2f(1.0,0.0);

	glEnd();

int i;

	GLfloat x=0.0f; GLfloat y=0.2f; GLfloat radius =.62f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
glColor3ub(92, 126, 135);
	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



glBegin(GL_QUADS);
	glColor3ub(68, 104, 194);
	glVertex2f(-0.625,-0.5);
	glVertex2f(-0.625,-0.8);
	glVertex2f(0.625,-0.8);
	glVertex2f(0.625,-0.5);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(-0.25,-0.3);
	glVertex2f(-0.25,-0.65);
	glVertex2f(0.25,-0.65);
	glVertex2f(0.25,-0.3);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(76, 156, 153);
	glVertex2f(-0.125,-0.4);
	glVertex2f(-0.125,-0.65);
	glVertex2f(0.125,-0.65);
	glVertex2f(0.125,-0.4);
	glEnd();


    glBegin(GL_QUADS);
    glColor3ub(19, 171, 212);
    glVertex2f(-0.43,0.62);
    glVertex2f(-0.52,0.53);
     glVertex2f(0.52,0.53);
    glVertex2f(0.43,0.62);



    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(19, 171, 212);
    glVertex2f(-0.58,0.42);
    glVertex2f(-0.61,0.29);
    glVertex2f(0.61,0.29);
    glVertex2f(0.58,0.42);
    glEnd();



glBegin(GL_QUADS);
    glColor3ub(19, 171, 212);
    glVertex2f(-0.61,0.15);
    glVertex2f(-0.59,0.03);
    glVertex2f(0.59,0.03);
    glVertex2f(0.61,0.15);


    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(19, 171, 212);
    glVertex2f(-0.55,-0.07);
    glVertex2f(-0.5,-0.15);
    glVertex2f(0.5,-0.15);
    glVertex2f(0.55,-0.07);


    glEnd();

    int j;
    x=.7f;  y=.7f; radius =.15f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252, 186, 3);
		glVertex2f(x, y); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x + (radius * cos(j *  twicePi / triangleAmount)),
			    y + (radius * sin(j * twicePi / triangleAmount))
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
