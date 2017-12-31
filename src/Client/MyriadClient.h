#ifndef MYRIAD_MYRIADCLIENT_H
#define MYRIAD_MYRIADCLIENT_H

#include <Magnum/Platform/GlfwApplication.h>

namespace Myriad {
    namespace Client {
        class MyriadClient : public Magnum::Platform::Application {
        public:
            explicit MyriadClient(const Arguments& arguments);

        private:
            void drawEvent() override;
        };
    }
}

#endif //MYRIAD_MYRIADCLIENT_H
