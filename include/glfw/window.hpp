#pragma once

#include <GLFW/glfw3.h>

#include <window/window.hpp>

#include <resource.hpp>

namespace GLFW
{
    class Window : public ZG::Window, public ResourceHandle<GLFWwindow*>
    {
        public:
            Window();
            Window(int width, int height); 
            virtual ~Window() override;

            virtual void MakeContextCurrent() override;
            virtual void SwapBuffers() override; 
            virtual void PollEvents() override;

            virtual void SetSize(uint width, uint height) override; 
            virtual void SetTitle(const std::string& title) override;

            virtual uint GetWidth() override; 
            virtual uint GetHeight() override; 

            virtual const std::string& GetTitle() override;

            virtual bool IsRunning() override; 

        protected:
            std::string m_Title; 

    };
}