#pragma once

#include "Renderer/GraphicsContext.h"

struct GLFWwindow;

class OpenGLContext : public GraphicsContext
{
public:
	OpenGLContext(GLFWwindow* WindowHandle);

	virtual void Init() override;
	virtual void SwapBuffers() override;
private:
	GLFWwindow* m_WindowHandle;
};