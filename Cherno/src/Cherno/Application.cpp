#include "chpch.h"
#include "Application.h"

#include "Cherno/Events/ApplicationEvent.h"
#include "Cherno/Log.h"

namespace Cherno
{
	Application::Application()
	{

	}
	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			CN_TRACE(e);
		}

		while (true);
	}
}