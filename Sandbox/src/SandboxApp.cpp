#include <Cherno.h>

class Sandbox : public Cherno::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Cherno::Application* Cherno::CreateApplication() 
{
	return new Sandbox();
}

