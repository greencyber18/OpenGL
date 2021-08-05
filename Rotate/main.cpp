
#include <windows.h>  // for MS Windows
#include<GL/glut.h> // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
#include<cstdio>
#include <GL/gl.h>

GLfloat i = 0.0f;
void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}




void display() {
	glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);




glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(-0.03,0.0);
glVertex2f(-0.03,-0.6);
glVertex2f(0.03,-0.6);
glVertex2f(0.03,0.0);


glEnd();

        glPushMatrix();
glRotatef(i,0.0,0.0,0.1);

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);

glVertex2f(0,0);
glVertex2f(-0.3,-0.225);
glVertex2f(-0.225,-0.24);

glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);

glVertex2f(0,0);
glVertex2f(-0.05,0.3);
glVertex2f(0.05,0.3);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);

glVertex2f(0,0);
glVertex2f(0.3,-0.16);
glVertex2f(0.225,-0.22);
glEnd();

  glPopMatrix();//glPopMatrix pops the top matrix off the stack
    i+=0.1f;
	glFlush();


}

int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint

    glutIdleFunc(Idle);

	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
