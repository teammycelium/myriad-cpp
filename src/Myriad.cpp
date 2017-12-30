#include <Magnum/DefaultFramebuffer.h>
#include <Magnum/Platform/GlfwApplication.h>

#include <Magnum/Context.h>
#include <Magnum/Renderer.h>
#include <Magnum/Version.h>

using namespace Magnum;

class Myriad : public Platform::Application {
public:
    explicit Myriad(const Arguments &arguments);

private:
    void drawEvent() override;
};

Myriad::Myriad(const Arguments &arguments) : Platform::Application{arguments} {
    Debug() << "Hello! This application is running on" << Context::current().version() << "using"
            << Context::current().rendererString();
}

void Myriad::drawEvent() {
    defaultFramebuffer.clear(FramebufferClear::Color);

    /* TODO: Add your drawing code here */

    swapBuffers();
}

MAGNUM_APPLICATION_MAIN(Myriad)
