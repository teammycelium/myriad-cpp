#include <Magnum/DefaultFramebuffer.h>

#include "MyriadClient.h"

namespace Myriad {
    namespace Client {
        MyriadClient::MyriadClient(const Arguments &arguments) : Magnum::Platform::Application{arguments} {
            /* TODO: Add your initialization code here */
        }

        void MyriadClient::drawEvent() {
            Magnum::defaultFramebuffer.clear(Magnum::FramebufferClear::Color);

            /* TODO: Add your drawing code here */

            swapBuffers();
        }
    }
}