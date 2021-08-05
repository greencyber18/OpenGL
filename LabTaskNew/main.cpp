#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display1() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_LINES);
glColor3f(1,0,0);
glVertex2i(1,0);
glVertex2i(-1,0);
glColor3f(1,0,0);
glVertex2i(0,1);
glVertex2i(0,-1);
glEnd();





glBegin(GL_LINES);
glColor3f(1,0,0);

glVertex2f(.2f,.2f);
glVertex2f(.6f,.2f);
glVertex2f(.6f,.2f);
glVertex2f(.4f,.6f);
glVertex2f(.4f,.6f);
glVertex2f(.2f,.2f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0,1,0);
glVertex2f(-.2f,-.2f);
glVertex2f(-.6f,-.2f);
glVertex2f(-.4f,-.6f);

glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0,1);

glVertex2f(.25f,-.2f);
glVertex2f(.2f,-.25f);
glVertex2f(.2f,-.35f);
glVertex2f(.25f,-.4f);
glVertex2f(.35f,-.4f);
glVertex2f(.4f,-.35f);
glVertex2f(.4f,-.25f);
glVertex2f(.35f,-.2f);
glEnd();



glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex2f(-.2f,.2f);
glVertex2f(-.8f,.2f);
glVertex2f(-.8f,.8f);
glVertex2f(-.2f,.8f);
glEnd();


	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display1);
	glutMainLoop();
	return 0;
}


