#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display1() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.0,0.0);
    glVertex2f(0.4,0.0);
    glVertex2f(0.1,0.2);
    glEnd();

    glTranslatef(0.6,0,0);
  glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.0,0.0);
    glVertex2f(0.4,0.0);
    glVertex2f(0.1,0.2);
    glEnd();

	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(400, 400);
	glutDisplayFunc(display1);
	glutMainLoop();
	return 0;
}


