#pragma once
#include <string>
#include <GLAD/glad.h>
#include <GLFW/glfw3.h>

namespace mr
{
    class Application
    {
    public:
        Application(int windowWidth, int windowHeight, const std::string& windowTitle);
    private:
        void InitWindow(int windowWidth, int windowHeight, const std::string& windowTitle);
        GLFWwindow* mWindow;
    };
}