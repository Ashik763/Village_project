#include<GL/gl.h>
#include<iostream>
#include <GL/glut.h>

// Camera position and rotation
float cameraX = 0.0f;
float cameraY = 500.0f;
float cameraZ = 1000.0f;
float cameraRotX = 0.0f;
float cameraRotY = 0.0f;

//land
void land()
{
    glColor3f(0.5, 1.0, 0.5);
    glBegin(GL_QUADS);
    glVertex3f(-600.0f, 0.0f, -600.0f);
    glVertex3f(600.0f, 0.0f, -600.0f);
    glVertex3f(600.0f, 0.0f, 600.0f);
    glVertex3f(-600.0f, 0.0f, 600.0f);
    glEnd();
}

///house
void house()
{
    // House 1
    // Main body
    glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);
    glBegin(GL_QUADS);
    glVertex3f(-380.0f, 0.0f, -100.0f);
    glVertex3f(-220.0f, 0.0f, -100.0f);
    glVertex3f(-220.0f, 100.0f, -100.0f);
    glVertex3f(-380.0f, 100.0f, -100.0f);
    glEnd();

    // Roof
    glColor3f(0, 0, 1);
    glBegin(GL_TRIANGLES);
    glVertex3f(-400.0f, 100.0f, -100.0f);
    glVertex3f(-200.0f, 100.0f, -100.0f);
    glVertex3f(-300.0f, 200.0f, -100.0f);
    glEnd();

    // Door
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-320.0f, 0.0f, -99.0f);
    glVertex3f(-280.0f, 0.0f, -99.0f);
    glVertex3f(-280.0f, 80.0f, -99.0f);
    glVertex3f(-320.0f, 80.0f, -99.0f);
    glEnd();

    // House 2
    // Main body
    glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);
    glBegin(GL_QUADS);
    glVertex3f(-80.0f, 0.0f, -100.0f);
    glVertex3f(80.0f, 0.0f, -100.0f);
    glVertex3f(80.0f, 100.0f, -100.0f);
    glVertex3f(-80.0f, 100.0f, -100.0f);
    glEnd();

    // Roof
    glColor3f(1.444, 0.5, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(-100.0f, 100.0f, -100.0f);
    glVertex3f(100.0f, 100.0f, -100.0f);
    glVertex3f(0.0f, 200.0f, -100.0f);
    glEnd();

    // Door
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-20.0f, 0.0f, -99.0f);
    glVertex3f(20.0f, 0.0f, -99.0f);
    glVertex3f(20.0f, 80.0f, -99.0f);
    glVertex3f(-20.0f, 80.0f, -99.0f);
    glEnd();
}

void house3d()
{
    // Main body
    glColor3f(0.5, 0.2, 0.1);
    glBegin(GL_QUADS);
    // Front face
    glVertex3f(200.0f, 0.0f, 100.0f);
    glVertex3f(400.0f, 0.0f, 100.0f);
    glVertex3f(400.0f, 150.0f, 100.0f);
    glVertex3f(200.0f, 150.0f, 100.0f);
    
    // Back face
    glVertex3f(200.0f, 0.0f, -100.0f);
    glVertex3f(400.0f, 0.0f, -100.0f);
    glVertex3f(400.0f, 150.0f, -100.0f);
    glVertex3f(200.0f, 150.0f, -100.0f);
    
    // Left face
    glVertex3f(200.0f, 0.0f, -100.0f);
    glVertex3f(200.0f, 0.0f, 100.0f);
    glVertex3f(200.0f, 150.0f, 100.0f);
    glVertex3f(200.0f, 150.0f, -100.0f);
    
    // Right face
    glVertex3f(400.0f, 0.0f, -100.0f);
    glVertex3f(400.0f, 0.0f, 100.0f);
    glVertex3f(400.0f, 150.0f, 100.0f);
    glVertex3f(400.0f, 150.0f, -100.0f);
    glEnd();

    // Roof
    glColor3f(0.2, 0.2, 0.1);
    glBegin(GL_QUADS);
    glVertex3f(200.0f, 150.0f, 100.0f);
    glVertex3f(400.0f, 150.0f, 100.0f);
    glVertex3f(350.0f, 250.0f, 0.0f);
    glVertex3f(250.0f, 250.0f, 0.0f);
    
    glVertex3f(200.0f, 150.0f, -100.0f);
    glVertex3f(400.0f, 150.0f, -100.0f);
    glVertex3f(350.0f, 250.0f, 0.0f);
    glVertex3f(250.0f, 250.0f, 0.0f);
    glEnd();

    // Door
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(280.0f, 0.0f, 101.0f);
    glVertex3f(320.0f, 0.0f, 101.0f);
    glVertex3f(320.0f, 100.0f, 101.0f);
    glVertex3f(280.0f, 100.0f, 101.0f);
    glEnd();

    // Windows
    glColor3f(0.2, 0.2, 0.1);
    glBegin(GL_QUADS);
    // Left window
    glVertex3f(220.0f, 50.0f, 101.0f);
    glVertex3f(260.0f, 50.0f, 101.0f);
    glVertex3f(260.0f, 100.0f, 101.0f);
    glVertex3f(220.0f, 100.0f, 101.0f);
    
    // Right window
    glVertex3f(340.0f, 50.0f, 101.0f);
    glVertex3f(380.0f, 50.0f, 101.0f);
    glVertex3f(380.0f, 100.0f, 101.0f);
    glVertex3f(340.0f, 100.0f, 101.0f);
    glEnd();
}

void draw_object()
{
    land();
    house();
    house3d();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    // Set up the camera
    gluLookAt(cameraX, cameraY, cameraZ,  // Camera position
              0.0f, 0.0f, 0.0f,           // Look at point
              0.0f, 1.0f, 0.0f);          // Up vector

    draw_object();
    glutSwapBuffers();
}

void keyboardFunc(unsigned char key, int x, int y)
{
    switch(key)
    {
        case 'w': // Move forward
            cameraZ -= 10.0f;
            break;
        case 's': // Move backward
            cameraZ += 10.0f;
            break;
        case 'a': // Move left
            cameraX -= 10.0f;
            break;
        case 'd': // Move right
            cameraX += 10.0f;
            break;
        case 'q': // Move up
            cameraY += 10.0f;
            break;
        case 'e': // Move down
            cameraY -= 10.0f;
            break;
        case 'j': // Rotate left
            cameraRotY -= 5.0f;
            break;
        case 'l': // Rotate right
            cameraRotY += 5.0f;
            break;
        case 'i': // Rotate up
            cameraRotX -= 5.0f;
            break;
        case 'k': // Rotate down
            cameraRotX += 5.0f;
            break;
    }
    glutPostRedisplay();
}

void init(void)
{
    glClearColor(0.6196078431372549, 0.9333333333333333, 0.996078431372549, 1.0);
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0f, 1.0f, 0.1f, 2000.0f);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(1000, 600);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("3D Village Scenario");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboardFunc);
    init();
    glutMainLoop();
    return 0;
}
