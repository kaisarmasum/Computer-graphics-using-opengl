#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (0.8938, 0.0, 0.184314);
glBegin(GL_POLYGON);
glVertex3f (0.25, 0.25, 0.0);
glVertex3f (0.75, 0.25, 0.0);
glVertex3f (0.75, 0.75, 0.0);
glVertex3f (0.25, 0.75, 0.0);
glEnd();

glColor3f (0.556863, 0.637255, 0.137255);
glBegin(GL_TRIANGLES);
glVertex3f (0.25, 0.75, 0.0);
glVertex3f (0.75, 0.75, 0.0);
glVertex3f (0.50, 1.00, 0.0);

glEnd();

glColor3f (0.437255, 0.560784, 0.660784);
glBegin(GL_POLYGON);
glVertex3f (0.43, 0.25, 0.0);
glVertex3f (0.57, 0.25, 0.0);
glVertex3f (0.57, 0.65, 0.0);
glVertex3f (0.43, 0.65, 0.0);
glEnd();

glColor3f (0.637255, 0.560784, 0.560784);
glBegin(GL_POLYGON);
glVertex3f (0.28, 0.50, 0.0);
glVertex3f (0.40, 0.50, 0.0);
glVertex3f (0.40, 0.60, 0.0);
glVertex3f (0.28, 0.60, 0.0);
glEnd();

glColor3f (0.637255, 0.560784, 0.560784);
glBegin(GL_POLYGON);
glVertex3f (0.60, 0.50, 0.0);
glVertex3f (0.72, 0.50, 0.0);
glVertex3f (0.72, 0.60, 0.0);
glVertex3f (0.60, 0.60, 0.0);
glEnd();

glFlush ();
}
void init (void)
{
glClearColor (0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Home");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
