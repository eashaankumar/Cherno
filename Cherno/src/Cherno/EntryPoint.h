#pragma once

#ifdef CN_PLATFORM_WINDOWS

extern Cherno::Application* Cherno::CreateApplication();

int main(int argc, char** argv)
{
	Cherno::Log::Init();
	CN_CORE_WARN("Initialized Log!");
	int a = 5;
	CN_INFO("Hello! Var={0}", a);

	auto app = Cherno::CreateApplication();
	app->Run();
	delete app;
}

#endif
