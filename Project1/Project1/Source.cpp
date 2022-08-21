#include <glut.h>

void display()

{

	glClear(GL_COLOR_BUFFER_BIT);



	glBegin(GL_POLYGON);



	glColor3f(1, 0, 0);



	glVertex3f(0, 0, 0);



	glColor3f(0, 1, 0);



	glVertex3f(0.5, 0.5, 0.5);



	glColor3f(0, 0, 1);



	glVertex3f(0.5, 0, 0.5);



	glEnd();



	glFlush();



}



int main(int argc, char** argv)

{

	glutInit(&argc, argv);



	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);



	glutInitWindowPosition(80, 80);



	glutInitWindowSize(800, 600);



	glutCreateWindow("Lab 2 Exercise: A Triangle");



	glutDisplayFunc(display);



	glutMainLoop();







}