#include <iostream>
#include <GL/glut.h> 

using namespace std;

void display() { //placeholder
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINES);
	glVertex2f(-0.5, 0.5);
	glVertex2f(0.5, 0.5);
	glEnd();
	glFlush();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(1920, 1080);
	glutCreateWindow("Playground Scene");
	glClearColor(0.529f, 0.808f, 0.922f, 1.0f);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}