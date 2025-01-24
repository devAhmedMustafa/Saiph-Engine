#pragma once

#ifdef SP_PLATFORM_WINDOWS

extern Saiph::Application* Saiph::CreateApplication();

int main(int argc, char** argv) {

	Saiph::Logger::Init();
	SP_CORE_WARN("Initialized Log!");

	printf("Saiph Engine");
	auto app = Saiph::CreateApplication();
	app->Run();
	delete app;

}

#endif