#include <GLFW/glfw3.h>
#include <GL/gl.h>
#include <bits/stdc++.h>
using namespace std;

static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GL_TRUE);
}

int main(){
    GLFWwindow *window;

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

    if(!glfwInit())
        exit(EXIT_FAILURE);

    window=glfwCreateWindow(800, 800, "Window", NULL, NULL);

    glfwMakeContextCurrent(window);
    glfwSetKeyCallback(window, key_callback);

    while(!glfwWindowShouldClose(window)){
        glBegin(GL_TRIANGLES);
            glColor3f(1.f, 0.f, 0.f);
            glVertex3f(-0.6, -0.4, 0);
            glVertex3f(0.6, -0.4, 0);
            glVertex3f(0, 0.6, 0);
        glEnd();
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}

/*
Compilation: g++ main.cpp -lGL -lglfw
*/
