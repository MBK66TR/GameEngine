#pragma once
#include <memory>


namespace eng
{

	class Application;
	class Engine
	{
	public:
		bool Init();
		void Run();
		void Destroy();


		void SetApplication(Application* app);
		Application* GetApplication() const;
	

	private:
		std::unique_ptr<Application> m_application;
	};
}