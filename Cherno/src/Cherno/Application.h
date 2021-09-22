#pragma once

#include "Core.h"

namespace Cherno
{
	class CHERNO_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

