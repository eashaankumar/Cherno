#pragma once

#ifdef CN_PLATFORM_WINDOWS

extern Cherno::Application* Cherno::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Cherno::CreateApplication();
	app->Run();
	delete app;
}

#endif
