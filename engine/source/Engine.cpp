#include "Engine.h"
#include "Application.h"

namespace eng
{
	bool Engine::Init()
	{
		if (!m_application)
		{
			return false;
		}
		return m_application->Init();

		return false;
	}

	void Engine::Run()
	{

	}

	void Engine::Destroy()
	{
		if(m_application)
		{
			m_application->Destroy();
			m_application.reset();
		}
	}

	void Engine::SetApplication(Application* app)
	{
		m_application.reset(app);
	}

	Application* Engine::GetApplication() const
	{
		return m_application.get();
	}
}