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
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Playground Scene"); 
	glutDisplayFunc(display); 
	glutMainLoop(); 
	return 0;
}