#include <Saiph.h>

class SandBox : public Saiph::Application {
public:
	SandBox() {

	}

	~SandBox() {

	}
};

Saiph::Application* Saiph::CreateApplication() {
	return new SandBox();
}