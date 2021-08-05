#include<windows.h>
#include<GL/glut.h>
void display(){
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_POLYGON);
    glColor3ub(153, 204, 255);
    glVertex2f(0.75,-0.20);
    glVertex2f(0.75,0.35);
    glVertex2f(0.65,0.45);
    glVertex2f(0.65,0.8);
    glVertex2f(-0.5,0.8);
    glVertex2f(-0.6,0.68);
    glVertex2f(-0.8,0.50);
    glVertex2f(-0.9,0.43);
    glVertex2f(-0.95,0.40);
    glVertex2f(-0.95,-0.65);
    glVertex2f(0.95,-0.65);
    glVertex2f(0.95,-0.20);
    glEnd();

        glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2f(0.65,0.45);
    glVertex2f(0.65,0.60);
    glVertex2f(-0.48,0.60);
    glVertex2f(-0.48,0.45);
    glEnd();

        glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2f(0.65,0.63);
    glVertex2f(0.65,0.78);
    glVertex2f(-0.48,0.78);
    glVertex2f(-0.48,0.63);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.5,.8);
    glVertex2f(-.5,-.65);
    glEnd();

        glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.75,-.45);
    glVertex2f(.95,-.45);
    glEnd();

        glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.75,.2);
    glVertex2f(.75,-.65);
    glEnd();

            glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.5,.35);
    glVertex2f(.75,.35);
    glEnd();

            glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2f(0.73,0.32);
    glVertex2f(-0.48,0.32);
    glVertex2f(-0.48,0.18);
    glVertex2f(.73,0.18);
    glEnd();

            glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2f(0.73,0.13);
    glVertex2f(-0.48,0.13);
    glVertex2f(-0.48,-0.00);
    glVertex2f(0.73,-0.0);
    glEnd();

            glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2f(0.73,-0.03);
    glVertex2f(-0.48,-0.03);
    glVertex2f(-0.48,-0.15);
    glVertex2f(0.73,-0.15);
    glEnd();

            glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2f(0.73,-0.18);
    glVertex2f(-0.48,-0.18);
    glVertex2f(-0.48,-0.3);
    glVertex2f(0.73,-0.3);
    glEnd();

            glBegin(GL_QUADS);
    glColor3ub(204, 255, 255);
    glVertex2f(0.73,-0.34);
    glVertex2f(-0.48,-0.34);
    glVertex2f(-0.48,-0.65);
    glVertex2f(0.73,-0.65);
    glEnd();

            glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.95,.35);
    glVertex2f(-.5,.35);
    glEnd();

            glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.95,.15);
    glVertex2f(-.5,.15);
    glEnd();

            glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.95,-.05);
    glVertex2f(-.5,-.05);
    glEnd();

            glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.95,-.25);
    glVertex2f(-.5,-.25);
    glEnd();

            glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.65,-.25);
    glVertex2f(-.65,-.65);
    glEnd();

            glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.8,-.25);
    glVertex2f(-.8,-.65);
    glEnd();

              glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.38,-.34);
    glVertex2f(-.38,-.65);
    glEnd();

                  glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.18,-.34);
    glVertex2f(-.18,-.65);
    glEnd();
              glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.05,-.34);
    glVertex2f(.05,-.65);
    glEnd();



    glFlush();
}
int main(int argc,char** argv){
    glutInit(&argc,argv);
    glutCreateWindow("OpenGLSetupTest");
    glutInitWindowSize(320,320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
