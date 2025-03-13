#pragma once

#include <types.hpp>

#include <shader.hpp>
#include <window.hpp>

namespace ZG
{
    class RenderCore
    {
        public:
            RenderCore() = default;
            virtual ~RenderCore() = default;

            virtual bool InitializeCore() = 0;
            
            virtual const std::string& GetInitializeError() { return m_InitializeError; }

            virtual bool MakeContextCurrent(Ref<Window> window) = 0; 

            virtual void SetSwapInterval(int swapInterval) = 0; 
            virtual void SetViewport(int x, int y, int width, int height) = 0; 

            virtual Ref<Shader> CreateShader(ShaderType shaderType) = 0;
            virtual Ref<ShaderProgram> CreateProgram() = 0;
            virtual Ref<ZG::Window> CreateWindow() = 0; 
            virtual Ref<ZG::Window> CreateWindow(int width, int height) = 0; 

        protected:
            std::string m_InitializeError;
    };
};