#include <Windows.h>
#include <GL/freeglut.h>

void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);


	glBegin(GL_QUAD_STRIP); // Red Flag Quads 
	glColor3f(1, 0, 0);
	glVertex2f(-1, 1);
	glVertex2f(1, 1);
	glVertex2f(-1, 0.35);
	glVertex2f(1, 0.35);
	glEnd();

	glBegin(GL_QUAD_STRIP); // White Flag Quads 
	glColor3f(1, 1, 1);
	glVertex2f(-1, 0.35);
	glVertex2f(1, 0.35);
	glVertex2f(-1, -0.5);
	glVertex2f(1, -0.5);
	glEnd();

	glLineWidth(10);
	glBegin(GL_LINES); // Writing Flag Quads 
	glColor3f(0.1, 1, 0.3);
	glVertex2f(0.8, 0.2);
	glVertex2f(0.8, -0.2);
	glEnd();

	glLineWidth(10);
	glBegin(GL_LINE_STRIP); // Writing Flag Quads 
	glColor3f(0.1, 1, 0.3);
	glVertex2f(0.6, 0.2);
	glVertex2f(0.6, -0.2);
	glVertex2f(0.45, -0.2);
	glVertex2f(0.45, 0.2);
	glVertex2f(0.45, -0.2);
	glVertex2f(0.3, -0.2);
	glVertex2f(0.3, 0.2);
	glVertex2f(0.1, 0.2);
	glVertex2f(0.1, 0.1);
	glVertex2f(0.3, 0.1);
	glEnd();

	glLineWidth(10);
	glBegin(GL_LINES); // Writing Flag Quads 
	glColor3f(0.1, 1, 0.3);
	glVertex2f(-0.1, 0.2);
	glVertex2f(-0.1, -0.2);
	glEnd();

	glLineWidth(10);
	glBegin(GL_LINE_STRIP); // Writing Flag Quads 
	glColor3f(0.1, 1, 0.3);
	glVertex2f(-0.2, 0.2);
	glVertex2f(-0.4, 0.2);
	glVertex2f(-0.4, 0.0);
	glVertex2f(-0.2, 0.0);
	glVertex2f(-0.2, -0.2);
	glVertex2f(-0.5, -0.2);
	glVertex2f(-0.5, -0.05);
	glVertex2f(-0.5, -0.2);
	glVertex2f(-0.7, -0.2);
	glVertex2f(-0.7, -0.05);
	glVertex2f(-0.7, -0.4);
	glVertex2f(-0.85, -0.4);
	glEnd();

	glPointSize(10);
	glBegin(GL_POINTS);
	glColor3f(0.1, 1, 0.3);
	glVertex2f(-0.55, -0.35);
	glEnd();
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("iZeus");
	glutInitWindowSize(1920, 1080);
	glutInitWindowPosition(50, 50);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}