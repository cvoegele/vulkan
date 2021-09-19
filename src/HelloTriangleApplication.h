//
// Created by cvoegele on 9/19/21.
//

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#ifndef VULKAN_TUTORIAL_HELLOTRIANGLEAPPLICATION_H
#define VULKAN_TUTORIAL_HELLOTRIANGLEAPPLICATION_H

class HelloTriangleApplication {
public:
    void run();

    HelloTriangleApplication(uint32_t width, uint32_t height);

private:
    void initWindow();
    void initVulkan();
    void mainLoop();
    void cleanup();
    void createInstance();

    GLFWwindow* window{};
    int width;
    int height;
    VkInstance instance;

};

#endif //VULKAN_TUTORIAL_HELLOTRIANGLEAPPLICATION_H
